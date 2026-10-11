#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
int main(){
	int  x;
	int mask = (1 << 6) + (1 << 2) + 1;
	printf ("X: ");
	scanf ("%d", &x);
	printf ("Mask to check 7th, 3rd and 1st bin on: %d \n" ,mask);
	if ((x & mask) == 0)	printf ("All three bits are off\n");
	if ((x & mask) == 1)	printf ("Only 1st bit is on\n");
	if ((x & mask) == 4)	printf ("Only 3rd bit is on\n");
	if ((x & mask) == 64)	printf ("Only 7th bit is on\n");
	if ((x & mask) == 5)	printf ("1st and 3rd bit is on\n");
	if ((x & mask) == 65)	printf ("1st and 7th bit is on\n");
	if ((x & mask) == 68)	printf ("3rd and 7th bit is on\n");
	if ((x & mask) == 69)	printf ("All three bits are on\n");
	/*int i;
	for (i = 0; i<=69; i*=2){
		if ((x & i) == 1)	printf ("%d is ON", (x & i) == 1);
	}*/
	return 0;
}