#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
float NhoNhat(float[], int);
void LietKe(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
float NhoNhat(float a[], int n) {
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n) {
	float lc = NhoNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i]==lc)
			cout << setw(4) << setprecision(3) << i;
}
int main() {
	float a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	LietKe(a, n);
	return 0;
}
