#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool exists(int target, int *values[], int numEl);
int getNumElements(string name);
void readFile(string name, int *values[], int numEl);
bool checkInt(string str);