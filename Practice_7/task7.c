/*Task 7: Input a flag (0 or 1) and a value between 0 and 127. Store both in a single unsigned char, using
the leftmost bit for the flag and the remaining seven bits for the value. Print the packed byte, then
recover and print the flag and the value from it.
Sample Input:
Flag: 1
Value: 100
Sample Output:
Packed byte: 228
Recovered Flag: 1
Recovered Value: 100*/
#include<stdio.h>
int main(){
	unsigned char flag, value;
	int mask;
	printf ("Flag: ");
	scanf (" %d", &flag);
	printf ("Value: ");
	scanf (" %d", &value);
	mask = flag<<7;
	if (flag)		value = value ^ mask;
	printf ("Packed Byte: %d", value);
	return 0;
	
}