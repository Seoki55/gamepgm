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
printf("간식 만들기\n\n");
printf("1. 돈카츠 \n");
printf("2. 파스타\n");
printf("3. 프로그램 종료\n\n");
printf("메뉴번호 입력>");
select=getch()-48;
return select;
}
void porkcutlet(void)
{
system("cls");
printf("돈카츠 만드는 방법\n");
printf("중략\n");
press_any_key();
}
void pasta(void)
{
system("cls");
printf("파스타 만드는 방법\n");
printf("중략\n");
press_any_key();
}
void press_any_key(void)
{
printf("\n\n");
printf("아무키나 누르면 메인 메뉴로...");
getch();
}



