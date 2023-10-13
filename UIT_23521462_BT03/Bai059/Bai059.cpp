#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
int DemGT(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int DemGT(int a[], int n) {
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i <= n-2; i++)
		if (a[1] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}
void Xuat(int a[], int n) {
	cout << setw(4) << DemGT(a,n);
}
int main() {
	int a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	return 0;
}
