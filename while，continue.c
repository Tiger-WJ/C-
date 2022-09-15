#include<stdio.h>

int main4()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)     /*若i=5，则continue直接跳转到while中的判断语句部分*/
			continue;  /*用于终止本次循环，也就是本次循环中continue后面的代码不再执行，
		                而是直接跳转到while语句的判断部分。进行下一次循环入口判断*/
		printf("%d\n", i);
		i = i++;
	}

	return 0;
}