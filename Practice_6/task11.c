/*Task 11: Input an unsigned integer value from 0 to 255. Use 8 and 16 as second operand, to
determine whether the two corresponding bits are both ON, both OFF, or one is ON and the
other is OFF. Print the appropriate exact message.
Sample Input 1:
24
Sample Output 1:
Both bits are ON
Sample Input 2:
48
Sample Output 2:
First is On and Second is Off
Sample Input 2:
40
Sample Output 2:
First is Off and Second is On*/
#include <stdio.h>
int main(){
	unsigned char user, bit4,bit5;
	scanf ("%d", &user);
	bit4 = user & 8;
	bit5 = user & 16;
	//printf ("%d  %d\n", bit4,bit5);
	if (bit4 == 8){
		if (bit5 == 16)	 printf ("Both bits are ON");
		else 			 printf ("First is Off and Second is ON");
	}
	else if (bit5 ==16){
		if (bit4 ==8)	 printf ("Both bits are ON");
		else 			 printf ("First is ON and Second is Off");
	}
	else 	printf ("Both are Off");
	return 0;
}