#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{
	printf("\t=========================================================\n");
	printf("\t �w��Ө��N����!!�o�̥i�H�[�j�A���B���O�A�Ӹլݬݧa!!\n");
	printf("\t=========================================================\n\n");
	printf("\t************************�W�h����*************************\n");
	printf("\t*\t  �Ш̧Ǧ^���U�C���D�A�`�N��������[��\t\t*\n");
	printf("\t*\t  �Ш��t�@���A�_�h�q���N��1���������� \t\t*\n");
	printf("\t*\tŪ���o�ǫ�A�ɶ��j���ѤU50��A�̦n�֤@�I!!\t*\n");
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
	printf("\t�ж}�l�@���U�C�D��:\n\n");
A:  printf("\t��J%d * %d���� :", number[0], number[1]);
	scanf_s("%d",&a[0]);
	printf("\t��J%d + %d���� :", number[2], number[3]);
	scanf_s("%d",&a[1]);
	printf("\t��J%d - %d���� :", number[4], number[5]);
	scanf_s("%d",&a[2]);
	printf("\t��J%d * %d + %d * %d - %d + %d���� :", number[0] , number[5] , number[2] , number[1] , number[3] , number[4]);
	scanf_s("%d",&a[3]);




	if ((a[0]==product)&&(a[1]==sum)&&(a[2]==minus)&&(a[3]==all))
	{
		system("shutdown -a");
		printf("\n\t\t�Ѱ�����!!�u�o��!!");
	}
	else
	{
		printf("\t�o��²��]�|����A�n���n�^�hŪ��p?\n\n");
		goto A;
	}
	printf("\n\n\t\t�]�p��:�L�T�p�B�L�ӿ��B������\n\t\t���¤j�a�A�o�O�ڭ̪������M�D!~~\n\n");
	system("pause");
	return 0;
	
}
