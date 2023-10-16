#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void SoAm(int[], int);

int main()
{
	int b[300];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	cout << endl;
	SoAm(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang nhap vao: ";
	for (int i = 0; i < n; i++)
		cout <<setw(8)<< a[i];
}

void SoAm(int a[], int n)
{
	cout << "Cac gia tri am cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			cout << setw(8) << a[i];
	}
}