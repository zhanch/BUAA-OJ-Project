#include<stdio.h>

int a,b,c;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
	while(~scanf("%d%d%d",&a,&b,&c))
	{
		if(a&1)
		{
			puts("GzhIsSoHandsome");
		}
		else
		{
			int tmp=gcd(b,c);
			if((a>>1)%tmp)
			{
				puts("GzhIsSoHandsome");
			}
			else
			{
				printf("%d\n",a/tmp-1);
			}
		}
	}
}
