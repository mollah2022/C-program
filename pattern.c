#include<stdio.h>

int main()
{
    int number,collum,row;

    printf("Please enter the number:");
    scanf("%d",&number);

    for(row=1;row<=number;row++)
    {
        for(collum=1;collum<=number;collum++)
        {
            if(row==1 || row==number || collum==1 || collum==number )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
