#include<stdio.h>
int main()
{
    int a,b,bc[5],c,i,j;
    char ac[5];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }
    if(a>c)
    {
        i=a;
        a=c;
        c=i;
    }
    if(b>c)
    {
        i=b;
        b=c;
        c=i;
    }
    scanf("%s",ac);
    for(j=0;j<3;j++)
    {
        if(ac[j]=='A')
        {
            bc[j]=a;
        }
        else if(ac[j]=='B')
        {
            bc[j]=b;
        }
        else if(ac[j]=='C')
        {
            bc[j]=c;
        }
    }
    printf("%d %d %d",bc[0],bc[1],bc[2]);
    return 0;
}
