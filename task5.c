/*Task 5: Input an uppercase English letter. Print its character and ASCII code, then print the ASCII
code of its corresponding lowercase letter by adding 32.*/
#include<stdio.h>
int main(){
	unsigned char upcase;
	printf ("Enter Upper Case Letter:");
	scanf ("%c", &upcase);
	printf ("%c : %d\n", upcase, upcase);
	unsigned char lowcase = upcase | 32;
	printf ("%c : %d\n", lowcase, lowcase);
	return 0;
}