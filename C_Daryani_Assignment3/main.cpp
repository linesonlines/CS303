#include <iostream>
#include <queue>
#include "Q1.h"
#include "Q2.h"
#include "Q5.h"
using namespace std;

int main()
{
		cout << "Question 1" << endl;
		cout << "___________________" << endl;
	// Initializes queue with 1, 2, 3, 4
    queue<int> my_q;
    my_q.push(1);
    my_q.push(2);
    my_q.push(3);
    my_q.push(4);
 
	// Print queue
		cout << "Queue before to_rear()" << endl;
    printQ(my_q);
	// Calls to_rear()
		to_rear(my_q);
	// Print queue
		cout << "Queue after to_rear()" << endl;
    printQ(my_q);
		
		bool keep_going = true;
		cout << "Question 2" << endl;
		cout << "___________________" << endl;
		string str;
		while (keep_going) {
		cout << "Please enter a phrase to check if it is a palindrome (Enter Q to quit): ";
		// Gets the input from the user
		getline(cin, str);
		if (str == "Q" || str == "q") {
			// Checks if user is done checking for palindromes
			keep_going = false;
		} else {
			// Checks if input is palindrome and tells user if it is or not
			if (isPalindrome(str)){
	    	cout << str << " is a palindrome." << endl;
	    } else {
	    	cout << str << " is NOT a palindrome." << endl;
	    }
		}
		}
		
		cout << "Question 5" << endl;
		cout << "___________________" << endl;
		// Initializes the data
    map<string, string> stateDataMap;
    stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
    stateDataMap.insert(pair<string, string>("New York", "Albany"));
    stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
    stateDataMap.insert(pair<string, string>("California", "Sacramento"));
    stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
    stateDataMap.insert(pair<string, string>("Texas", "Austin"));
		
		// Prints the data
		printInfo(stateDataMap);
		
		// Changes data
		stateDataMap.at("California") = "Los Angeles";
		cout << "Capital of California has been changed to Los Angeles" << endl;
		
		// Has user enter the state they want the capital for
		keep_going = true;
		// Checks if user has quit yet
		while (keep_going) {
			keep_going = findCapital(stateDataMap);
	  }
		
    return 0;
}
