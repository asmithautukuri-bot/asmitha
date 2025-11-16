#include<stdio.h>
int main()
{
	int age=26;
	if(age>=18)
	goto vote;
	else
	printf("not eligible for vote");
	vote:printf("eligible for vote");
	return 0;
	
}
