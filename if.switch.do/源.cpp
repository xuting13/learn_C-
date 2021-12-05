//if练习
/*
#include<iostream>
using namespace std;
void main()
{
	int x;
	cout << "请输入x的值";
	cin >> x;
	if (x >= 0)
	{
		cout << "x=" << x << endl;
	}
	else if (x < 0)
	{
		cout << "x=" << -x << endl;
	}
}
*/

//计算5的阶乘
/*
#include<iostream>
using namespace std;
void main()
{
	int p, i;
	p = 1;
	i = 2;
	do
	{
		p = p * i;
		i = i + 1;
	} while (i <= 5);
	cout << "p=" << p << endl;
}
*/
//if多结果 基础练习
/*
#include<iostream>
using namespace std;
void main()
{
	float x;
	cout << "请输入成绩(0-100)";
	cin >> x;
	if(x>=90)
	{
		cout << "A" << endl;
	}
	else if(x>=80)
	{
		cout << "B" << endl;
	}
	else if(x >= 70)
	{
		cout << "C" << endl;
	}
	else if (x >= 60)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "E" << endl;
	}
}
*/

//某年某 月 有多少天
/*
#include<iostream>
using namespace std;
void main()
{
	int y, m;
	cout << "请输入年,月" << endl;
	cin >> y >> m;
	if(m==1|m==3|m==5|m==7|m==8|m==10|m==12)
	{
		cout << y << "年" << m << "月有31天" << endl;
	}
	else if(m==4|m==6|m==9|m==11)
	{
		cout << y << "年" << m << "月有30天" << endl;
	}
	else
	{
		if(y%4==0&&y%100!=0|y%400==0)
		{
			cout << y << "年" << m << "月有29天" << endl;
		}
		else
		{
			cout << y << "年" << m << "月有28天" << endl;
		}
	}
}
*/

//switch.case.default
/*
#include<iostream>
using namespace std;
void main()
{
	int m;
	cout << "请输入月份";
	cin >> m;
	switch (m)
	{
	case 3:case 4:case 5: cout << "春" << endl; break;
	case 6:case 7:case 8: cout << "夏" << endl; break;
	case 9:case 10:case 11:cout << "秋" << endl; break;
	case 12:case 1:case 2:cout << "冬" << endl; break;
	default:cout << "你输入的月份有误!(1-12)" << endl;
	}
}
*/
//更好的方法
/*
#include<iostream>
using namespace std;
void main()
{
	int s;
	cout << "请输入成绩";
	cin >> s;
	switch (s / 10)
	{
	case 6:cout << "D" << endl; break;
	case 7:cout << "C" << endl; break;
	case 8:cout << "B" << endl; break;
	case 9:cout << "A" << endl; break;
	case 10:cout << "A+" << endl; break;
	default:cout << "E" << endl;
	}
}
*/
