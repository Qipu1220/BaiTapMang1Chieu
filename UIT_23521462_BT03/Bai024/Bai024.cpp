#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
void LietKe(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
void LietKe(float a[], int n) {
	if (n == 1)
		return;
	if (a[0] * a[1] < 0)
		cout <<setw(4)<< setprecision(3)<< a[0];
	for (int i = 0; i <= n - 2; i++)
		if (a[i] * a[i + 1] < 0 || a[i - 1] * a[i] < 0)
			cout <<setw(4)<<setprecision(3)<< a[i];
	if (a[n - 1] * a[n - 2] < 0)
		cout << setw(4) << setprecision(3) << a[n - 1];
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