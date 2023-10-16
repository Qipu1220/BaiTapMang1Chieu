#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	cout << "Mang ban dau la: ";
	Xuat(a, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}