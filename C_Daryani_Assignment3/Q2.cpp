#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(string str)
{
	//Get the length of string
    int size = str.length();
     
		//Length of 1 or 0 is a palindrome
		if (size == 0){
			return true;
		} else if (size == 1) {
			return true;
		} else {
			//Check if start and end are the same
			if (str[0] == str[size-1]) {
				if (size == 2) {
					//Length of 2 is palindrome if start and end are the same
					return true;
				} else {
					//Remove the start and end of the string, and call this method again
					return (isPalindrome(str.substr(1,size-2)));
				}
			} else {
				//If start and end are not the same it is not a palindrome
				return false;
			}
		}
}
 