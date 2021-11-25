// Problem 1
/* Task
Input Format

There is one line of text, .

Sample Input 0

Welcome to C programming.

Sample Output 0

Hello, World!
Welcome to C programming. */

#include<stdio.h>
int main()
{
	char s[100];  
	//whitespace input line
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%s",s);
	
	return 0;
}

