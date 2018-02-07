#include <stdio.h>
void main ()
{
	int a[5],i,j,key;
	printf("Enter 5 numbers");
	for (i=0;i<5;i++)
		scanf("%d",&a[i]);
	for (j=1;j<5;j++)
	{
       key = a[j];
       i=j-1;
       while (a[i]<key && i>=0)
        {
       	a[i+1]=a[i];
        	--i;
        }
      a[i+1]=key;       
	}
	for (i=0;i<5;i++)
		printf("%d  ",a[i]);
system("PAUSE");
}