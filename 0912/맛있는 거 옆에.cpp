#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int menu_display(void);
void porkcutlet(void);
void pasta(void);
void press_any_key(void);

int main(void)
{
int c;
while((c=menu_display()) != 3)
{
switch(c)
{
case 1 : porkcutlet();
break;
case 2 : pasta();
break;
default : break;
}
}
return 0;
}
int menu_display(void)
{
int select;
system("cls");
printf("���� �����\n\n");
printf("1. ��ī�� \n");
printf("2. �Ľ�Ÿ\n");
printf("3. ���α׷� ����\n\n");
printf("�޴���ȣ �Է�>");
select=getch()-48;
return select;
}
void porkcutlet(void)
{
system("cls");
printf("��ī�� ����� ���\n");
printf("�߷�\n");
press_any_key();
}
void pasta(void)
{
system("cls");
printf("�Ľ�Ÿ ����� ���\n");
printf("�߷�\n");
press_any_key();
}
void press_any_key(void)
{
printf("\n\n");
printf("�ƹ�Ű�� ������ ���� �޴���...");
getch();
}



