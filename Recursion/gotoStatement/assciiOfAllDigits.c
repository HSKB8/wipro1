// C program to print ASCII values of all characters representing digits
#include<stdio.h>
int main()
{
	//counter, it can also be declared as 'char'
	int count;
	//initializing counter by 'a'
	count= '0';
	//definig label
	start:
	printf("%c [%d] ",count,count);
	count++;
	//jumping back to 'stat' if condition is true
	if(count <= '9')
		goto start;
	return 0;
}