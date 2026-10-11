/*Task 8: Input a lowercase English letter. Using the 223 as second operand to turn off the bit
worth 32 and print the resulting character and ASCII code.
Sample Input:
u
Sample Output:
U, 85*/
#include<stdio.h>
int main(){
	unsigned char user;
	scanf ("%c", &user);
	user = user & 223;
	printf ("%c %d", user , user);
	return 0;
}