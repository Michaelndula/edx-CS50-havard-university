#include <stdio.h>

int main()
{
    int count,number,sum;
    double average;
    sum = 0;
    count = 0;

    while (count<5)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
      sum+=number;
      count++;
      {
      average = (double) sum/number;
      printf("Sum is %d\n",sum);
      printf("Average is %7.2lf\n",average);
      }
      return 0;
    }
}