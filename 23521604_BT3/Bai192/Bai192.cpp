#include <iostream>
#include <iomanip>
using namespace std;
void Nhapps(PHANSO [], int& );
void Nhap(PHANSO& );
int SoSanh(PHANSO , PHANSO );
void InterchangeSort(PHANSO [], int );
void Xuat(PHANSO );
void Xuatps(PHANSO[], int);

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;


int main()
{
	PHANSO a[100];
	int k;
	Nhapps(a, k);
	InterchangeSort(a, k);
	Xuatps(a, k);
}

int SoSanh(PHANSO x, PHANSO y)
{
	int a = (int)x.tu / x.mau;
	int b = (int)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void InterchangeSort(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (SoSanh(a[i], a[j]) == 1)
			{
				PHANSO temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu : ";
	cin >> x.tu;
	cout << "Nhap mau : ";
	cin >> x.mau;
}

void Nhapps(PHANSO a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau;
}

void Xuatps(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}