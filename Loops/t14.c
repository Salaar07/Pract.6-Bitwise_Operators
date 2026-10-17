/*Task 14: Generate two random two-digit numbers a and b (10 to 99). Print
both. Extract the tens and ones digits of each. Print "Digit sums are
equal" if the sum of a's digits equals the sum of b's digits, otherwise
"Digit sums differ". Also print "Same tens digit" if both numbers have the
same tens digit.
Sample Output 1: A: 47, B: 29 Digit sums are equal
Sample Output 2: A: 35, B: 38 Digit sums differ Same tens digit*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	unsigned char a = (rand()%90)+10, b = (rand()%90)+10;;
	printf ("Enter A: %d\nB: %d\n", a,b);
	unsigned char atens = a%10;
	unsigned char aones = a/10;
	unsigned char btens = b%10;
	unsigned char bones = b/10;
	/*while(x>0){
		x = x/10;
		sum += x;
	}*/
	if(atens+aones == btens + bones)	printf ("Digit sums are equal\n");
	else								printf ("Digit sums differ\n");
	if (atens == btens)					printf ("Same ten\n");
	return 0;	
}