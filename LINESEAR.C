#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],x,pos=0,i,n;
	clrscr();
	printf("Enter the numbers of element in list:");
	scanf("%d",&n);
	printf("Enter the elements of list:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	printf("Enter item to be searched:");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		if(a[i]==x)
		{
			pos=i;
			break;
		}
	}
	if(pos>0)
	{
		printf("Element found at position:%d",pos);
	}
	else
		printf("\nElement not found");
		getch();
}