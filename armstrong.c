#include<stdio.h>
#include<math.h>
int main()
{
	int a,d,sum=0,n;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		d=n%10;
		sum=sum+pow(d,3);
		n=n/10;
	}
	if(sum==a)
	{
		printf("armstrong");	
	}
	else
	{
		printf("not armstrong");
	}	
}
