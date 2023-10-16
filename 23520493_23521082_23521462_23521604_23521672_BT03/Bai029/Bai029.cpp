#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void LietKe(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int ChanDau(int a[], int n) {
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanLonNhat(int a[], int n) {
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n) {
	int dd = ChanLonNhat(a, n);
	if (dd == -1) {
		cout << "\nKhong co chan";
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (a[i] ==dd)
			cout << setw(4)<<i;
}
int main() {
	int a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	LietKe(a, n);
	return 0;
}