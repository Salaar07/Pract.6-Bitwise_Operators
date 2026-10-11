/*Task 5: Input an uppercase English letter. Print its character and ASCII code, then print the ASCII
code of its corresponding lowercase letter by adding 32.*/
#include<stdio.h>
int main(){
	unsigned char lowcase,upcase; 
	int user, terminator;
	terminator = 1;
	printf ("Enter\n1for Upper to Lower\n2for Lower to Upper");
	scanf("%d",&user);
	if (user ==1 ){
		while (terminator){	 // don't compare ,it will always evaluate to true unless we give 0 	
		printf ("Enter Upper Case Letter: ");
		scanf (" %c", &upcase);// just make space because at line no 9 after pressing enter the buffer stores enter and later whenver it finds any &(ampersand) it automatically reads that enter and move ahead   
		printf ("%c : %d\n", upcase, upcase);
		lowcase = upcase | 32;
		printf ("%c : %d\n", lowcase, lowcase);
		printf ("Enter 0 to terminate");
		scanf ("%d", &terminator);
		
	}
}
	if (user ==2){
		while (terminator ){
		printf ("Enter Lower Case Letter:");
		scanf (" %c", &lowcase);
		printf ("%c : %d\n", lowcase,lowcase);
		upcase = lowcase & ~(32); // use not operator as it will off the 6th bit & will just produce 1 after (0&1) 
		printf ("%c : %d\n", upcase,upcase);
		printf ("Enter 0 to terminate,");
		scanf ("%d", &terminator);
}
}
	return 0;
}