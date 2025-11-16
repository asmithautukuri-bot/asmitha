#include <stdio.h>
int main()
{
	char op;
	double num1, num2;
	printf("Enter operator(+,-,*,|):");
	scanf("%c",&op);
	printf("Enter two number:");
	scanf("%1f %1f",&num1,&num2);
	{
		switch(op){
		case-'+':
			printf("sum=%1f\n", num1+num2);
			break;
	    case-'-':
	    	printf("difference=&1f\n", num1-num2);
	    	break;
	    case-'*':
	    	printf("product=%1f\n", num1*num2);
	    	break;
	    case-'|':
	    	printf("quotient=%1f\n" ,num1/num2);
	    	break;
	    default:
	    	printf("invalid operator");
           }
	      
	}	
        return 0;
}


