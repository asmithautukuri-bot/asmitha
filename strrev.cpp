#include<stdio.h>
#include<string.h>
int main()
{
	char name[20]={"Asmitha\0"};
	strrev(name);
	printf("%s",name);
	return 0;
}
