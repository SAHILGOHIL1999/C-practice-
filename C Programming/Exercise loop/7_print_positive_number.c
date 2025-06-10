    #include <stdio.h>

    // Accept 10 values and print negative numbers.

    int main()
    {
        int i = 0, val;

        while (i < 10)
        {
            printf("Enter a value = ");
            scanf("%d", &val);

            if (val < 0)
            {
                printf("Negative number is %d\n", val);
            }

            i++;    // Increment regardless of the input value
        }
        return 0;
    }
