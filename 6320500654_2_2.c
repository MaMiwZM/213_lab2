#include<stdio.h>
int main()
{
    float time,pro1=199,pro2=299;
    int a,b,c,re,l;
    char cha;
    scanf("%c",&cha);
    scanf("%f",&time);
    a=time;
    c=a;
    a*=100;
    b=a;
    b%=100;
    printf("test a= %d\n",a);
    if(cha=='A')
    {
        if(a>200)
        {
            l=c-200;
            l=l*60;
            l=(l+a)/20;
            re=pro1+l;
            printf("%.2f",re);
        }
    }
}
