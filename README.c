# fibo
#include<stdio.h>
main()
{
	int a=0,b=1,c,i,n;
	printf("enter the no of digits:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
