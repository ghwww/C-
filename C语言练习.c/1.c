#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int main()
//	/*int a = 10;
//	#define a 1
//	int wtw[a] = { 0 };
//	printf("伟\n");
//	printf("a=%d\n",a);
//	return 0;*/
//
//
//
//	//enum 职业
//	//{
//	//	边路,中单,打野=100,辅助,射手
//	//};
//	//int main()
//	//{
//	//	printf("%d\n", 中单);
//	//	/*边路 = 1;enum定义的枚举常量不可变*/
//	//	enum 职业 s = 打野;
//	//	printf("%d\n", 边路);
//	//	printf("%d\n", 打野);
//	//	printf("%d\n", 辅助);
//	//	printf("%d\n", 射手);
//	//		return 0;
//    //};
//
////int main()
////{
////	//%c 是格式说明符，用于打印字符，%s 是格式说明符，用于打印字符串
////	printf("%c\n", '\\');// \为转义字符的转义序列符，单个无法正常输出
////	printf("%c\n", '\100');// \100表示八进制的100，为十进制的64，并将其用ASCII码表的@表示出来
////	printf("%s\n", "\x45");// \x--x后面为两位16进制数字，并将其转为十进制后用ASCII码的E
////	printf("%s\n", "\x21");// \x--x后面为两位16进制数字，并将其转为十进制后用ASCII码的！
////	return 0;
////}
//
//
////int main()
////{
////	int a = 0;
////	printf("你想学好编程码>：(选择1 ro !0）\n");
////	scanf("%d", &a);
////	if(a == 1)
////	{
////		printf("那就好好加油\n");
////	}
////	else
////	{
////	printf("稳了！全都稳了！\n");
////}
////	return 0;
////}
//
//
////int main()
////{
////	//整型除以整形为整形，结果为1
////	int a = 9 / 5;
////	//浮点型的整形除以整形，为1.000000（6个）
////	//float型只能让结果精确到小数点后六位
////	float a1 = 9 / 5;
////	float a2 = 9.0 / 5;
////	int a3 = 9 % 5;//取模（取余）
////
////	//移动操作符  <<   >>
////	int b = 3;//b的二进制为00....0011
////	b = b << 1;//  <<将b的二进制的开头去零，结尾加一个零变为00...0110,在十进制里由3变为6
////
////	int c = 5;
////	c += 6;//c=c+6,-=,*=,/=同理
////	printf("%d\n", a);
////	printf("%f\n", a1);
////	printf("%f\n", a2);
////	printf("%d\n", a3);
////	printf("%d\n", b);
////	printf("%d\n",c);
////	return 0;
////}
//
////Add(int x, int y)//定义一个求和函数
////{
////	int z;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int num1, num2;
////	printf("输入两个数并用空格隔开\n");
////	scanf("%d%d",&num1,&num2);
////	//正常方式输入两个数求和
////	//int num12 = num1 + num2;
////	// --------------------------------------//
////	//使用Add定义一个求和函数进行求和
////	int num12 = Add(num1, num2);
////	printf("%d+%d=%d\n", num1, num2, num12);
////	return 0;
////}
//
//
//
////int main()
////{
////	//数组
////	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
////	//[10]指十个元素，但arr[9]指下标9的元素（第一个元素为下标0）
////	printf("%d\n",sizeof (arr));//对于sizeof操作符后面的参数可加可不加（）
////	printf("%d\n",sizeof (arr[0]));
////	printf("%d\n",sizeof (arr)/sizeof (arr[0]));//可计算出arr数组中元素个数（总字节数/单个字节数）
////	int i=0;
////	while (i<10)//while循环
////	{
////		printf("%d ",arr[i]);//arr[i]是下标为i的元素
////		i++;
////	}
////	return 0;
////}
// 
//
//
////void test()
////{
////	static int a = 1;
////	//增加static改变局部变量a的生命周期使a不会被销毁，从栈区里被放到静态区
////	//本质上改变了变量的存储类型
////	a++;
////	printf("%d ",a);
////}
////int main()
////{
////	int a = 0;
////	while (a < 10)
////	{
////		test();
////		//test中的a在没有被static修饰前为局部变量，不会累计++
////		a++;
////	}
////	return 0;
////}
// 
//
//////exretn引用外部声明变量
////extern int g_val;
////extern int a_val;
////extern int b_val;
/////*extern */int Add(int, int);//引用外部声明函数Add
////int main()
////{
////	printf("%d\n", g_val);
////	printf("%d\n", a_val);
////	printf("%d\n", b_val);
////	int c_val = Add(g_val, a_val);//引用Add函数后使用
////	printf("%d\n", c_val);
////	return 0;
////}
// 
//
////#define MAX 713
////#define Add(x,y) x+y
////int main()
////{
////	printf("%d\n", MAX);
////	printf("%d\n", Add(2, 3.5));
////	return 0;
////}
//
//
////int main()
////{
////	int a = 5;
////	//将a的地址打印出来
////	printf("%p\n", &a);
////	int* pa = &a;
////	//将a的地址取出给到pa
////	printf("%d\n",a);
////	*pa = 6;
////	//*  解引用操作符，通过pa找到a，并把a的值进行修改
////	printf("%d\n", a);
////	return 0;
////}
//
//
////#define wtw 10
////int main()
////{
////	//const int wtw = 10;
////	char arr[wtw] = { 'w','t','w' };
////	//字符串的[]中不能使用变量，const修饰的变量也不行
////	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
////		printf("%c ", arr[i]);
////	}
////	char a = '\060';
////	printf("\n%c\n", a);
////	return 0;
////}
// 
//
////int Max(int, int);
////int main()
////{
////	int a, b;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", Max(a, b));
////}
//
//
////int main()
////{
////	printf("     **\n");
////	printf("     **\n");
////	printf("************\n");
////	printf("************\n");
////	printf("************\n");
////	printf("    *  *    \n");
////	printf("    *  *    \n");
////	return 0;
////}
//
//
//
////int main()
////{
////	int a;
////	//请输入一个1到100的整数
////	scanf("%d", &a);
////	if (a % 5 == 0)
////	{
////		printf("YES\n");
////	}
////	else
////	{
////		printf("NO\n");
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int i = 1;
////	printf("%d,%d", i++, ++i);
////	return 0;
////}
// 
//
//
//////找出指定范围内的素数和非素数
////int main()
////{
////	int a, i, n;
////	n = 1;
////	for (i = 3; i <= 200; i++)
////	{
////		for (a = 2; a <= i; a++)
////		{
////			if ( i % a == 0)//判断i是否为素数
////			{
////				n=a;//每次都能将n初始化，将内循环的a带到外循环的n
////				if (i == a)
////				{
////					break;//执行该break跳出内循环则不满足外循环外的if（i%n！=0）
////				}
////				printf("%d 不是素数\n", i);
////				break;//执行该break跳出内循环则满足if（i%n！=0），输出“是素数”
////			}
////		}
////		if(i==n)//防止将非素数输出为素数
////		printf("%d 是素数\n", i);
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int a = 0;
////	while ((a = getchar()) != EOF)//遇到ctlr+z（文件结束符）之前会一直读取输出每一个字符
////	{
////		putchar(a);
////		//printf("%c\n", a);
////	}
////	return 0;
////}
//
//
//
//
////getchar和putchar的特性
////int main()
////{
////	char password[20] = { 0 };
////	printf("请输入密码:>");
////	printf("%s ", password);
////	scanf("%s", password);//结尾需要回车读取结束
////	printf("请确认密码（Y/N）\n");
////	//getchar();//将上一个scanf在缓冲区剩下的回车读取掉，保证后续程序正常执行
////	int type;
////	while(type=getchar()!='\n')
////	{
////		;
////	}
////	int ch = getchar();
////	if (ch == 'Y')
////	{
////		printf("确认成功\n");
////	}
////	else
////	{
////		printf("确认失败\n");
////	}
////	return 0;
////}
//
//
//
//
////int main()
////{
////	int f1, f2, f3, i;
////	int n;
////	scanf("%d", &n);//对n赋值指定输出斐波那契数列个数
////	printf("1\n");
////	for (f1 = 0, f2 = 1, f3 = 0, i = 1;;)
////	{
////		f3 = f1 + f2;
////		printf("%d\n", f3);
////		i++;
////		if (i == n)
////			break;
////		f1 = f3 + f2;
////		printf("%d\n", f1);
////		i++;
////		if (i == n)
////			break;
////		f2 = f1 + f3;
////		printf("%d\n", f2);
////		i++;
////		if (i == n)
////			break;
////		//printf("%d\n", f3);
////
////	}
////	return 0;
////}
//
//
//
////int main()
////{
////	int f1, f2, f3, i,n;
////	scanf("%d", &n);//指定输出第n个斐波那契数
////	if(n==1)
////	printf("1\n");
////	for (f1 = 0, f2 = 1, f3 = 0, i = 1;;)
////	{
////		f3 = f1 + f2;
////		//printf("%d\n", f3);
////		i++;
////		if (i == n)
////		{
////			printf("%d\n", f3);
////			break;
////		}
////		f1 = f3 + f2;
////		//printf("%d\n", f1);
////		i++;
////		if (i == n)
////		{
////			printf("%d\n", f1);
////			break;
////		}
////		f2 = f1 + f3;
////		//printf("%d\n", f2);
////		i++;
////		if (i == n)
////		{
////			printf("%d\n", f2);
////			break;
////		}
////		//printf("%d\n", f3);
////	}
////	return 0;
////}
//
//
////n的阶乘
////int main()
////{
////	long long int a, i, j = 1;
////	scanf("%lld", &a);
////	for (i = 1; i <= a; i++)
////	{
////		j = j * i;
////	}
////	printf("%lld", j);
////	return 0;
////}
//
//
//
////int main()
////{
////	char a[10];
////	for (int i = 1; i <= 3; i++)
////	{
////		scanf("%s", a);
////		if (strcmp(a, "319409") == 0)
////		{
////			printf("密码正确\n");
////			break;
////		}
////		else
////			printf("密码错误\n");
////	}
////	return 0;
////}
//
//
//
//
//
////int main()
////{
////	int j, k, n;
////	for (int i = 100; i < 1000; i++)
////	{
////		j = i / 100;//百位
////		k = i % 10;//个位
////		n = (i / 10) % 10;//十位
////		if (k * k * k + j * j * j + n * n * n == i)
////		{
////			printf("%d  水仙花数\n", i);
////		}
////	}
////	return 0;
////}
//
//
//
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i;
////	scanf("%d", &i);
////	int sz = sizeof(arr) / sizeof(arr[0]);//元素总数
////	int L = 0, R = sz - 1;//定义左右下标
////	while (L <= R)//可能出现找不到的情况 
////	{
////		int mid = (L + R) / 2;//折半
////		if (arr[mid] > i)
////		{
////			R = mid - 1;
////		}
////		else if (arr[mid] < i)
////		{
////			L = mid + 1;
////		}
////		else
////		{
////			printf("找到了,下标=%d的元素", mid);
////			break;
////		}
////	}
////	if (L > R)
////	{
////		printf("找不到");
////	}
////}
//
//
//
//
////int main()
////{
////	char arr1[] =  "hello,word" ;
////	char arr2[] =  "##########" ;
////	int i = strlen(arr1)-1;//元素个数减一得到下标数
////	int R, L;
////	for (R=0,L=i; 1/*n <= 9/2+9%2+1*/;R++,L--)
////	{
////		printf("%s\n", arr2);
////		arr2[R] = arr1[R];
////		arr2[L] = arr1[L];
////		if (R >= L)
////		{
////			break;
////		}
////	}
////	return 0;
////}




