#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongSoLT(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k); 
	cout <<endl<< "Tong cac so lon hon so lien truoc cua no trong mang la: " << TongSoLT(b, k);
	return 0;
}


void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

float TongSoLT(float a[], int n)
{
	float s = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
			s += a[i];
	}
	return s;
}
