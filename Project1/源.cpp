//s=1+2+4+8+....+64
//#include<iostream>
//using namespace std;
//void main()
//{
//	int sum, i;
//	sum = 0;
//	for (i = 1; i <= 64; i = i * 2)
//	{
//		sum = sum + i;
//	}
//	cout << sum << endl;
//}

//s=1+1/2+1/3+....+1/100
//#include<iostream>
//using namespace std;
//void main()
//{
//	float sum, i;
//	sum = 0;
//	for (i = 1; i <= 100.0; i++)
//	{
//		sum = sum + 1.0 / i;
//	}
//	cout << sum << endl;
//}

//T=1!+2!+3!+...+10!
//#include<iostream>
//using namespace std;
//void main()
//{
//	int sum, i, n;
//	n = 1;
//	sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n *= i;  //n=n*i     1,2,6,24,
//		sum += n;   //sum=sum+n  1,3,9,,35
//	}
//	cout << sum << endl;
//}

//100内被8整除的数字之和
//#include<iostream>
//using namespace std;
//void main()
//{
//	int sum, i;
//	sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 8 == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	cout << sum << endl;
//}

//打印所有水仙花数
//#include<iostream>
//using namespace std;
//void main()
//{
//	int n1, n2, n3, sum, i;
//	for (i = 100; i <= 999; i++)
//	{
//		n1 = i / 100;
//		n2 = (i - n1 * 100) / 10;
//		n3 = i % 10;
//		if (n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3 == i)
//		{
//			cout << i << endl;
//		}
//	}
//}

//数组求10学生成绩平均数
//#include<iostream>
//using namespace std;
//void main()
//{
//	int i, x[10], sum = 0;
//	float ave;
//	for (i = 0; i < 10; i++)
//	{
//		cout << "x[" << i << "]=";
//		cin >> x[i];
//		sum = sum + x[i];
//	}
//	ave = sum / 10;
//	cout << ave << endl;
//}

//从键盘输入3个整数，然后输出其中最小的一个。要求定义并使用求两数中较小者的函数int min(int x, int y)，输入与输出由主函数完成。
