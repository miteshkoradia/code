//docker run --name gcc -e HOST_IP=192.168.1.249 -v //d/google_code:/src -t -i ubuntu /bin/bash

//https://www.interviewbit.com/problems/prettyprint/
#include <stdio.h>
#include <stdlib.h>
//#include <algorithm>

/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** prettyPrint(int A, int *len1, int *len2) {
	int s = 2*A-1;
	int **output;
	*len1 = *len2 = s;
	output = (int **) malloc(sizeof(int *) * s) ;
	for (int i=0; i<s ; i++)
		output[i] = (int *) malloc(sizeof(int) * s) ;
	int oi=0,oj=0;
	//Upper half
	for (int i =0 ; i < s/2+1 ; i++)
	{
		int m=A;
		oj=0;
		//decreasing 
		for (int j =0 ; j < i ; j++)
			output[oi][oj++] = m--;
		
		//const 
		for (int k =0 ; k < s-2*i ; k++)
			output[oi][oj++] = A-i;
		
		//increasing
		m = A - i + 1;
		for (int l =0 ; l < i ; l++)
			output[oi][oj++] = m++;
		
		oi++;
		
	}
	
	//lower half
	for (int i =(s/2)-1 ; i >=0  ; i--)
	{
		int m=A;
		oj=0;
		//decreasing 
		for (int j =0 ; j < i ; j++)
		{			
			output[oi][oj++] = m--;
			//printf("(%d,%d)=%d ",oi,oj,m);
		}
		
		//const 
		for (int k =0 ; k < s-2*i ; k++)
		{
			output[oi][oj++] = A-i;
			//printf("(%d,%d)=%d ",oi,oj,m);
		}
		
		
		//increasing
		m = A - i + 1;		
		for (int l =0 ; l < i ; l++)
		{
			output[oi][oj++] = m++;
			//printf("(%d,%d)=%d ",oi,oj,m);
		}		
		oi++;
	}
	return output;
	
}

int main()
{
	int len1,len2;
	int **output = prettyPrint(3,&len1,&len2);
	
	for (int i =0 ; i < len1 ; i++)
	{
		for (int j =0 ; j < len2 ; j++)
			printf("%d ",output[i][j]);
		printf("\n");
	}
}