#include<stdio.h>
void main()
{int n,i=1,t;
printf("enter number:");
scanf("%d,",&n);
xyz:
	t=n*i;
	printf("%dX%d=%d\n",n,i,t);
	i=i+1;
	if(i<=10)
	{goto xyz;
	}
}