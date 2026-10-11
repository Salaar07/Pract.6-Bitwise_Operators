/*Task 9: Input an unsigned integer value from 0 to 255. Use the 3 as second operand and print
one of the following exact messages: "Last two bits: 00", "Last two bits: 01", "Last two bits: 10",
or "Last two bits: 11".
Sample Input:
14
Sample Output:
Last two bits: 10*/
#include<stdio.h>
int main(){
	unsigned char user;
	scanf ("%d", &user);
	user = user & 3;
	if (user ==0)			printf ("Last two bits: 00");
	else if (user ==1)		printf ("Last two bits: 01");
	else if (user == 2)		printf ("Last two bits: 10");
	else					printf ("Last two bits: 11");
	return 0;
}