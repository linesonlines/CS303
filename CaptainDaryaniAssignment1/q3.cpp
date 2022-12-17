#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Takes the old array and creates a new one with one more element
//Copies the old contents into the new array
//Finally, it adds the new element to the array
void addValue(int *oldValues[], int *values[], int newValue, int numEl) 
{
	int n = 0;
	*values = new int[numEl];
	while (n < (numEl)) {
		(*values)[n] = (*oldValues)[n];
		cout << (*values)[n] << endl;
		n += 1;
	}
	(*values)[numEl] = newValue;
	cout << (*values)[n] << endl;
	
}