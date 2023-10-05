#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);
	int x, y;
	cout << endl << "Mien chan: " << endl;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;
	LietKe(b, k, x, y);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

void LietKe(int a[], int n, int x, int y)
{
	int b = 0;
	cout << "Liet ke cac gia tri tu " << x << " den " << y<<": ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y)
		{
			cout << setw(8) << a[i];
		}
	}
	if (b == 0)
		cout << "Khong co gia tri nao thoa";
}
