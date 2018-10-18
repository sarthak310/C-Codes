int main()
{
	int a,d,p=1;
	scanf("%d",&a);
	d=2;
	while(d<a)
	{
		if(a%d!=0)
		{
			d=d+1;
			continue;
		}
		else
		{
			p=0;
			break;
		}
	}
	if(p==1)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
