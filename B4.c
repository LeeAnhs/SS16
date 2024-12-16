#include <stdio.h>

int main () {
    int arr[5]={3,5,2,6,1};
    int *arrNum=arr;
    
    for (int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,*(arrNum+i));
    }
    return 0;
}