//#include<time.h>
//#include<stdlib.h>//正常使用rand和srand函数
//
//void game_menu();
//int Lucky_Number();
//
//int main()
//{
//	while (1)
//	{
//		while (1)
//		{
//			int i;
//			game_menu();
//			scanf("%d", &i);
//			switch (i)
//			{
//			case 0:
//				//退出游戏
//				printf("游戏结束\n");
//				return 0;
//			case 1:
//				//跳出switch执行if
//				printf("游戏开始\n");
//				break;
//			default:
//				continue;
//			}
//			if (i == 1)
//			{
//				//跳出循环
//				break;
//			}
//		}
//		int LN = Lucky_Number();//循环外部获取随机数
//		while (1)
//		{
//			int Number;
//			scanf("%d", &Number);
//			if (LN > Number)
//			{
//				printf("小了\n");
//			}
//			else if (LN < Number)
//			{
//				printf("大了\n");
//			}
//			else
//			{
//				printf("猜对了\n");
//				//猜对了从头开始循环选择1/0
//				break;
//			}
//		}
//	}
//}
//
//void game_menu()//游戏菜单
//{
//	printf("-----------猜数字----------\n");
//	printf("-----1=>开始/继续游戏------\n");
//	printf("-------0=>结束游戏---------\n");
//	printf("---------------------------\n");
//}
//
//int Lucky_Number()//获取1`100随机数函数
//{
//	srand((unsigned int)time(NULL));
//	return (rand() % 100 + 1);
//}



