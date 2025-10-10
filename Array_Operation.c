#include <stdio.h>

int main()
 {
    int arr[5] = {10, 20, 30, 40, 50};
    int pos, num;

    printf("Initial array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter position (0 to 4) to insert number: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= 5)
    {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter number to insert: ");
    scanf("%d", &num);

    arr[pos] = num;

    printf("Array after insertion: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
