#include <stdio.h>
int main() 
{
    int Array[50], i, j, temp, size;
    printf("\n Please enter the number of element in an array : n");
    scanf("%d" , &size);
    printf("\n Please enter%d element of an array \n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (i = 0; i< size; i++)
    {
         for (j = i + 1; j < size; j++)
    {
        if(Array[i] > Array[j])
        {
            temp = Array[i]; 
            Array[i] = Array[j];
            Array[j] = temp;
        }
        }
    }
    printf("\n **** array of element in ascending order are :****\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", Array[i]);
    }
    return 0;
}
