#include <stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
       s=n*i; 
       printf("%d\t",s);
    }
    return 0;
}

