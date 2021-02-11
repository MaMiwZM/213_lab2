#include<stdio.h>
int main()
{
    int day,mon,result;
    scanf("%d %d",&day,&mon);
    if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
    {
        result=(31+day)%7;
    }
    else if(mon==4||mon==6||mon==9||mon==11)
    {
        result=(30+day)%7;
    }
    else if(mon==2)
    {
        result=(28+day)%7;
    }
    if(result==0)
    {
        printf("7");
    }
    else
    {
        printf("%d",result);
    }
    return 0;

}
