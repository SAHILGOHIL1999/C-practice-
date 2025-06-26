#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "apple";
    char s2[] = "banana";
    int cmp = strcmp(s1, s2); // negative if s1<s2, zero if equal, positive if s1>s2
    if (cmp < 0)
        printf("%s comes before %s\n", s1, s2);
    else if (cmp > 0)
        printf("%s comes after %s\n", s1, s2);
    else
        printf("Strings are equal\n");
    return 0;
}