
// C++ program for printing 
// the rectangular pattern 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print the pattern 
void printPattern(int n) 
{ 
    // number of rows and columns to be printed 
    int s = 2 * n - 1; 
  
    // Upper Half 
    for (int i = 0; i < (s / 2) + 1; i++) { 
         
        int m = n; 
  
        // Decreasing part 
        for (int j = 0; j < i; j++) { 
            cout << m << " "; 
            m--; 
        } 
  
        // Conatsant Part 
        for (int k = 0; k < s - 2 * i; k++) { 
            cout << n - i << " "; 
        } 
  
        // Increasing part. 
        m = n - i + 1; 
        for (int l = 0; l < i; l++) { 
            cout << m << " "; 
            m++; 
        } 
  
        cout << endl; 
    } 
  
    // Lower Half 
    for (int i = s / 2 - 1; i >= 0; i--) { 
		int j;
        // Decreasing Part 
        int m = n; 
        for (j = 0; j < i; j++) { 
            //cout << m << " "; 
            m--;
			printf("(%d,%d)=%d ",i,j,m);
        } 
  
        // Constant Part. 
        for (int k = 0; k < s - 2 * i; k++) { 
            //cout << n - i << " "; 
			printf("(%d,%d)=%d ",i,j++,m);
        } 
  
        // Decreasing Part 
        m = n - i + 1; 
        for (int l = 0; l < i; l++) { 
            //cout << m << " "; 
            m++; 
			printf("(%d,%d)=%d ",i,j++,m);
        } 
        cout << endl; 
    } 
} 
// Driven Program 
int main() 
{ 
    int n = 3; 
  
    printPattern(n); 
    return 0; 
}