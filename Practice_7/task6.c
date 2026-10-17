/*Task 6: Input an unsigned char x and a bit position p (1 to 8, counted from the right). Using the XOR
operator with a mask, toggle (flip) the p-th bit of x and print the new value of x. Toggle it a second time
and print the value again to show that the original value comes back.
Sample Input:
X: 21
Position: 3
Sample Output:
After first toggle: 17
After second toggle: 21*/
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
	//printf ("Mask: %d\n", mask);
	x = x ^ mask;
	printf ("X after after first toggle of bit %d:  %d\n",p, x);
	x = x ^ mask;
	printf ("X after second toggle of bit %d:	 %d\n",p, x);
	return 0;	
}