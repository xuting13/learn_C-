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

//100�ڱ�8����������֮��
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

//��ӡ����ˮ�ɻ���
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

//������10ѧ���ɼ�ƽ����
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

//�Ӽ�������3��������Ȼ�����������С��һ����Ҫ���岢ʹ���������н�С�ߵĺ���int min(int x, int y)���������������������ɡ�
