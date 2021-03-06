#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int len, int *ara);

int main()
{
    int len, *ara, *reset, i;

    printf("How many number: ");
    scanf("%d", &len);
    printf("Enter number: ");

    ara = malloc(sizeof(int) * len);
    reset = ara;

    for(i = 0; i < len; i++)
    {
        scanf("%d",ara++);
    }

    ara = reset;

    bubbleSort(len, ara);

    printf("Sorted Array: ");

    for(i = 0; i < len; i++)
    {
        printf("%4d ", ara[i]);
    }

    return 0;
}

void bubbleSort(int len, int *ara)
{
    int i, pass, temp;

    for(pass = 1; pass < len; pass++)
    {
        for(i = 0; i < len-1; i++)
        {
            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }
        }
    }
}
