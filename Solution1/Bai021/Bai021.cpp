#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	LietKe(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void LietKe(float a[], int n)
{
	cout <<endl<< "Cac gia tri lon hon tri tuyet doi cua so lien sau no: ";
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
			cout << setw(8) << a[i];
	}
}