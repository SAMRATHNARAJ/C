#include<stdio.h> 
#include<conio.h>
int main()
{
    int n,rev=0,rem,sum=0;
    scanf("%d",&n);
 while(n!=0)
    {
        rem=n%10;
sum=sum+(rem*rem);
        n=n/10;
    }
    printf("%d",sum);
	return 0;
}
