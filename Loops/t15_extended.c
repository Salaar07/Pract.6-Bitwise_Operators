/*Task 15: Generate a random Three digit number (100 to 999). Print it. Print
"Palindrome" if its tens digit equals its ones digit, otherwise "Not a
palindrome". Also print whether the sum of its digits is "Even" or "Odd".
Sample Output: N: 55 Palindrome Digit sum is Even
Sample Output 2: N: 47 Not a palindrome Digit sum is Odd*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	unsigned char a = rand()%900 + 100;
	printf ("Enter A: %d\n", a);
	unsigned char alast = a%10;
	unsigned char afirst = a/100;
	if(afirst == alast)			printf ("Palindrome\n");
	else						printf ("Not a Palindrome\n");
	//if ((afirst + aones) & 1)			printf ("Odd\n");
	return 0;	
}