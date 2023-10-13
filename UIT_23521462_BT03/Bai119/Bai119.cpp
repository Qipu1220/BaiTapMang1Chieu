#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
int KT(int[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
int KT(int a[], int n) {
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			flag = 1;
	return flag;
}
void Xuat(int a[], int n) {
	cout << setw(4) << setprecision(3) << KT(a, n);
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
