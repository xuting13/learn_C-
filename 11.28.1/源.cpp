//��д����Ҫ����������a��b����a^2 + b^2����100�������a^2 + b^2��λ���ϵ����֣������������֮�͡�
/*
#include<iostream>
using namespace std;
void main()
{
	int a, b, sum, n1, n2;
	cout << "������a��b��ֵ��";
	cin >> a >> b;
	sum = a * a + b * b;
	if(sum>100)
	{
		n1 = sum / 100;
		cout << "a^2+b^2= ��λ���ϵ�����Ϊ" << n1 << endl;
	}
	else
	{
		n2 = a + b;
		cout << "a��b�ĺ�Ϊ" << sum << endl;
	}
}
*/
//�ж�ѧ���ɼ��Ƿ�ϸ�(�������ڵ���60���������С��60�����������
/*
#include<iostream>
using namespace std;
void main()
{
	int i, sum;
	cout << "������ɼ�" << endl;
	cin >> i;
	sum = i / 10;
	if(sum>=6)
	{
		cout << "�ɼ�����" << endl;
	}
	else
	{
		cout << "�ɼ�������" << endl;
	}
}
*/
//�Ӽ�������һԪ���η���ax2 + bx + c = 0��3��ϵ��a��b��c��Ȼ����㲢���2��ʵ����

#include<iostream>
#include<cmath> //c++��ѧ�����׼��cmath
using namespace std;
void main()
{
	int a, b, c, derta, x1, x2;
	cout << "�밴˳������a b c��ֵ��a��0��b��0��";
	cin >> a >> b >> c;
	derta = b * b - 4 * a * c;
	if (derta > 0)
	{
		x1 = (-b + sqrt(derta)) / (2 * a);     //sqrt() ����x��ƽ����
		x2 = (-b - sqrt(derta)) / (2 * a);
		cout << a << "x^2+" << b << "x+" << c << "=0 ������ʵ����" << endl;
		cout << "x1 =" << x1 << endl;
		cout << "x2 =" << x2 << endl;
	}
	else if (derta == 0)
	{
		x1 = (-b + sqrt(derta)) / (2 * a);
		cout << a << "x^2+" << b << "x+" << c << "=0 ������ʵ������ͬ" << endl;
		cout << "x1 = x2 =" << x1 << endl;
	}
	else
	{
		cout << a << "x^2+" << b << "x+" << c << "=0 ��ʵ����" << endl;
	}
	
}

//�ж�ĳ���Ƿ�Ϊ����
/*
#include<iostream>
using namespace std;
void main()
{
	int y;
	cout << "������ ��" << endl;
	cin >> y;
	if(y%4==0&&y%100!=0|y%400==0)
	{
		cout << y << "��������";
	}
	else
	{
		cout << y << "�겻������";
	}
}
*/

//��дһ���򣬶��ڸ�����һ���ٷ��Ƴɼ��������Ӧ������Ƴɼ���90������ΪA��80-89��ΪB��70-79��ΪC��60-69ΪD��60������ΪE������if���ʵ�֣�
/*
#include<iostream>
using namespace std;
void main()
{
	float x;
	cout << "������ɼ�(0-100.0)  ";
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
//��дʵ�������ļӡ������ˡ������㡣����if���ʵ�֣�
/*
#include<iostream>
using namespace std;
void main()
{
	int x;
	float x1, x2, sum;
	cout << "��ѡ�����㷽ʽ ��(1) ��(2) ��(3) ��(4)  : ";
	cin >> x;
	if(x == 1)
	{
		cout << "�㵱ǰѡ������㷽ʽΪ�ӷ�����������������x1,x2  ";
		cin >> x1 >> x2;
		sum = x1 + x2;
		cout << "x1 + x2 = " << sum << endl;
	}
	else if (x == 2)
	{
		cout << "�㵱ǰѡ������㷽ʽΪ��������������������x1,x2  ";
		cin >> x1 >> x2;
		sum = x1 - x2;
		cout << "x1 - x2 = " << sum << endl;
	}
	else if (x == 3)
	{
		cout << "�㵱ǰѡ������㷽ʽΪ�˷�����������������x1��x2 ";
		cin >> x1 >> x2;
		sum = x1 * x2;
		cout << "x1 * x2 = " << sum << endl;
	}
	else if (x == 4)
	{
		cout << "�㵱ǰѡ������㷽ʽΪ��������������������x1��x2 ";
		cin >> x1 >> x2;
		sum = x1 / x2;
		cout << "x1 / x2 = " << sum << endl;
	}
	else
	{
		cout << "�����������!";
	}
}
*/
// x-1(x<0)         y=           0(x=0)                       x+1(x>0)��д�������y��ֵ�������
/*
#include<iostream>
using namespace std;
void main()
{
	int x, y;
	cout << "������x��ֵ ";
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
		cout << "����!";
	}
}
*/