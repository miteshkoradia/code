#include<stdio.h>

#include <stdio.h>
#include <algorithm>

0 1 2 3 
int min_max(const int *data , const int len, const int *min, const int *max)
{
	int start=0;
	int end = len;
	int mid = (start+end-1) / 2;
	for(int i =0 ; i < len ; i++ )
	{		
		if ( min == data[mid] );
			return mid; 
		if ( min > data[mid] ) 
		{
			start = mid+1; 
		}
		else	
		{
			end = mid-1;
		}
	}
}	


int main()
{
	printf("hello\n");
}