#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n);
int DemCucDai(float[], int n);
int DemCucTieu(float[], int n);
int DemCucTri(float a[], int n);

int main()
{
	float a[500];
	int k;
	Nhap(a, k);
	cout << "So cuc tri la : " << DemCucTri(a, k);
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

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem; 
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	int dem1 = DemCucDai(a, n);
	int dem2 = DemCucTieu(a, n);
	return (dem1 + dem2);
}


