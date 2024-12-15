#include <stdio.h>


int main () {
    int y=5;
    int *yPtr=&y;
    printf("Dia chi bien y la:%lu\n"),(unsigned long)&y;
    printf("Dia chi cua bien y duoc luu tru tai yPtr:%lu\n",(unsigned long)&yPtr);
    
    return 0;
}
