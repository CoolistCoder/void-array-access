//the goal of this project is to determine the power of the void pointer
//I'm going to store an array within it
#include <iostream>
using namespace std;
#include "voidpick.h"


int main() {
	//goal: get to position four in the array
	void* store; //the pointer that will hold an array
	int vals[10] = {0,1,2,3,43,5,6,7,8,9}; //the integer array
	store = (void*)vals; //put the integer array into the void pointer
	//square brackets will incorrectly dereference the void pointer
	//must add 4 to the pointer to get to position four(43)
	cout << pick<int>(store,4) << endl; //just go to the fourth position in the array

	return 0;
}

