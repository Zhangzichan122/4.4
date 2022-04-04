#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>//系统头文件
#include<time.h>
#include<string.h>//字符串头文件

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system(）-执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑将在1分钟之内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp(),若为零则相等
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//goto语句通常用于多层嵌套
//int main()
//{
//again:
//	printf("小婷婷你好\n");
//	goto again;
//	return 0;
//}


////猜数字游戏
////1.电脑会生成一个随机数
////2.猜数字
//
//void menu()
//{
//	printf("*********  张子禅的猜字游戏  ********\n");
//	printf("*******    1.play   0.exit     ******\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
////1.生成随机数
//	int ret = 0;
//	int guess = 0;
//	//用时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t是长整型
//	//时间戳：当前时间-计算机的起始时间（1970.1.1.0：0：0）=（xxx）秒
//	ret=rand()%100+50;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏 
//			break;
//		case0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




////打印99乘法表
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



//得出数组中的最大数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//最大值防止数组中的数是负数应该将max赋值为数组中的数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素个数
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



//计算式子1/1-1/2+1/3-1/4...
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


//数1到100一共有多少个9
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


//a=多少
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

//素数求解的n种境界
//优化方案
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)//跳过偶数直接算奇数
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

//打印100到200的所有素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
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
//			printf("%d是素数\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
 


//计算1000到2000之间一共有多少个闰年
//int main()
//{   
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		 //判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
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
//	printf("总共有%d个闰年", count);
//	return 0;
//}

//int main()简化版
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




//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
// int c=0;
//	scanf("%d%d", &a, &b);
//	while (c=a %b )//括号里面为0即为假，括号里面为非零即为真
//	{
//			a = b;
//			b = c;
//		
//	}
//	printf("%d", b);
//
//	return 0;
//}

//打印1到100之间三的倍数
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


//int main()由大到小输出，好办法
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//如果写成scanf("%d，%d，%d", &a, &b, &c);则输入时必须写成2，3，4（与输入格式必须一致）
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

//int main()由小到大输出，笨办法
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