//int main()
//{
//	int arr[3] = { 0 };
//	int n;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	if (arr[0] < arr[1])
//	{
//		n = arr[0];
//		arr[0] = arr[1];
//		arr[1] = n;
//	}
//	if (arr[1] < arr[2])
//	{
//		n = arr[1];
//		arr[1] = arr[2];
//		arr[2] = n;
//	}
//	if (arr[0] < arr[1])
//	{
//		n = arr[0];
//		arr[0] = arr[1];
//		arr[1] = n;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//辗转相除法求最大公约数
//int main()
//{
//	int i, j, n;
//	scanf("%d%d", &i, &j);
//	while (1)
//	{
//		n = i % j;
//		if (n == 0)
//		{
//			printf("最大公约数 %d\n", j);
//			printf("最小公倍数 %d\n", i * j / j);
//			break;
//		}
//		i = j;
//		j = n;
//	}
//	return 0;
//}



//闰年
//int main()
//{
//	int i,n=0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			n++;
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d\n", i);
//			n++;
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}




//int main()
//{
//	int i,n=0;
//	int j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			n++;
//		}
//	}
//	int i;
//	static int i;
//	printf("\n%d", n);
//	return 0;
//}



//int yn(int Arr[], int k, int z);
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int key ;
//    scanf("%d", &key);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int n = yn(arr, key, sz);
//    if (n == -1)
//    {
//        printf("找不到");
//    }
//    else
//    {
//        printf("找到了，下标为:%d", n);
//    }
//    return 0;
//}
//int yn(int Arr[], int k, int s)
//{
//    int l = 0;
//    int r = s - 1;
//    while (l <= r)
//    {
//        int mid = (r + l) / 2;
//        if (k < Arr[mid])
//        {
//            r = mid - 1;
//        }
//        else if (Arr[mid] < k)
//        {
//            l = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}


