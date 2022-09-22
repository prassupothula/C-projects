#include<stdio.h>
void main()
{
    int n,count=0,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            printf("not prime");
            break;
        }
      printf("prime");
    }

   /* if(count==2)
    {
        printf("%d is not prime");
    }
    else
    {
        printf("%d is  prime");
    }*/
}
