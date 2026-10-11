/*
Task 1: Input an alphabet character (uppercase or lowercase). Using the XOR operator with 32, toggle its
case (uppercase becomes lowercase and lowercase becomes uppercase) and print the character before
and after. (Hint: t1.c used | 32 to force lowercase; here the same bit is flipped instead.)
Sample Input 1: T
Sample Output 1: t
Sample Input 2: g
Sample Output 2: G*/
#include<stdio.h>
int main(){
	unsigned char user;
	printf ("Enter Alphabet: ");
	scanf ("%c", &user);
	printf ("Alphabet: %c\n", user);
	user = user ^ 32;
	printf ("Alphabet: %c ", user);
	return 0;
}