#include<stdio.h>
int main()
{
    int size, choice,choice1 ;

    do{
    printf("\n Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("\n Enter the array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n Which type of sort do you want? \n Press 1 for ascending order. \n Press 2 for descending order.\n");
    scanf("%3d", &choice);
    printf(" Before sorting: ");
    for(int i=0; i<size; i++)
    {
    printf(" %d ", array[i]);
    }printf("\n After sorting: ");
    if(choice==1)
    {
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int a=array[j];
                array[j]=array[j+1];
                array[j+1]=a;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        printf(" %d ", array[i]);
    }
    }
    else if(choice==2)
    {
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]<array[j+1])
            {
                int a=array[j];
                array[j]=array[j+1];
                array[j+1]=a;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        printf(" %d ", array[i]);
    }
    }
    printf("\n\n Do you want to sort more? \n If yes press 1 otherwise press 0 for exit.");
    scanf("%d", &choice1);
    }while(choice1==1);
    return 0;
}
