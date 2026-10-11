/*Task 1: Input an unsigned integer value from 0 to 255. Using 16 as second operand, print "Bit 5
is ON" if the bit worth 16 is on. Otherwise, print "Bit 5 is OFF".
Sample Input:
48
Sample Output:
Bit 5 is ON*/
#include<stdio.h>
int main(){
	unsigned char user;
	unsigned char i = 1;
	while (i != 0){
		printf ("Enter a integer(0-255)\n");
		scanf ("%d", &user);
		if (user & (1<<4))		printf ("Bit 5 is ON\n");
		else 					printf ("Bit 5 is OFF\n");
		printf ("Enter 0 to terminate the program:");
		scanf ("%d", &i);		
	}
	printf ("Program Terminated");
	return 0;
}