#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
void LietKe(float a[], int n);
float AmDau(float a[], int n);

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

float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	if (ad == 0)
	{
		cout << "\Khong co gia tri am";
		return;
	}
	cout << "Vi tri thoa man: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == ad)
			cout << setw(5) << i;
}