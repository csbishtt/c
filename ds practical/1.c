#include <stdio.h>
void second_nonrepeat(int arr[], int s)
{
    int i, j;
    int f, fcount, count = 0;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                break;
            }
        }

        if (j == s)
        {
            if (count == 2)
            {
                break;
            }

            else
            {
                f = i + 1;
                fcount = arr[i];
                count++;
            }
        }
    }

    printf("The non repeating second array[%d] = %d: \n", f, fcount);
}

int main()
{
    int s, i;
    printf("enter the size of array :");
    scanf("%d", &s);
    int arr[s];
    printf("enter the elements of array :");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    second_nonrepeat(arr, s);
    return 0;
}