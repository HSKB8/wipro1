#include <stdio.h>
void createFace();
int main()
{
    for(int i = 0; i < 5; i++)
    { 
        createFace(); 
    }
    return 0;
}
void createFace()
{
    printf("| | |\n");
    printf(" O O\n");
    printf(" ---\n");
    return;
}