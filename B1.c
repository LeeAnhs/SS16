#include <stdio.h>


int main () {
    int y=5;
    int *yPtr=&y;
    printf("Dia chi bien y la:%lu\n"),(unsigned long)&y;
    printf("Dia chi cua bien y duoc luu tru tai yPtr:%lu\n",(unsigned long)&yPtr);
    
    printf("Gia tri ma yPtr tham chieu toi la:%d\n",*yPtr);
    printf("Gia tri cua bien y la:%d\n",y);
    
    return 0;
}
