/*Task 16: Generate a random three-digit number (100 to 999). Extract the
hundreds, tens and ones digits using and %. Print the largest digit.
Print "All digits are different" only if no two digits are equal (use a
composite condition).
Sample Output: N: 583 Largest digit: 8 All digits are different
Sample Output 2: N: 727 Largest digit: 7*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	unsigned char a = (rand()%90)+100;
	printf ("A: %d\n", a);
	unsigned char a1 = a/100;
	unsigned char a2 = (a/10)%10;
	unsigned char a3 = a%10;
	int largest;
	if (a1>a2){
		if (a1>a3)		largest = a1;
		else 			largest = a3;	
	}	
	else if (a2> a1){
		if (a2>a3)		largest = a2;
		else 			largest = a3;
	}
	printf ("Largest: %d\n", largest);
	if(a1 != a2 && a1!= a3)		printf ("Digit diff\n");
	return 0;	
}