/*Task 11: Generate a random two-digit number (10 to 99). Print the number
and the sum of its digits.
Sample Output: N: 47 Sum of digits: 11*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	unsigned char x = (rand()%100)+10;
	printf ("Enter X: %d\n", x);
	unsigned char i = 1;
	unsigned char sum = x%10;
	while(x>0){
		x = x/10;
		sum += x;
	}
	printf ("Sum: %d", sum);
	return 0;	
}