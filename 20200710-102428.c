#include<stdio.h>

int main()
{
int n,i;
i=1;
printf("Enter a number:");
scanf("%d",&n);
do
{printf("%d\n",i);
i=i+2;
}while(i<=n);
return 0;
}
