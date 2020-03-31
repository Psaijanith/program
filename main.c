#include<stdio.h>
int main()
{
    int k, start, end, mid, n, val_find, arr[100];
    printf("Enter number of elements u want to be in the array:\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (k = 0; k< n; k++)
        scanf("%d", &arr[k]);
    printf("Enter the value to find:\n");
    scanf("%d", &val_find);
    start= 0;
    end = n - 1;
    mid = (start + end) / 2;
    while (start <= end) {
        if (arr[mid] < val_find)
            start = mid + 1;
        else if (arr[mid] == val_find) {
            printf("%d is there at index position %d.\n", val_find, mid);
            break;
        }
        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    if (start > end)
        printf("Not there %d isn't there in the given list.\n", val_find);
    return 0;
}