#include <stdio.h>
int main()
{
    int a[10], pos, num, size;

    printf("Enter the size : ");
    scanf("%d", &size);

    printf("Enter the element : ");
    for (int i = 0; i < size - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the desire number: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size + 1)
    {
        printf("Invaild");
    }

    else
    {
        for (int i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
            a[pos - 1] = num;
            size++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", a[i]);
    }

    return 0;
}