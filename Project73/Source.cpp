#include<iostream>
#include<cmath>
using namespace std;
template<typename T1, typename T2>
void Funcline(T1&a, T2&b)
{
	float x;
	if (a != 0)
	{
		x = -b / a;
		cout << x << endl;
	}
	else if (a == 0 && b != 0)
	{
		cout << "M�������� ������� ���������" << endl;
	}
	else if (a == 0 && b == 0)
	{
		cout << "����� �������������� ����� �������� �������� ���������" << endl;
	}
}
template<typename T1, typename T2, typename T3>
void Funcsquare(T1&a, T2&b, T3&c)
{
	float D, x1, x2;
	D = pow(b, 2) - (4 * a * c);
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (D == 0)
	{
		x1 = -b / (2 * a);
		cout << "x1=" << x1 << endl;
	}
	else if (D < 0)
	{
		cout << "��������� �� ����� �������" << endl;
	}
	cout << a << endl;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	////�������� ���������
	//float x, a, b;
	//cout<<"a=";
	//cin >> a;
	//cout<<"b=";
	//cin >> b;
	//Funcline(a,b);

	//���������� ���������
			float a, b, c;
			   cout<<"a=";
			   cin >> a;
			   cout<<"b=";
			   cin >> b;
			   cout<<"c=";
			   cin >> c;
		   Funcsquare(a, b, c);




	////���������� ��������� � �������� ���������
	//float a, b, c;
	//int z;
	//   do
	//   {
	//   cout<<"a=";
	//   cin >> a;
	//   cout<<"b=";
	//   cin >> b;
	//   cout<<"c=";
	//   cin >> c;

	//		cout<<"���������� ��������� 0"<<endl;
	//		cout<<"�������� ���������   1"<<endl;
	//		cout <<"�����              2" << endl;
	//		cin >> z;
	//		if (z == 0)
	//		{
	//	   system("cls");
	//   Funcsquare(a, b, c);

	//		}
	//		if (z == 1)
	//		{
	//			system("cls");
	//			c == 0;
	//   Funcline(a, b);
	//		}
	//		
	//   } while (z != 2);


	system("pause");
}
