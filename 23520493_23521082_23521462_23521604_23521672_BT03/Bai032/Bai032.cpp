#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
void LietKe(float a[], int n);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	LietKe(a, k);
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			for (int k = 0; k <= n - 1; k++)
				if ((i != j) && (j != k) && (i != k) && (a[i] == a[j] + a[k]))
				{
					cout << "(" << a[i] << ", " << a[j];
					cout << "," << a[k] << ")" << endl;
				}
}