#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool KiemTra(int, int);
int LietKe(int[], int, int);

int main()
{
	int b[100];
	int k;
	int x;
	Nhap(b, k);
	cout << "So can chia: ";
	cin >> x;

	Xuat(b, k);
	cout <<endl<< "Co tat ca " << LietKe(b, k, x) << " so chia het cho " << x;
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
		cout << setw(8) << a[i];
}

bool KiemTra(int nn, int xx)
{
	if (nn % xx == 0)
		return true;
	else
		return false;
}

int LietKe(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i], x) && a[i] > 0)
			dem++;
    }
	return dem;
}