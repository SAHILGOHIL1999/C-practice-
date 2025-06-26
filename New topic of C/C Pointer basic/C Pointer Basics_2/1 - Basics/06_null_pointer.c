#include <stdio.h>

int main()
{
    int *ptr = NULL; // Pointer initialized to NULL (points to nothing)
    int num = 25;

    printf("ptr is NULL: %p\n", ptr);

    // Always check if pointer is NULL before using it
    if (ptr == NULL)
    {
        printf("Pointer is NULL, cannot use it\n");
    }

    ptr = &num; // Now ptr points to num

    if (ptr != NULL)
    {
        printf("Now ptr points to num: %d\n", *ptr);
    }

    return 0;
}
