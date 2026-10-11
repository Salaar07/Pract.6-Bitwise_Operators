/*Task 5: Input an unsigned char x and a bit position p (1 to 8, counted from the right). Using the AND
operator with a complemented mask (~), turn OFF the p-th bit of x and print the new value of x.
Sample Input 1:
X: 21
Position: 1
Sample Output 1:cX after clearing bit 1: 20*/
#include<stdio.h>
int main(){
	unsigned char x;
	int  p, mask;
	printf ("Enter X:");
	scanf ("%d", &x);
	printf ("Bit Position P:");
	scanf ("%d", &p);
	mask = 1 << (p-1);
	//printf ("Mask: %d\n", mask);
	mask = ~mask;
	//printf ("Mask: %d\n", mask);
	x = x & mask;
	printf ("X after Clearing bit %d: %d\n",p, x);
	return 0;	
}