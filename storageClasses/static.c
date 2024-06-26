#include <stdio.h>
void count(int n);
int main()
{
    count(0);
    return 0;
}
void count(int n)
{
    
    int s = 0;
    if (n > 10)
        return;
    s += n;
    printf("s = %d\n", s);
    count(s);
    return;
}