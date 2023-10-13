#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
bool KiemTra(int);
int DemDX(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
bool KiemTra(int n) {
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0) {
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}
int DemDX(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KiemTra(a[i]))
			dem++;
	return dem;
}
void Xuat(int a[], int n) {
	cout << setw(4) << DemDX(a, n);
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
