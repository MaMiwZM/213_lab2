#include<stdio.h>
int main()
{
    float time,pro1=199,pro2=299,re;
    int a,b,c,l=0;
    char cha;
    scanf("%c",&cha);
    scanf("%f",&time);
    a=time;
    c=a;
    time*=100;
    b=time;
    b%=100;
    if(cha=='A')
    {
        if(a>200)
        {
            l=c-200;
            l=l*60;
            l=(l+b)/20;
            re=pro1+l;
            printf("%.2f",re);
        }
    }
    if(cha=='B')
    {
        if(a>400)
        {
            l=c-400;
            l=l*60;
            l=(l+b)/30;
            re=pro2+l;
            printf("%.2f",re);
        }
    }
    return 0;
}
