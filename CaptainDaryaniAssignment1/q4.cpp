#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Takes the old array and creates a new one with one less element
//Copies the old contents into the new array
//But does not copy the element at the specified index for removal
void removeValue(int *oldValues[], int *values[], int index, int numEl) 
{
	int i = 0;
	int j = 0;
	*values = new int[numEl];
	while (j < (numEl)) {
		if (i != index){
			(*values)[j] = (*oldValues)[i];
			cout << (*values)[j] << endl;
			i += 1;
			j += 1;
		} else {
			i += 1;
		}
	}
}