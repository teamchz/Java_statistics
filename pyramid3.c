#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int i=0;i<a;i++)
    {
        for(int j=a-1;j>i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<(2*i)+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }  

    for(int i=0;i<=a-2;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf(" ");
        }

        for(int k=0;k<(a*2)-(3+(i*2));k++)
        {
            printf("*");
        }
    printf("\n");
    }

}