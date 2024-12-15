#include <stdio.h>
    
void swap2(int *input1,int *input2){
    int temp=*input1;
    *input1=*input2;
    *input2=temp;
}
int main () {
    int num1=10;
    int num2=5;
    
    printf("Number 1 truoc khi swap:%d\n",num1);
    printf("Number 2 truoc khi swap:%d\n",num2);
    
    swap2(&num1,&num2);
    
    printf("Number 1 sau khi swap:%d\n",num1);
    printf("Number 2 sau khi swap:%d\n",num2);
    
    return 0;
    
}
