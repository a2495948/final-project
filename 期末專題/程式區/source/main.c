#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{
	printf("\t=========================================================\n");
	printf("\t 歡迎來到算術殿堂!!這裡可以加強你的運算能力，來試看看吧!!\n");
	printf("\t=========================================================\n\n");
	printf("\t************************規則講解*************************\n");
	printf("\t*\t  請依序回答下列問題，注意先乘除後加減\t\t*\n");
	printf("\t*\t  請迅速作答，否則電腦將於1分鐘後關機 \t\t*\n");
	printf("\t*\t讀完這些後，時間大概剩下50秒，最好快一點!!\t*\n");
	printf("\t*********************************************************\n\n\n");
	int i,sum,product,minus,all;
	int number[6];
	int a[4];
	//system("shutdown -s -t 60");
	srand(time(0));
	for (i = 0; i <=5; i++)
	{
		number[i] = rand() % 9 + 1;
	}

	product = number[0] * number[1];
	sum		= number[2] + number[3];
	minus	= number[4] - number[5];
	all = (number[0] * number[5] + number[2] * number[1] - number[3] + number[4]);
	printf("\t請開始作答下列題目:\n\n");
A:  printf("\t輸入%d * %d的值 :", number[0], number[1]);
	scanf_s("%d",&a[0]);
	printf("\t輸入%d + %d的值 :", number[2], number[3]);
	scanf_s("%d",&a[1]);
	printf("\t輸入%d - %d的值 :", number[4], number[5]);
	scanf_s("%d",&a[2]);
	printf("\t輸入%d * %d + %d * %d - %d + %d的值 :", number[0] , number[5] , number[2] , number[1] , number[3] , number[4]);
	scanf_s("%d",&a[3]);




	if ((a[0]==product)&&(a[1]==sum)&&(a[2]==minus)&&(a[3]==all))
	{
		system("shutdown -a");
		printf("\n\t\t解除關機!!真聰明!!");
	}
	else
	{
		printf("\t這麼簡單也會算錯，要不要回去讀國小?\n\n");
		goto A;
	}
	printf("\n\n\t\t設計者:林俊峰、林承翰、陳弘其\n\t\t謝謝大家，這是我們的期末專題!~~\n\n");
	system("pause");
	return 0;
	
}
