#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    int counter=0;
    while(1){
        counter++;
        long *number=(long*)malloc(5000000000);
        printf("%d\n",counter);
        if(number==NULL){
            printf("smg");
            return 1;
        }
        sleep(1);
    }
    return 0;
}
