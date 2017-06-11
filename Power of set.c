//Power Set
//Power Set Power set P(S) of a set S is the set of all subsets of S. 
//For example S = {a, b, c} then P(s) = {{}, {a}, {b}, {c}, {a,b}, {a, c}, {b, c}, {a, b, c}}.
//If S has n elements in it then P(s) will have 2^n elements

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printPowerOfSet(char *set_char,int set_size);
void main (void)
{
	
	char set[] = {'a','b','c'};
	int set_size = 3;
	printPowerOfSet(set,set_size);
}

void printPowerOfSet(char *set_char,int set_size)
{
	int powerset;
	char i , j,k;
	powerset =	pow(2,set_size);
	for(i = 0; i<powerset;i++)
	{
		for(j=0;j<set_size;j++)
		{
			k = i&(1<<j);
			if(k)
	 			printf("%c",set_char[j]);
		}
		printf("\n");
	}
}


