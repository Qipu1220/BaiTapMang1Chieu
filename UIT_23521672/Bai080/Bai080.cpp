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

float AmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			return a[i];
		return 0;
	}
}

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	cout << "Mang ban dau: \n";
	xuat(b, k);
	
	cout << "\nGia tri am dau: \n" << AmDau(b, k);
	return 0;
}