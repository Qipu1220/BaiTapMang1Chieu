#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int,  int[], int);
bool KT(int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
bool KT(int k) {
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void Xuat(int a[], int n, int b[], int k) {
	for (int i = 0; i < n; i++)
		if (KT(a[i])) {
			b[k] = a[i];
			k++;
		}
	for (int i=0;i<k; i++)
		cout << setw(4) << setprecision(3) << b[i];
}
int main() {
	int a[500];
	int b[500];
	int n;
	int k = 0;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n,b, k);
	return 0;
}
