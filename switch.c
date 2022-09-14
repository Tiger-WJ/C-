//switch语句是一种分支语句，常用于多分支的情况
#include<stdio.h>

int main2()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)        //switch(整型表达式)
	{
	case 1://case必须使用整型
		printf("星期一\n");
		break;          //break 用于跳出switch语句，case决定入口，break决定出口
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;

	case 7:
		printf("星期7\n");
		break;
	case 8:
		printf("星期8\n");
		break;
	default:  //处理switch处理不了的选项，例如case只到1-8，若输入9或以上的数，只能通过default来处理，提示输入错误
		printf("输入错误\n"); 

	}
	return 0;
}