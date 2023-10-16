#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Cac gia tri chan co it nhat mot vi tri lan can cung la gia tri chan: " << endl;
	LietKe(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n=";
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
		cout <<  "a[" << i << "]="<<a[i] << endl;
}
void LietKe(int a[], int n)
{
	if (n <= 1)
		return; 
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0]<<endl; 
	for (int i = 1; i <= n - 2; i++) 
		if (a[i] % 2 == 0) 
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0) 
				cout <<  "a[" << i << "]="<<a[i]<<endl; 
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0) 
		cout << a[n - 1]<<endl;
}