//if��ϰ
/*
#include<iostream>
using namespace std;
void main()
{
	int x;
	cout << "������x��ֵ";
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

//����5�Ľ׳�
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
//if���� ������ϰ
/*
#include<iostream>
using namespace std;
void main()
{
	float x;
	cout << "������ɼ�(0-100)";
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

//ĳ��ĳ �� �ж�����
/*
#include<iostream>
using namespace std;
void main()
{
	int y, m;
	cout << "��������,��" << endl;
	cin >> y >> m;
	if(m==1|m==3|m==5|m==7|m==8|m==10|m==12)
	{
		cout << y << "��" << m << "����31��" << endl;
	}
	else if(m==4|m==6|m==9|m==11)
	{
		cout << y << "��" << m << "����30��" << endl;
	}
	else
	{
		if(y%4==0&&y%100!=0|y%400==0)
		{
			cout << y << "��" << m << "����29��" << endl;
		}
		else
		{
			cout << y << "��" << m << "����28��" << endl;
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
	cout << "�������·�";
	cin >> m;
	switch (m)
	{
	case 3:case 4:case 5: cout << "��" << endl; break;
	case 6:case 7:case 8: cout << "��" << endl; break;
	case 9:case 10:case 11:cout << "��" << endl; break;
	case 12:case 1:case 2:cout << "��" << endl; break;
	default:cout << "��������·�����!(1-12)" << endl;
	}
}
*/
//���õķ���
/*
#include<iostream>
using namespace std;
void main()
{
	int s;
	cout << "������ɼ�";
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
