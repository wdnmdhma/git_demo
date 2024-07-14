
#include<stdio.h>
//klopp1

void change_arr( const char* arr) //结论在不能改或不用改的变量尽量用 const修饰 (直接让编译器报语法错误)
{
	   // *arr = 0;//程序会挂掉
		char* arr1 =*arr;//可以操作
}


int main()
{

	char *arr = "123456789";

	//传进去的是一个字符串常量，*arr不可改相当 与 const char* arr ="123456789";
	change_arr(arr);
	printf("result = %s\n", arr);
	printf("666");
	return 0;
}

