/*Task 3: Input an unsigned integer value from 0 to 255. Use the 7 as second operand to obtain
the last three bits and print their decimal value.*/
#include<stdio.h>
int main(){
	unsigned char user;
	unsigned char i = 1;
	do{
		printf ("Enter a integer(0-255)\n");
		scanf ("%d", &user);
		int val = user & 7;
		printf ("Value of last three bits: %d\n", val);
		printf ("Enter 0 to terminate the program:");
		scanf ("%d", &i);
	}
	while (i != 0);
return 0;
}