#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Returns the old value that is replaces
//Modifies the array to replace the value at the index with a new value
int replaceValue(int indx, int *values[], int newValue)
{
	int oldValue = (*values)[indx];
	(*values)[indx] = newValue;
	return oldValue;
}