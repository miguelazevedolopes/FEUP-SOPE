#include "stdio.h"
#include <unistd.h>
#include<sys/wait.h>
int main(int argc, char const *argv[])
{
    
    int id=fork();
    switch (id)
    {
    case 0/* constant-expression */:
        printf("Hello ");
        break;
    
    default:
        wait(NULL); 
        printf("World");
        break;
    }
    
    return 0;
}
