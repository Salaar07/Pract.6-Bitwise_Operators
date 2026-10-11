/*Task 2: Input an integer. Using the bitwise AND operator with 1 (do not use the % operator), print "Even"
if the number is even and "Odd" otherwise.
Sample Input: 37
Sample Output: Odd*/
#include<stdio.h>
int main(){
	int user;
	printf ("Enter Integer: ");
	scanf ("%d", &user);
	unsigned char evod = user & 1;
	if (evod) 		printf ("Odd");
	else 			printf ("Even");
	return 0;
}