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
	printf ("A: %d\n", a);
	unsigned char alast = a%10;
	unsigned char afirst = a/100;
	int i =1, count = 0;
	while(i<=100){
	unsigned char a = rand()%900 + 100;
	unsigned char alast = a%10;
	unsigned char afirst = a/100;
	if(afirst == alast)	{
	printf ("A: %d\n", a); count++;	//printf ("Palindrome\n");
}	//else						printf ("Not a Palindrome\n");
	i++;
}
	//if ((afirst + aones) & 1)			printf ("Odd\n");
	printf ("No. of Palindromes : %d", count);
	return 0;	
}