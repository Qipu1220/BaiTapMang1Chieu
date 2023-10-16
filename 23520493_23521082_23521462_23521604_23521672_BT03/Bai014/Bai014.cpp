#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void LietKe(int[], int);
bool SoChinhPhuong(int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
bool SoChinhPhuong(int n) {
	for (int i = 0; (i * i) <= n; i++) 
		if ((i * i) == n)
			return true;
	return false;
}
void LietKe(int a[], int n) {
	for (int i = 0; i <= n - 1; i++)
		if (SoChinhPhuong(a[i]))
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