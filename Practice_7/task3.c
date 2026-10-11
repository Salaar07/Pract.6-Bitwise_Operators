/*Task 3: Input an unsigned integer x between 0 and 1000. Using only shift operators, print x multiplied by
8 and x divided by 4 (integer division).Sample Input: 13
Sample Output: Left shift by 3 (x * 8): 104
Right shift by 2 (x / 4): 3*/
#include<stdio.h>*/
#include<stdio.h>
int main(){
	unsigned int x;
	printf ("X(0-1000): ");
	scanf ("%u", &x);
	printf ("X*8: %u\n",x<<3);
	printf ("X/4: %u\n",x>>2);
	return 0;	
}