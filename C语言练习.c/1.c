#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int main()
//	/*int a = 10;
//	#define a 1
//	int wtw[a] = { 0 };
//	printf("ΰ\n");
//	printf("a=%d\n",a);
//	return 0;*/
//
//
//
//	//enum ְҵ
//	//{
//	//	��·,�е�,��Ұ=100,����,����
//	//};
//	//int main()
//	//{
//	//	printf("%d\n", �е�);
//	//	/*��· = 1;enum�����ö�ٳ������ɱ�*/
//	//	enum ְҵ s = ��Ұ;
//	//	printf("%d\n", ��·);
//	//	printf("%d\n", ��Ұ);
//	//	printf("%d\n", ����);
//	//	printf("%d\n", ����);
//	//		return 0;
//    //};
//
////int main()
////{
////	//%c �Ǹ�ʽ˵���������ڴ�ӡ�ַ���%s �Ǹ�ʽ˵���������ڴ�ӡ�ַ���
////	printf("%c\n", '\\');// \Ϊת���ַ���ת�����з��������޷��������
////	printf("%c\n", '\100');// \100��ʾ�˽��Ƶ�100��Ϊʮ���Ƶ�64����������ASCII����@��ʾ����
////	printf("%s\n", "\x45");// \x--x����Ϊ��λ16�������֣�������תΪʮ���ƺ���ASCII���E
////	printf("%s\n", "\x21");// \x--x����Ϊ��λ16�������֣�������תΪʮ���ƺ���ASCII��ģ�
////	return 0;
////}
//
//
////int main()
////{
////	int a = 0;
////	printf("����ѧ�ñ����>��(ѡ��1 ro !0��\n");
////	scanf("%d", &a);
////	if(a == 1)
////	{
////		printf("�Ǿͺúü���\n");
////	}
////	else
////	{
////	printf("���ˣ�ȫ�����ˣ�\n");
////}
////	return 0;
////}
//
//
////int main()
////{
////	//���ͳ�������Ϊ���Σ����Ϊ1
////	int a = 9 / 5;
////	//�����͵����γ������Σ�Ϊ1.000000��6����
////	//float��ֻ���ý����ȷ��С�������λ
////	float a1 = 9 / 5;
////	float a2 = 9.0 / 5;
////	int a3 = 9 % 5;//ȡģ��ȡ�ࣩ
////
////	//�ƶ�������  <<   >>
////	int b = 3;//b�Ķ�����Ϊ00....0011
////	b = b << 1;//  <<��b�Ķ����ƵĿ�ͷȥ�㣬��β��һ�����Ϊ00...0110,��ʮ��������3��Ϊ6
////
////	int c = 5;
////	c += 6;//c=c+6,-=,*=,/=ͬ��
////	printf("%d\n", a);
////	printf("%f\n", a1);
////	printf("%f\n", a2);
////	printf("%d\n", a3);
////	printf("%d\n", b);
////	printf("%d\n",c);
////	return 0;
////}
//
////Add(int x, int y)//����һ����ͺ���
////{
////	int z;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int num1, num2;
////	printf("�������������ÿո����\n");
////	scanf("%d%d",&num1,&num2);
////	//������ʽ�������������
////	//int num12 = num1 + num2;
////	// --------------------------------------//
////	//ʹ��Add����һ����ͺ����������
////	int num12 = Add(num1, num2);
////	printf("%d+%d=%d\n", num1, num2, num12);
////	return 0;
////}
//
//
//
////int main()
////{
////	//����
////	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
////	//[10]ָʮ��Ԫ�أ���arr[9]ָ�±�9��Ԫ�أ���һ��Ԫ��Ϊ�±�0��
////	printf("%d\n",sizeof (arr));//����sizeof����������Ĳ����ɼӿɲ��ӣ���
////	printf("%d\n",sizeof (arr[0]));
////	printf("%d\n",sizeof (arr)/sizeof (arr[0]));//�ɼ����arr������Ԫ�ظ��������ֽ���/�����ֽ�����
////	int i=0;
////	while (i<10)//whileѭ��
////	{
////		printf("%d ",arr[i]);//arr[i]���±�Ϊi��Ԫ��
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
////	//����static�ı�ֲ�����a����������ʹa���ᱻ���٣���ջ���ﱻ�ŵ���̬��
////	//�����ϸı��˱����Ĵ洢����
////	a++;
////	printf("%d ",a);
////}
////int main()
////{
////	int a = 0;
////	while (a < 10)
////	{
////		test();
////		//test�е�a��û�б�static����ǰΪ�ֲ������������ۼ�++
////		a++;
////	}
////	return 0;
////}
// 
//
//////exretn�����ⲿ��������
////extern int g_val;
////extern int a_val;
////extern int b_val;
/////*extern */int Add(int, int);//�����ⲿ��������Add
////int main()
////{
////	printf("%d\n", g_val);
////	printf("%d\n", a_val);
////	printf("%d\n", b_val);
////	int c_val = Add(g_val, a_val);//����Add������ʹ��
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
////	//��a�ĵ�ַ��ӡ����
////	printf("%p\n", &a);
////	int* pa = &a;
////	//��a�ĵ�ַȡ������pa
////	printf("%d\n",a);
////	*pa = 6;
////	//*  �����ò�������ͨ��pa�ҵ�a������a��ֵ�����޸�
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
////	//�ַ�����[]�в���ʹ�ñ�����const���εı���Ҳ����
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
////	//������һ��1��100������
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
//////�ҳ�ָ����Χ�ڵ������ͷ�����
////int main()
////{
////	int a, i, n;
////	n = 1;
////	for (i = 3; i <= 200; i++)
////	{
////		for (a = 2; a <= i; a++)
////		{
////			if ( i % a == 0)//�ж�i�Ƿ�Ϊ����
////			{
////				n=a;//ÿ�ζ��ܽ�n��ʼ��������ѭ����a������ѭ����n
////				if (i == a)
////				{
////					break;//ִ�и�break������ѭ����������ѭ�����if��i%n��=0��
////				}
////				printf("%d ��������\n", i);
////				break;//ִ�и�break������ѭ��������if��i%n��=0�����������������
////			}
////		}
////		if(i==n)//��ֹ�����������Ϊ����
////		printf("%d ������\n", i);
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int a = 0;
////	while ((a = getchar()) != EOF)//����ctlr+z���ļ���������֮ǰ��һֱ��ȡ���ÿһ���ַ�
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
////getchar��putchar������
////int main()
////{
////	char password[20] = { 0 };
////	printf("����������:>");
////	printf("%s ", password);
////	scanf("%s", password);//��β��Ҫ�س���ȡ����
////	printf("��ȷ�����루Y/N��\n");
////	//getchar();//����һ��scanf�ڻ�����ʣ�µĻس���ȡ������֤������������ִ��
////	int type;
////	while(type=getchar()!='\n')
////	{
////		;
////	}
////	int ch = getchar();
////	if (ch == 'Y')
////	{
////		printf("ȷ�ϳɹ�\n");
////	}
////	else
////	{
////		printf("ȷ��ʧ��\n");
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
////	scanf("%d", &n);//��n��ֵָ�����쳲��������и���
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
////	scanf("%d", &n);//ָ�������n��쳲�������
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
////n�Ľ׳�
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
////			printf("������ȷ\n");
////			break;
////		}
////		else
////			printf("�������\n");
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
////		j = i / 100;//��λ
////		k = i % 10;//��λ
////		n = (i / 10) % 10;//ʮλ
////		if (k * k * k + j * j * j + n * n * n == i)
////		{
////			printf("%d  ˮ�ɻ���\n", i);
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
////	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ������
////	int L = 0, R = sz - 1;//���������±�
////	while (L <= R)//���ܳ����Ҳ�������� 
////	{
////		int mid = (L + R) / 2;//�۰�
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
////			printf("�ҵ���,�±�=%d��Ԫ��", mid);
////			break;
////		}
////	}
////	if (L > R)
////	{
////		printf("�Ҳ���");
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
////	int i = strlen(arr1)-1;//Ԫ�ظ�����һ�õ��±���
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
//#include<stdlib.h>//����ʹ��rand��srand����
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
//				//�˳���Ϸ
//				printf("��Ϸ����\n");
//				return 0;
//			case 1:
//				//����switchִ��if
//				printf("��Ϸ��ʼ\n");
//				break;
//			default:
//				continue;
//			}
//			if (i == 1)
//			{
//				//����ѭ��
//				break;
//			}
//		}
//		int LN = Lucky_Number();//ѭ���ⲿ��ȡ�����
//		while (1)
//		{
//			int Number;
//			scanf("%d", &Number);
//			if (LN > Number)
//			{
//				printf("С��\n");
//			}
//			else if (LN < Number)
//			{
//				printf("����\n");
//			}
//			else
//			{
//				printf("�¶���\n");
//				//�¶��˴�ͷ��ʼѭ��ѡ��1/0
//				break;
//			}
//		}
//	}
//}
//
//void game_menu()//��Ϸ�˵�
//{
//	printf("-----------������----------\n");
//	printf("-----1=>��ʼ/������Ϸ------\n");
//	printf("-------0=>������Ϸ---------\n");
//	printf("---------------------------\n");
//}
//
//int Lucky_Number()//��ȡ1`100���������
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




//շת����������Լ��
//int main()
//{
//	int i, j, n;
//	scanf("%d%d", &i, &j);
//	while (1)
//	{
//		n = i % j;
//		if (n == 0)
//		{
//			printf("���Լ�� %d\n", j);
//			printf("��С������ %d\n", i * j / j);
//			break;
//		}
//		i = j;
//		j = n;
//	}
//	return 0;
//}



//����
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
//        printf("�Ҳ���");
//    }
//    else
//    {
//        printf("�ҵ��ˣ��±�Ϊ:%d", n);
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


//#include"Add.h"//������ͷ�ļ����ú�������ʹ��#include"ͷ�ļ���"
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



int main()
{
	for (int j = 1; j < 10; j++)
	{
		printf("\n");
		for (int i = 1; i <= j; i++)
		{
			printf("%d*%d=%-2d  ", i, j, j * i);
		}
	}
	return 0;
}
//ctrl+fn+f5����