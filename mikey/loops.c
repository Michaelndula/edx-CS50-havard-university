#include <stdio.h>

int main(void)
{
    int sum,number,count;
    double average;
    sum=0;

    for(count=0;count<5;count++)
    {
        printf("enter a number: ");
        scanf("%d",&number);

        sum+=number;//sum=sum+number
    }
    average=(double) sum/number;
    {
        printf("sum is %d\n",sum);
        printf("average is %7.2lf\n",average);
    }
    return 0;
}