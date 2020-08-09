// 정수 2개를 입력 받아 +, -, *, / 를 계산하여 출력하는 프로그램을 작성하시오(나눗셈은 소수점 두째자리까지 출력할 것).

#include <stdio.h>
 
 
int main (void)
{
    int num1=2, num2=3;
    scanf("%d %d",&num1, &num2);
    printf("%d\n", num1+num2);
    printf("%d\n", num1-num2);
    printf("%d\n", num1*num2);
    printf("%d\n", num1/num2);
    printf("%d\n", num1%num2);
    printf("%.02f", (float)num1/(float)num2);
    
    return 0;
}
