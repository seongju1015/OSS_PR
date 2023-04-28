#include <stdio.h>

int plus(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}
int main(){
    int n1, n2;
    int result_1;
    printf("두 숫자를 입력\n");
    scanf("%d %d",&n1, &n2);
    result_1 = plus(n1,n2);
    printf("덧셈 결과는: %d",result_1);

    return 0;
}
