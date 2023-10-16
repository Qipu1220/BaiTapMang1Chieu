#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
void NhapMang(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}

int ChuSoDau(int n) {
	int dt = abs(n);
	while (dt >=10)
		dt = dt / 10;
	return dt;
}
void LietKe(int a[], int n) {
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 == 0)
			cout <<setw(4)<< a[i];
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