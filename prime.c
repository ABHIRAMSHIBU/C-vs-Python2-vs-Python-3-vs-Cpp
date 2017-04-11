#include<stdio.h>
int main()
{
	int i,j,flag=0;
	for(i=2;i<10000;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			
			if(i%j==0)
				flag=1;
		}
		if(flag==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
