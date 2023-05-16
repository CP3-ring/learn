#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <string.h>

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()//打印一个数组，并且逆置这个数组。
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);//把数组初始化为0
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()//交换数组内容
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 0.2,4,6,8 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
// 	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制转换为短整型
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//一次只能访问两个字节
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//四个字节 在内存中存放方式为 44 33 22 11
//	char* pc = (char*)&a;
//	*pc = 0;//只能改变一个字节 也就是44 变 00
//	printf("%x\n", a);
//	return 0;
//}

//int i;//全局变量不初始化默认是0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小 这个大小>=0 返回的类型无符号数 这里也就是4
//		              //所以这里要比较i要变成无符号数，i的负数第一位是1，变成无符号数就会特别大
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//=优先级高于，  也就是（b= ++c）, c++, ++a, a++；
//	b += a++ + c;
//	printf("a = %d b = %d c = %d", a, b, c);
//	return 0;
//}

//解法1
//int Count(unsigned int n)//unsigned 这样就当做无符号数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1 )
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//写一个函数求a的二进制表示（补码）中有几个1
//	int b = Count(a);
//	printf("conut = %d\n", b);
//	return 0; 
//}


//解法2
//int Count(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)//利用按位与计算
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//写一个函数求a的二进制表示（补码）中有几个1
//	int b = Count(a);
//	printf("conut = %d\n", b);
//	return 0;
//}


//解法3 最高效 最经典
//int Count(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////n = n & (n-1)每次最右边的1都会消失
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//写一个函数求a的二进制表示（补码）中有几个1
//	int b = Count(a);
//	printf("conut = %d\n", b);
//	return 0;
//}



//int differ(int m, int n)
//{
//	int tmp = m ^ n;//相异为1
//	int count = 0;
//	while(tmp)//数1的个数
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//		return count;
//}
//int main()//求两个数二进制位的不同位的个数
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = differ(m, n);
//	printf("count = %d\n", count); 
//	return 0;
//}


//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()//打印一个数字的奇数位和偶数位
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//}
//int main()//用指针打印一个数组
//{  
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * Fun(n + 1);
//	}
//}
//int main()
//{
//	int a = Fun(2);
//	printf("%d\n", a);
//	return 0;
//}


//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()//打印乘法表
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);//打印乘法口诀表的函数
//	return 0;
//}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;//可以直接用库函数  strlen(arr)-1
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()//数组对换
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int sum(unsigned int num)
//{
//    if (num > 9)
//    {
//        return sum(num / 10) + num % 10;
//    }
//    else
//    {
//        return num;
//    }
//}
//int main()//计算一个数字的每位之和
//{
//    unsigned int num = 0;
//    scanf("%d", &num);
//    int ret = sum(num);
//    printf("ret = %d\n", ret);
//    return 0;
//}


//double pow(int n, int k)
//{
//    //n^k=n*n^k-1
//    if (k < 0)
//    {
//        return (1.0 / (pow(n, -k)));
//    }
//    else if (k == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * pow(n, k - 1);
//    }
//}
//int main()//计算n的k次方
//{
//    int n = 7;
//    int k = -3;
//    double ret = pow(n,k);
//    printf("ret=%lf\n", ret);
//    return 0;
//}

















