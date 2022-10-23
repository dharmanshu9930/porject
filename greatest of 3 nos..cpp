# include <stdio.h>
int main()
{
int a=0;
printf("enter 1 no.");
scanf("%d",&a);
int b=0;
printf("enter 2 no.");
scanf("%d",&b);
int c=0;
printf("enter 3 no.");
scanf("%d",&c);
int d=((a>b?a:b)>c?(a>b?a:b):c);
printf("%d",d);

}

