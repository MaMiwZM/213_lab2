#include<stdio.h>
int main()
{
    char n;
    int a=0,nc;
    scanf("%c",&n);
    scanf("%d",&a);
    nc=n-a;
    if(a%10==5)
    {
        printf("%c",92);
    }
    if(nc%2==0)
    {
        if(n>=65&&n<=73)
        {
            printf("{@_@}");
        }
        else if(n>=74&&n<=82)
        {
            printf("{*v*}");
        }

        else if(n >=83&&n<=90)
        {
            printf("{x_x}");
        }
    }
    else
    {
        if (n>=65&&n<= 73)
        {
            printf("(^_^)");
        }

        else if(n>=74 &&n<= 82)
        {
            printf("(*o*)");
        }

        else if(n>=83&&n<= 90)
        {
            printf("(T_T)");
        }
    }
    if(a%10==5)
        printf("/");
    return 0;
}
