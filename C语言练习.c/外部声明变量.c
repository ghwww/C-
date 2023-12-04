//#define _CRT_SECURE_NO_WARNINGS 1
//
////全局变量,具有外部链接属性，
////但被static修饰后就无法被外部链接，其他源文件就无法链接到这个静态的全局变量
////145行
///*static */int g_val = 713;
//int a_val = 0713;//以零开头的整数（0~7）为八进制数
//int b_val = 0xf3;//以0x或0X开头的数为16进制数（0~9）+（a~f）共15个
////-------定义Add函数让外部引用并使用------148行//
////在被static修饰Add函数同样无法被外部链接声明//
///*static */
//int Add(int x, int y)
//{
//	/*int z;
//	z = x + y;*/
//	return (x+y);
//}
//int Max(int x, int y)
//{
//	int z;
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	/*z = x + y;
//	return z;*/
//}