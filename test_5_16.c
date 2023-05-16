#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>


//描述一个学生  -  名字 年龄 电话 性别
//struct stu//定义了一个结构体类型 类似于 int 、 double
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//三个全局的结构体变量
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//重命名结构体类型的名字  struct stu - stu
//int main()
//{
//	struct stu s1 ={"张三",20,"13511223344","男"}；
//	stu s2= { "李四",58,"13511993344","保密" };//局部的结构体变量
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n",t.ch);//hehe
//	printf("%s\n",t.s.arr);//hello world
//	printf("%lf\n",t.s.d);//3.14
//	printf("%s\n",t.pc);//hello bit
//	return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n",tmp.sex);
//}
//void print2(Stu* ps)//使用结构体指针
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"12311223344","男" };
//	print1(s);
//	print2(&s);
//	//print1 和 print2 哪个函数更加好一些 传地址更好节约空间
//	return 0;
//}


#include <stdio.h>
#include <string.h>

int main() 
{
	printf("张欣竹是帅哥\n");
	return 0;
}
