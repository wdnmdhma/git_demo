
#include<stdio.h>
//klopp1

void change_arr( const char* arr) //�����ڲ��ܸĻ��øĵı��������� const���� (ֱ���ñ��������﷨����)
{
	   // *arr = 0;//�����ҵ�
		char* arr1 =*arr;//���Բ���
}


int main()
{

	char *arr = "123456789";

	//����ȥ����һ���ַ���������*arr���ɸ��൱ �� const char* arr ="123456789";
	change_arr(arr);
	printf("result = %s\n", arr);
	printf("666");
	return 0;
}

