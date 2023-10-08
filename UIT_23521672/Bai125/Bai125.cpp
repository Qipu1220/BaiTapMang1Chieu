#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nhap(float a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 + 1) - (50.1);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int ktTang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
			flag = 0;
	}
	return flag;
}

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	cout << "\nMang co tang dan khong: \n" << ktTang(b, k);
	return 0;
}