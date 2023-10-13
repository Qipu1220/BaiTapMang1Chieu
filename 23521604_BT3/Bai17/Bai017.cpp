#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void LietKe(int a[], int n);

int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			cout << setw(5) << a[i];
	cout << endl;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			cout << setw(5) << a[i];
}