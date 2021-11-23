#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter your nth natural number is :");
    scanf("%d",&n);

    int sum = 0;
    float avg;
    for(i=1;i<=n;i++)
    {
        printf("Number-%d :",i);
        scanf("%d",&j);
        sum = sum + j;

    }
    avg =(float)sum/n;
    printf("Total sum is : %d\n",sum);
    printf("Total average is :%.2f",avg);
    getch();
}
