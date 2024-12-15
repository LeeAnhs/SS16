#include <stdio.h>

void sum(int *num1, int *num2, int *result){
    *result = *num1 + *num2;
}

int main() {
    
    int num1 = 10;
    int num2 = 20;
    int result;
    sum(&num1, &num2, &result);

    printf("%d + %d = %d", num1, num2, result);
    
    return 0;

}
