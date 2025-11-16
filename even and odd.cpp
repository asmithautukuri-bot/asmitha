#include<stdio.h>
int main()
{
	int number=26;
	if(number%2==0)
	goto even;
	else
    goto odd;
	even:printf("%d is even",n);
	return 0;
	odd:printf("%d is odd ",n);
	return 0;
}
