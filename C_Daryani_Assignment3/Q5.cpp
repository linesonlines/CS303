#include <iostream>
#include <string>
#include <map>
using namespace std;

void printInfo(map<string, string> stateDataMap){
    map<string, string>::iterator itr;
		// Iterates through the map and prints each pair
    for(itr=stateDataMap.begin();itr!=stateDataMap.end();itr++)
    {
        cout<<itr->first<<" : "<<itr->second<<endl;
    }
	}
	
	
bool findCapital(map<string, string> stateDataMap){
		string state;
	  cout << "Please enter the state you would like to know the captial for (Enter Q to quit): ";
		// Gets the input from the user
		getline(cin, state);
		// Returns false if user has quit
		if (state == "Q" || state == "q") {
			return false;
		} else {
			// Checks for valid entry
		if (stateDataMap.count(state) == 0) {
		  cout << "There is no data on " << state << endl;
		} else {
			// The at() method accesses the capital given a state
		  cout << "The capital of " << state << " is " << stateDataMap.at(state) << endl;
		}
		return true;
	}
	}
	
	
	