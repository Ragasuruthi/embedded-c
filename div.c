#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if ((num%5==0 || num%3==0 || num%5==0 && num%3==0))
    {
        printf("it is divisible by 5 and 3");
    }
    else{
        printf("it is not dividible by 5 and 3");
    }
    return 0;
}