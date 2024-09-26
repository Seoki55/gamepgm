-숫자 자리 수 분리

코드

#include <stdio.h>
#include <conio.h>
#include <math.h>
void serial_number(long number);
void reverse_number(long number);

int main(void)
{
   long number=12345698;
   printf("입력 숫자 : %ld\n\n", number);
   printf("높은 단위부터 출력\n");
   serial_number(number);
   printf("\n낮은 단위부터 출력\n");
   reverse_number(number);
printf("press any key to continue.......");
getch();
   return 0;
}

void serial_number(long number)
{
   int num;
   int i, length=0;
   length=(int)(log10(number)+1);  //최대 자리수 계산
   for(i=length;i>=1;i--)
   {
     num=number/(long) pow(10, i-1);
     printf("%ld\n", num);
     number=number-num*(long) pow(10,i-1);
    }
    printf("\n");
}

void reverse_number(long number)
{
   while(number>0)
   {
	   printf("%ld\n", number%10);
	   number/=10;
   }
}

코드 분석

이 코드는 수를 높은 단위, 낮은 단위로 출력하는 코드이다.

이 코드에서 나오는 수는 12345698이다.

분석을 해보자면 높은 수부터 출력을 할 때는 밑이 10인 로그를 취한 다음 그 것에 1을 더한 후 정수 부분만 가져와서 천만 자리부터 일의 자리까지 출력하고

낮은 수부터 출력할 때는 10으로 나눈 나머지로 일의 자리부터 천만 자리까지 출력한다.












