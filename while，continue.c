#include<stdio.h>

int main4()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)     /*��i=5����continueֱ����ת��while�е��ж���䲿��*/
			continue;  /*������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue����Ĵ��벻��ִ�У�
		                ����ֱ����ת��while�����жϲ��֡�������һ��ѭ������ж�*/
		printf("%d\n", i);
		i = i++;
	}

	return 0;
}