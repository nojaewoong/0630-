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
printf("==      C ���α׷��� ����    ==\n");
printf("==  ���� �Լ� �׷��� �׸���  ==\n");
printf("===============================\n");
}
 
void print_information(void)
{
printf("\n\n");
printf("%30s \n", "�λ��� ���б�");
printf("%30s \n", "IT");
printf("%30s \n", "�����");
}
