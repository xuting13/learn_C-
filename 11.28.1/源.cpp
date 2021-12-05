//编写程序，要求输入整数a和b，若a^2 + b^2大于100，则输出a^2 + b^2百位以上的数字，否则输出两数之和。
/*
#include<iostream>
using namespace std;
void main()
{
	int a, b, sum, n1, n2;
	cout << "请输入a，b的值：";
	cin >> a >> b;
	sum = a * a + b * b;
	if(sum>100)
	{
		n1 = sum / 100;
		cout << "a^2+b^2= 百位以上的数字为" << n1 << endl;
	}
	else
	{
		n2 = a + b;
		cout << "a与b的和为" << sum << endl;
	}
}
*/
//判断学生成绩是否合格(分数大于等于60分输出及格，小于60分输出不及格）
/*
#include<iostream>
using namespace std;
void main()
{
	int i, sum;
	cout << "请输入成绩" << endl;
	cin >> i;
	sum = i / 10;
	if(sum>=6)
	{
		cout << "成绩及格" << endl;
	}
	else
	{
		cout << "成绩不及格" << endl;
	}
}
*/
//从键盘输入一元二次方程ax2 + bx + c = 0的3个系数a、b、c，然后计算并输出2个实数根

#include<iostream>
#include<cmath> //c++数学运算标准库cmath
using namespace std;
void main()
{
	int a, b, c, derta, x1, x2;
	cout << "请按顺序输入a b c的值（a≠0，b≠0）";
	cin >> a >> b >> c;
	derta = b * b - 4 * a * c;
	if (derta > 0)
	{
		x1 = (-b + sqrt(derta)) / (2 * a);     //sqrt() 运算x的平方根
		x2 = (-b - sqrt(derta)) / (2 * a);
		cout << a << "x^2+" << b << "x+" << c << "=0 有两个实数根" << endl;
		cout << "x1 =" << x1 << endl;
		cout << "x2 =" << x2 << endl;
	}
	else if (derta == 0)
	{
		x1 = (-b + sqrt(derta)) / (2 * a);
		cout << a << "x^2+" << b << "x+" << c << "=0 的两个实数根相同" << endl;
		cout << "x1 = x2 =" << x1 << endl;
	}
	else
	{
		cout << a << "x^2+" << b << "x+" << c << "=0 无实数根" << endl;
	}
	
}

//判断某年是否为闰年
/*
#include<iostream>
using namespace std;
void main()
{
	int y;
	cout << "请输入 年" << endl;
	cin >> y;
	if(y%4==0&&y%100!=0|y%400==0)
	{
		cout << y << "年是闰年";
	}
	else
	{
		cout << y << "年不是闰年";
	}
}
*/

//编写一程序，对于给定的一个百分制成绩，输出相应的五分制成绩。90分以上为A，80-89分为B，70-79分为C，60-69为D，60分以下为E。（用if语句实现）
/*
#include<iostream>
using namespace std;
void main()
{
	float x;
	cout << "请输入成绩(0-100.0)  ";
	cin >> x;
	if(x>=90.0)
	{
		cout << "A";
	}
	else if(x>=80.0)
	{
		cout << "B";
	}
	else if(x>=70.0)
	{
		cout << "C";
	}
	else if(x>=60.0)
	{
		cout << "D";
	}
	else
	{
		cout << "E";
	}
}
*/
//编写实现两数的加、减、乘、除运算。（用if语句实现）
/*
#include<iostream>
using namespace std;
void main()
{
	int x;
	float x1, x2, sum;
	cout << "请选择运算方式 加(1) 减(2) 乘(3) 除(4)  : ";
	cin >> x;
	if(x == 1)
	{
		cout << "你当前选择的运算方式为加法，请输入两个数字x1,x2  ";
		cin >> x1 >> x2;
		sum = x1 + x2;
		cout << "x1 + x2 = " << sum << endl;
	}
	else if (x == 2)
	{
		cout << "你当前选择的运算方式为减法，请输入两个数字x1,x2  ";
		cin >> x1 >> x2;
		sum = x1 - x2;
		cout << "x1 - x2 = " << sum << endl;
	}
	else if (x == 3)
	{
		cout << "你当前选择的运算方式为乘法，请输入两个数字x1，x2 ";
		cin >> x1 >> x2;
		sum = x1 * x2;
		cout << "x1 * x2 = " << sum << endl;
	}
	else if (x == 4)
	{
		cout << "你当前选择的运算方式为除法，请输入两个数字x1，x2 ";
		cin >> x1 >> x2;
		sum = x1 / x2;
		cout << "x1 / x2 = " << sum << endl;
	}
	else
	{
		cout << "你输入的有误!";
	}
}
*/
// x-1(x<0)         y=           0(x=0)                       x+1(x>0)编写程序求出y的值并输出。
/*
#include<iostream>
using namespace std;
void main()
{
	int x, y;
	cout << "请输入x的值 ";
	cin >> x;
	if (x < 0)
	{
		y = x - 1;
		cout << "y = x - 1 = " << y;
	}
	else if (x == 0)
	{
		y = x;
		cout << "y = " << y;
	}
	else if (x > 0)
	{
		y = x + 1;
		cout << "y = x + 1 = " << y;
	}
	else
	{
		cout << "错误!";
	}
}
*/