// Christopher R. Fischer
// 5/4/2019
// l33tcode problem 961 - N repeated elements
#include <limits.h>

#define MAX_NUMBER 10000


// O(n) solution.
// Restriction(s): A must be 0<=10,000
// Submission #226781506
int repeatedNTimes(int* A, int ASize)
{
	// Variable Declerations
	int i;
	int *storage = calloc(MAX_NUMBER+1, sizeof(int));
	
	// Loop through every element, as needed.
	for(i = 0; i < ASize; i++)
	{
		// Go to A[i], and fetch the value stored there.
		// if storage[value] is equal to one, then it's repeated and
		// we return our solution. Else, set that area equal to one.
		if(storage[(A[i])])
			return A[i];
		else
			storage[(A[i])] = 1;			
	}
	// This should NEVER happen, as our input specifications
	// guarantee a solution.
	return -1;
}


