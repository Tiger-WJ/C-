#include<stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n) //��ʾ��nΪ���,���û��break��case��һֱִ��
	{
	case 1:m++; //m=3    n=1,case 1���ϣ���ʼִ��
	case 2:n++;//����case 1 ��û��break�����Խ�������ִ�����  m=3,n=2
	case 3:
		switch (n)
		{ //switch����Ƕ��ʹ��
		case 1:m++; // ���ڴ�ʱn=2���������case��ִ��
		case 2:m++; n++; break; // n=2,����case 2��case��ʼִ�� m=4,n=3
		}
	//break; case 3 ������break����case 4����ִ��
	case 4:m++;    //m=5,n=3
		break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);
	return 0;

}