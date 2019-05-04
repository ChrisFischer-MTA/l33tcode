// Christopher R. Fischer
// 5/3/2019
// L33tcode Problem Jewels and Stones
// Given two strings, find characters that occur in s1 and s2. Count the number of occurences.
// Submission #226605608

#include <ctypes.h>
#include <limits.h>



int numJewelsInStones(char * J, char * S){
	// Naturally, ASCII is used by l33tcode, so we can give up a relatively 
	// small space in exchange for O(MAX{J_LEN, S_LEN}) runtimes.
	char *keys = malloc(sizeof(char) * (UCHAR_MAX));
	int count = 0, index;
	// Fill keys with zeros
	memset(keys, 0, sizeof(char) * UCHAR_MAX);
	// Loop through J.
	for(index = 0; J[index] != '\0'; index++)
	{
		// The readability here isn't great.
		// I am going to J[index], retrieving the (ASCII) value
		// and then setting that value of keys = 1;
		keys[J[index]] = 1;
	}
	
	for(index = 0; S[index] != '\0'; index++)
	{
		if(keys[S[index]] == 1)
			count++;
	}
	return count;
}


