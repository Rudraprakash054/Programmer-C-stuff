#include<stdio.h>
#include<stdlib.h>
main()
{
	long int gram,n;
	float s=0.3,f;
	int cd;
	printf("*** Chicken Pakoda Business ***\n");
	x:
	printf("Enter the quantity of chicken in grams:\n");
	scanf("%d",&gram);
	if(gram>=2500)
	{
		printf("I'm sorry!! Out of Stock\n");
	}
	else
	{
		f=gram*s;
		printf("\n %d grams of cost is %f\n",gram,f);
	}
	printf("If you want to continue press 1?\n");
	scanf("%d",&cd);
	if(cd==1)
	{
		goto x;
	}
	else if(cd!=1)
	{
	   return 0;
	}
}
