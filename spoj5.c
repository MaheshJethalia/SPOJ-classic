#include <stdio.h>
long int Palindrome(long int n)
{
	long int reversedInteger = 0, remainder, originalInteger;
    originalInteger = n;
    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        {
            printf("%ld \n",originalInteger);
            return 0;
        }
        return originalInteger;
       }
int main(void) {
	// your code here
	int t,i;
	long int a;
    scanf("%d", &t);
	for(i=1;i<=t;i++)
	{
    scanf("%ld", &a);
    do
    {
	a=Palindrome(a+1);
    }
    while(a!=0);
	}
	return 0;
}