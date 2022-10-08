#include<stdio.h>
int minmax(int a[],int start,int end)
{
	if(start==end)
	{
		int c[2];
		c[0]=a[start];
		c[1]=a[start];
		return c;
	}
	if(end=start+1)
	{
		int c[2];
		if(a[start]>a[end])
		{
			c[0]=a[end];
			c[1]=a[start];
		}
		else
		{
			c[0]=a[start];
			c[1]=a[end];
		}
		return c;
	}
	else
	{
		int mid=(start+end)/2;
		int *right,*left;
		right=minmax(a,0,mid);
		left=minmax(a,mid+1,end);
		int ans[2];
		printf("right=%d %d\n",right[0],right[1]);
		printf("left=%d %d\n",left[0],left[1]);
		ans[0]=(right[0]<=left[0])?right[0]:left[0];
		ans[1]=(right[1]>=left[1])?right[1]:left[1];
		return ans;
	}
}

void main()
{
	int i,n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int* k;
	k=minmax(a,0,n-1);
	printf("Maximum : %d\nMinimum : %d",*(k+1),*(k));
}
