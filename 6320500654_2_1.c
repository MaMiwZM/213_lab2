#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,r=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    r=a+b+c;
    if(r>=80&&r<=100)
    {
        printf("A");
    }
    else if(r>=75&&r<=79)
    {
        printf("B+");
    }
    else if(r>=70&&r<=74)
    {
        printf("B");
    }
    else if(r>=65&&r<=69)
    {
        printf("C+");
    }
    else if(r>=60&&r<=64)
    {
        printf("C");
    }
    else if(r>=55&&r<=59)
    {
        printf("D+");
    }
    else if(r>=50&&r<=54)
    {
        printf("D");
    }
    else if(r>=0&&r<=49)
    {
        printf("F");
    }
    return 0;
}
