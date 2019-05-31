#include <stdio.h>
#include <stdlib.h>
struct servitor
{
   char id[8],name[12];
   int hourly_pay,hours,payment;
};
void calc(struct servitor []); 
int main(void)
{
   struct servitor emp[4];
   int i=0;
   	   printf("計算機概論實務-基礎練習作業-作業22\n");
	   printf("製作人：郭柏鋒\n");
	   printf("完成時間：2019/05/07 01:15\n");
	   printf("-------------------------------------------------\n");
	   printf("                 輸出每個人的收入                \n");
	   printf("-------------------------------------------------\n");
   do { 
	   printf("請輸入第%d位的編號,姓名,時薪,工作時數:", i+1); 
       scanf(" %s %s %d %d", emp[i].id, emp[i].name, &emp[i].hourly_pay, &emp[i].hours);
       i++;
   } while (i<4);
   calc(emp);
   printf("月收入總表：\n");
   for (i=0; i<4; i++)
      printf("編號：%s 姓名：%s　月收入: %d\n",emp[i].id, emp[i].name, emp[i].payment);
   system("pause");
   return 0; 
}

void calc(struct servitor p[])
{
    int i;
    for (i=0; i<4; i++)
       p[i].payment=p[i].hourly_pay*p[i].hours;
}

