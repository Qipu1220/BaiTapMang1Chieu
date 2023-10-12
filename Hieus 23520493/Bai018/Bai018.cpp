#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[10];
	int n;
	Nhap(b, n);
	cout << "Mang ban dau:" << endl;
	Xuat(b, n);
	cout << "Cac vi tri ma gia tri tai do lon nhat la: " << endl;
	LietKe(b, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n=";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout <<  "a[" << i << "]="<<a[i] << endl;
}
float LonNhat(float a[], int n)
{
	float lc = a[0]; 
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc) 
			lc = a[i]; 
	return lc; 
}
void LietKe(float a[], int n)
{
	float lc = LonNhat(a, n);   
	for(int i = 0; i <= n - 1; i++)
		if (a[i] == lc) 
			cout << i<<endl;
}