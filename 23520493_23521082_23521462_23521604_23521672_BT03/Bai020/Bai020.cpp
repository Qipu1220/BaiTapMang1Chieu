#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
void lietke(int a[], int n);

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nCac gia tri cuc tieu: \n";
	lietke(b, k);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void lietke(int a[], int n)
{
	if (n == 1)
		return;
	if (a[0] < a[1])
		cout <<setw(8)<< a[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout <<setw(8)<<a[i];
	}
	if (a[n - 1] < a[n - 2])
		cout <<setw(8)<<a[n - 1];
}
