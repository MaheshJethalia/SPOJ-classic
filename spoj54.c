#include<stdio.h>
int main ()
{
	long long unsigned int tn,d;
	scanf("%llu",&tn);
	scanf("%llu",&d);
	printf("%llu\n",(tn+d)/2);
	printf("%llu\n",(tn-d)/2);
	return 0;
}