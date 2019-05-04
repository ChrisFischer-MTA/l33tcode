// Christopher R. Fischer
// 5/3/2019
// l33tcode 709 tolower
// Submission #226607181

// It is assumed that it is in bad faith to use
// C's included function to do this.
char *toLowerCase(char *str)
{
	int i;
	for(i = 0; str[i] != '\0'; i++)
	{
		// Check to make sure it's in our "range"
		if(str[i] <= 'Z' && str[i] >= 'A')
			str[i] += ('a'-'A');
	}
	return str;
}


