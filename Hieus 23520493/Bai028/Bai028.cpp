#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Cac vi tri ma gia tri tai cac vi tri do bang gia tri duong nho nhat : " << endl;
	LietKe(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "]=" << a[i] << endl;
}
float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++) 
		if (a[i] > 0) 
			return a[i]; 
		return -1;
}
float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n); 
	if (lc == -1) 
		return -1;	
	for (int i = 0; i <= n - 1; i++) 
			if (a[i] > 0 && a[i] < lc) 
				lc = a[i]; 
	return lc;
}
void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n); 
	if (dd == -1) 
	{ 
		cout << "\nKhong co gia tri duong"; 
		return; 
	} 
	for (int i = 0; i <= n - 1; i++) 
		if (a[i] == dd) 
			cout << "i="<<i << endl;
}