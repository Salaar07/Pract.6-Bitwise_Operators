/*Task 4: Input an unsigned char x and a bit position p (1 to 8, counted from the right, as in t7.c). Using the
OR operator with a mask, turn ON the p-th bit of x and print the new value of x.
Sample Input 1:
X: 20
Position: 1
Sample Output 1:
X after setting bit 1: 21*/
#include<stdio.h>
#include<math.h>
int main(){
	unsigned char x;
	int  p, mask;
	printf ("Enter X:");
	scanf ("%d", &x);
	printf ("Bit Position P:");
	scanf ("%d", &p);
	//p =  (pow(2,p)); oops it was wrong but id like to keep it interesting
	mask  = 1 << (p-1);
	printf ("%d\n", p);
	//printf("Before OR: x = %u, p = %u, mask = %u\n", x, p, mask);
	x = x | mask;
	printf ("X after pth bit On: %d", x);
	return 0;	
}