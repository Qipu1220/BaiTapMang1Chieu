#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
void Xuat(float[], int);
float TongDuong(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i <= n-1; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
float TongDuong(float a[], int n){
	float s = 0;
	for (int i = 0; i <= n - 1; i++) 
		if (a[i] > 0)
			s += a[i];
	return s;
}
void Xuat(float a[], int n) {
		cout <<setw(4)<< setprecision(4) << TongDuong(a,n);
}
int main() {
	float a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	return 0;
}