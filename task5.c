/*Task 5: Input an uppercase English letter. Print its character and ASCII code, then print the ASCII
code of its corresponding lowercase letter by adding 32.*/
#include<stdio.h>
int main(){
	unsigned char lowcase,upcase, user, terminator;
	terminator = 1;
	printf ("Enter\n1for Upper to Lower\n2for Lower to Upper\n: ");
	scanf("%d", &user);
	if (user ==1){
		while (terminator){		
		printf ("Enter Upper Case Letter:");
		scanf (" %c", &upcase);
		printf ("%c : %d\n", upcase, upcase);
		lowcase = upcase | 32;
		printf ("%c : %d\n", lowcase, lowcase);
		printf ("Enter 0 to terminate, any other digit to keep running");
		scanf ("%d", &terminator);
}
}
	if (user ==2){
		while (terminator){
		printf ("Enter Lower Case Letter:");
		scanf ("%c", &lowcase);
		printf ("%c : %d\n", lowcase, lowcase);
		upcase = lowcase & ~32;
		printf ("%c : %d\n", upcase, upcase);
		printf ("Enter 0 to terminate, any other digit to keep running");
		scanf ("%d", &terminator);
}
return 0;
}
}
	