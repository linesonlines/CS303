#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Checks if the value exists by iterating through the array
//returns true if found, false otherwise
bool exists(int target, int *values[], int numEl)
{
	int num = 0;
	while (num < numEl) {
		if ((*values)[num] == target) {
			return true;
		}
		num += 1;
	}
	return false;
}

//Returns number of lines/integers in a file
int getNumElements(string name)
{
	  int num = 0;
		string line;
    ifstream myInput(name);
    if (myInput.is_open())
    {
    	while ( getline(myInput,line) )
    	{
        num += 1;
    	}
      myInput.close();
  	}
		return num;
}

//Reads the contents of the file and prints them to the screen
void readFile(string name, int *values[], int numEl)
{
    *values = new int[numEl];
		string line;
		int num = 0;
    ifstream myInput(name);
    if (myInput.is_open())
    {
    	while ( getline(myInput,line) )
    	{
				(*values)[num] = stoi(line);
				cout << (*values)[num] << endl;
				num += 1;
    	}
      myInput.close();
  	}
}

// Returns true if a string is an integer, false otherwise
bool checkInt(string str) 
{
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
   return true;
}