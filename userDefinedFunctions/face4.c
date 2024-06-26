#include <stdio.h>
void createFace()
{
    printf("| | |\n");
    printf(" O O\n");
    printf(" ---\n");
    return;
}
int main()
{
    for(int i = 0; i < 5; i++)
    { 
        createFace(); 
    }
    return 0;
}