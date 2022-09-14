#include<stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n) //表示从n为入口,如果没有break，case会一直执行
	{
	case 1:m++; //m=3    n=1,case 1符合，开始执行
	case 2:n++;//由于case 1 后没有break，所以接着往下执行语句  m=3,n=2
	case 3:
		switch (n)
		{ //switch允许嵌套使用
		case 1:m++; // 由于此时n=2所以这里的case不执行
		case 2:m++; n++; break; // n=2,符合case 2，case开始执行 m=4,n=3
		}
	//break; case 3 后面无break，故case 4继续执行
	case 4:m++;    //m=5,n=3
		break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);
	return 0;

}