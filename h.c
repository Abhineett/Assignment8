#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=8;j++)
        {
            if(j>=6-i&&j<=i+4)
            {
                printf("%d",k);
                k++;
                if(j==5)
                    k--;

            }



            else
                printf(" ");


        }
        printf("\n");


    }
}
