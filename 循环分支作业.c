#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>//ϵͳͷ�ļ�
#include<time.h>
#include<string.h>//�ַ���ͷ�ļ�

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system(��-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp(),��Ϊ�������
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//goto���ͨ�����ڶ��Ƕ��
//int main()
//{
//again:
//	printf("С�������\n");
//	goto again;
//	return 0;
//}


////��������Ϸ
////1.���Ի�����һ�������
////2.������
//
//void menu()
//{
//	printf("*********  �������Ĳ�����Ϸ  ********\n");
//	printf("*******    1.play   0.exit     ******\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
////1.���������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t�ǳ�����
//	//ʱ�������ǰʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����
//	ret=rand()%100+50;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ 
//			break;
//		case0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




////��ӡ99�˷���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i * j;
//			printf("%d*%d=%-2d ", i, j, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//�ó������е������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//���ֵ��ֹ�����е����Ǹ���Ӧ�ý�max��ֵΪ�����е���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е�Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



//����ʽ��1/1-1/2+1/3-1/4...
//int main()
//{
//	int i= 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double  sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0/ i;
//		}
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}


//��1��100һ���ж��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	    if (i / 10 == 9)
//			count++;
//
//	} 
//	printf("count=%d\n", count);
//	return 0;
//}


//a=����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��������n�־���
//�Ż�����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)//����ż��ֱ��������
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//��ӡ100��200����������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d������\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
 


//����1000��2000֮��һ���ж��ٸ�����
//int main()
//{   
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		 //�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("�ܹ���%d������", count);
//	return 0;
//}

//int main()�򻯰�
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}




//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
// int c=0;
//	scanf("%d%d", &a, &b);
//	while (c=a %b )//��������Ϊ0��Ϊ�٣���������Ϊ���㼴Ϊ��
//	{
//			a = b;
//			b = c;
//		
//	}
//	printf("%d", b);
//
//	return 0;
//}

//��ӡ1��100֮�����ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf(" % d\n", i);
//	}
//	return 0;
//}


//int main()�ɴ�С������ð취
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//���д��scanf("%d��%d��%d", &a, &b, &c);������ʱ����д��2��3��4���������ʽ����һ�£�
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()��С������������취
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	if (a < b && a < c && b < c)
//		printf("%d %d %d", a, b, c);
//	if (a < b && a < c && c < b)
//		printf("%d %d %d", a, c, b);
//	if (b < a && b < c && a < c)
//		printf("%d %d %d", b, a, c);
//	if (b < a && b < c && c < a)
//		printf("%d %d %d",b, c, a);
//	if (c < a && c < b && a < b)
//		printf("%d %d %d", c, a, b);
//	if (c < a && c < b && b < a)
//		printf("%d %d %d", c, b, a);
//	return 0;
//}