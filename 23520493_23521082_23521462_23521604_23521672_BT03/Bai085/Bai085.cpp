#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
int ChanCuoi(int a[], int n);

int main()
{
	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);

	cout << "\nGia tri chan cuoi: \n" << ChanCuoi(b, k);
	return 0;

}
void nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int ChanCuoi(int a[], int n)
{
	for (int i = n-1; i >=0; i--)
	{
		if (a[i]%2==0)
			return a[i];
	}
	return -1;
}
