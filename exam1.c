#include <stdio.h>
void print_title();
void printf_information(void);
int main()
{
print_title();
print_information();
 
return 0;
}
 
void print_title()
{
printf("===============================\n");
printf("==      C 프로그래밍 과제    ==\n");
printf("==  사인 함수 그래프 그리기  ==\n");
printf("===============================\n");
}
 
void print_information(void)
{
printf("\n\n");
printf("%30s \n", "부산경상 대학교");
printf("%30s \n", "IT");
printf("%30s \n", "노재웅");
}
