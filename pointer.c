#include<stdio.h>
int main()
{
	int i,*j,**k;
	i=3;
	j=&i;
	k=&j;
	printf("Address of i:%u\n",&i);
	printf("Address of i:%u\n",j);
	printf("Value of i:%u\n",*j);
	printf("Value of j:%d\n",(&j));
}
