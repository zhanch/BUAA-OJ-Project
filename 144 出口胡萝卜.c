#include<stdio.h>

int a[7];
unsigned long long res;

void solve()
{
	res=0;
	int i;
	for(i=0;i<7;++i)
	{
		if(a[i]<0)
		{
			a[i]=0;
		}
	}
	res=a[6];
	if(a[5]>0)
	{
		res+=a[5];
		a[1]-=11*a[5];
	}
	if(a[4]>0)
	{
		res+=a[4];
		if(a[2]>=5*a[4])
		{
			a[2]-=5*a[4];
		}
		else
		{
			a[1]-=(20*a[4]-4*a[2]);
			a[2]=0;
		}
	}
	if(a[3]>0)
	{
		if(a[3]%4==0)
		{
			res+=a[3]/4;
			a[3]=0;
		}
		else
		{
			res+=a[3]/4+1;
			if(a[3]%4==1)
			{
				if(a[2]>=5)
				{
					a[2]-=5;
					a[1]-=7;
				}
				else
				{
					a[1]-=(27-4*a[2]);
					a[2]=0;
				}
			}
			else if(a[3]%4==2)
			{
				if(a[2]>=3)
				{
					a[2]-=3;
					a[1]-=6;
				}
				else
				{
					a[1]-=(18-4*a[2]);
					a[2]=0;
				}
			}
			else
			{
				if(a[2]>=1)
				{
					a[2]-=1;
					a[1]-=5;
				}
				else
				{
					a[1]-=9;
				}
			}
		}
	}
	if(a[1]<0)
	{
		a[1]=0;
	}
	res+=(a[2]*4+a[1])/36;
	if((a[2]*4+a[1])%36)
	{
		res+=1;
	}
	printf("%llu\n",res);
}

int main()
{
	while(~scanf("%d",a+1))
	{
		int i;
		for(i=2;i<7;++i)
		{
			scanf("%d",a+i);
		}
		solve();
	}
}