//#include"Add.h"//从其他头文件调用函数——使用#include"头文件名"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", Add(a, b));
//	return 0;
//}



//void prinr(unsigned int);
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	prinr(num);
//	return 0;
//}
//void prinr(unsigned int x)
//{
//	if (x > 9)
//	{
//		prinr(x / 10);
//	}
//	printf("%d ", x % 10);
//}



//int Fib(int x);
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int red = Fib(i);
//	printf("%d", red);
//	return 0;
//}
//
//int Fib(int x)
//{
//	if (x<=2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[99],arr2[99] ;
//	scanf("%s", &arr1);
//	scanf("%s", &arr2);
//	printf("%s", strcat(arr1,arr2));
//	return 0;
//}



//int main()
//{
//    int i = 0, count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 10 == 9)
//        {
//            count++;
//            if (i / 10 == 9)
//            {
//                count++;
//            }
//        }
//        if (i / 10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}



//int main()
//{
//	for (int j = 1; j < 10; j++)
//	{
//		printf("\n");
//		for (int i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%-2d  ", i, j, j * i);
//		}
//	}
//	return 0;
//}


//void printf_digit(int x)//�ݹ�ʵ�ָ���λ��
//{
//	if (x / 10 > 0)
//	{
//		printf_digit(x / 10);
//	}
//		printf("%-2d\n", x%10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf_digit(n);
//	return 0;
//}


