#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap( int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int b[10];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau:"<<endl;
	Xuat(b, k);
	LietKe(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i]<<endl;
}
int ChuSoDau(int n) 
{
	int dt = abs(n); 
	while (dt >= 10) 
		dt /= 10; 
	return dt;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	if (ChuSoDau(a[i]) % 2 != 0)
	cout << a[i]<<endl;
}