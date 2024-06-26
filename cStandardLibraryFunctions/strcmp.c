// strcmp(): This function compares two strings lexically.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "apple";
    char b[100] = "banana";
    int result = strcmp(a, b);
    if (result < 0)
    {
        printf("%s comes before %s\n", str1, str2);
    }
    else if (result > 0)
    {
        printf("%s comes after %s\n", str1, str2);
    }
    else
    {
        printf("%s and %s are the same\n", str1, str2);
    }
    return 0;
}
