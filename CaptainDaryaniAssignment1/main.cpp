#include <iostream>
#include <fstream>
#include <string>
#include "q1.h"
#include "q2.h"
#include "q3.h"
#include "q4.h"
using namespace std;

int main(int argc, char** argv)
{
	  // Getting the number of lines/integers in the text file
    int numEl = getNumElements("input.txt");
		int * myValues = new int [7];
		cout << "Starting Array:" << endl;
		cout << "___________________" << endl;
		// Reads the file and prints the contents
		readFile("input.txt", &myValues, numEl);
		
		bool keep_going = true;
		string str;
		cout << "Question 1" << endl;
		cout << "___________________" << endl;
		while (keep_going) {
			cout << "Please enter an integer to search for in the array (Enter Q to quit): ";
			// Gets the input from the user
			getline(cin, str);
			if (str == "Q" || str == "q") {
				// Checks if user has quit
				keep_going = false;
			} else {
				// Checks if input exists in the array or not and informs user
				if (checkInt(str)){
	    		if (exists(stoi(str), &myValues, numEl)){
	    			cout << str << " exists in the array." << endl;
	    		} else {
	    			cout << str << " does NOT exist in the array." << endl;
	    		}
	    	} else {
					//Tells user if input is invalid
	    	 	cout << "Error: Input must be an integer." << endl;
	    	}
			}
		}
		
		string str2;
		int indx;
		int newValue;
		int oldValue;
		bool checkIndex = true;
		bool checkValue = true;
		cout << "Question 2" << endl;
		cout << "___________________" << endl;
		while (checkIndex) {
			cout << "Please enter the index of the element you want to change: ";
			// Gets the index from the user
			getline(cin, str);
				// Checks if index is valid
				if (checkInt(str)){
	    		indx = stoi(str);
						if (indx < 0 || indx >= numEl) {
							//Tells user if index is invalid
							cout << "Error: Index out of range - must be less than " << numEl << endl;
						} else {
							checkIndex = false;			
						}
	    	} else {
					//Tells user if index is invalid
	    	 	cout << "Error: Input must be a valid index." << endl;
	    	}
		}
		while (checkValue) {
			cout << "Please enter the new value for the element: ";
			// Gets the value from the user
			getline(cin, str);
			// Checks if value is valid
			if (checkInt(str)){
    		newValue = stoi(str);
				checkValue = false;
    	} else {
				//Tells user if value is invalid
    	 	cout << "Error: Input must be an integer." << endl;
    	}
		}
		
		//Tells user what the old value was at the index and what it was replaced with.
		oldValue = replaceValue(indx, &myValues, newValue);
		cout << "The old value at index " << indx << " was " << oldValue << "." << endl;
		cout << "The new value at index " << indx << " is now " << myValues[indx] << "." << endl;
		
		checkValue = true;
		cout << "Question 3" << endl;
		cout << "___________________" << endl;
		while (checkValue) {
			cout << "Please enter the value you are adding to the array: ";
			// Gets the value from the user
			getline(cin, str);
			// Checks if value is valid
			if (checkInt(str)){
    		newValue = stoi(str);
				checkValue = false;
    	} else {
				//Tells user if value is invalid
    	 	cout << "Error: Input must be an integer." << endl;
    	}
		}
		
		//Adds the new value to the array and prints the contents of the array to the screen.
		int * newValues = new int [7];
		addValue(&myValues, &newValues, newValue, numEl);
		cout << "As shown above, " << newValue << " has been added to the array." << endl;
		numEl += 1;
		
		checkIndex = true;
		cout << "Question 4" << endl;
		cout << "___________________" << endl;
		while (checkIndex) {
			cout << "Please enter the index of the element you want to remove: ";
			// Gets the index from the user
			getline(cin, str);
				// Checks if index is valid
				if (checkInt(str)){
	    		indx = stoi(str);
						if (indx < 0 || indx >= numEl) {
							//Tells user if index is invalid
							cout << "Error: Index out of range - must be less than " << numEl << endl;
						} else {
							checkIndex = false;			
						}
	    	} else {
					//Tells user if index is invalid
	    	 	cout << "Error: Input must be a valid index." << endl;
	    	}
		}
		
		//Removes element at that index and prints the contents of the array to the screen.
		oldValue = newValues[indx];
		int * finalValues = new int [7];
		removeValue(&newValues, &finalValues, indx, numEl -1);
		cout << "As shown above, the value " << oldValue << " at index " << indx << " has been removed from the array" << endl;
		
    return 0;
}



 