//int my_strlen(char Arr[])//�ݹ�ʵ��strlen����
//{
//	int i = 0;
//	if (Arr[i] != '\0')
//	{
//		return (1 + my_strlen(&Arr[i + 1]));
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "udafs.][[f][s;";
//	int n = my_strlen(&arr[0]);
//	printf("%d", n);
//	return 0;
//}




//int Factorial_recursion(int x)//�ݹ�׳�
//{
//	int i = 1;
//	if (x > 1)
//	{
//		return (x * Factorial_recursion(x - 1));
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fac_r = Factorial_recursion(n);
//	printf("%d", fac_r);
//	return 0;
//}



//void Reverse_Array(char *Arr, int x)
//{
//    //�������ַ�����
//    /*char* pt1 = Arr;
//    char* pt2 = Arr + x - 1;*/
//    int l = 0, r = x - 1;//�����±�
//    while (l < r)
//    {
//        char temp = *(Arr + l);
//        *(Arr + l) = *(Arr + r);
//        *(Arr + r) = temp;
//        l++; r--;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int n = sizeof(arr) / sizeof(arr[0]) - 1;//����arrԪ�ظ���
//    Reverse_Array(arr, n);
//    printf("%s", arr);
//    return 0;
//}





//����-�ַ�-�ݹ顪��char* pt1���ν�������Ԫ��-char* pt2���ν�����βԪ��
//#include<string.h>
//int my_strlen(char* Arr)
//{
//    int n = 0;
//    while (Arr[n] != '\0')//*(Arr+n)!='\n'ͬЧ
//    {
//        n++;
//    }
//    return n;
//}
//void Reverse_Array_Recursion(char* Arr)
//{
//    //�������ַ�����
//    int n = my_strlen(Arr)-1;
//    char temp = *Arr;
//    *Arr = *(Arr + n);
//    *(Arr + n ) = '\0';//�ַ�������Ч��������һ��
//    if (my_strlen(Arr) >= 2)//�ж��ַ�������Ч����
//    {
//        Reverse_Array_Recursion(Arr + 1);//�ַ�������Ч��������һ��
//    }
//    *(Arr + n) = temp;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    //printf("%d\n", my_strlen(arr));
//    Reverse_Array_Recursion(arr);
//    printf("%s", arr);
//    return 0;
//}


//����һ���Ǹ���������λ���ĺ�
//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return (x%10 + DigitSum(x / 10));
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//����Ǹ���
//	int i = DigitSum(n);
//	printf("%d", i);
//	return 0;
//}



////����ֵ����
//double my_fabs(double x)
//{
//	if (x < 0)
//	{
//		return (0 - x);
//	}
//	return x;
//}
////�ݺ��������x��y�η�
//double my_pow(double x,double y)
//{
//	if (y > 0)
//	{
//		return (x * my_pow(x, y - 1));
//	}
//	else if (y == 0)
//	{
//		return 1;
//	}
//	else//yΪ����
//	{
//		return (1.0 / x) * my_pow(x, y + 1);
//	}
//}
//int main()
//{
//	double n = 0, k = 0;
//	scanf("%lf %lf", &n, &k);
//	printf("%lf",my_pow(n,k));
//	return 0;
//}


int Fibonacci_math(int x)
{
	if (x > 2)
	{
		return (Fibonacci_math(x - 2) + Fibonacci_math(x - 1));
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fibonacci_math(n));
	return 0;
}
//ctrl+fn+f5运行
