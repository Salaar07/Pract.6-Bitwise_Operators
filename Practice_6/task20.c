/*Task 20: Input an unsigned integer value from 0 to 255. Check using the 1, 4, 16, and 64 as
second operand,. Print "Pattern matched" only if all four selected bits are ON; otherwise print
"Pattern not matched".
Sample Input:
85
Sample Output:
Pattern matched*/
int main(){
	unsigned char user;
	scanf ("%d", &user);
	unsigned char mask = (1<<6) + (1<<4) + (1<<2) + 1;
	printf ("Mask to check 7th, 5th, 3rd and 1st bit on: %d \n" ,mask);
	int p = user & mask; printf ("%d\n", p);
	if (p == mask)	printf ("Pattern Matched");
	else 				printf ("Pattern Not Matched");
	return 0;
}