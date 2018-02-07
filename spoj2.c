#include <stdio.h>
#include <math.h>
void Prime (long int m,long int n)
{  int j,flag;
	long int i;
	if (m==0 || m==1)
		m=2;
	for(i=m;i<=n;i++)
	{
		flag = 0;
		for(j=2;j<=(int) sqrt(i);j++)
		{
	    if(i%j==0)
	    {
		flag =1;
		break;
	    }
	}
	if(flag == 0)
	printf("%ld\n",i);	
	}
printf("\n");
}
int main(void) {
	// your code here
	int t,m,n,i;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
	{
     scanf("%ld",&m);
	 scanf("%ld",&n);
	 Prime(m,n);
	}
	return 0;
}