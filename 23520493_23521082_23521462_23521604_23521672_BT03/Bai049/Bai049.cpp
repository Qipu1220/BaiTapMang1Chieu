#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(float[], int);
void Xuat(float[], int);
float TrungBinh(float[], int);

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
float TrungBinh(float a[], int n) {
	float s = 0;
	int dem = 0;
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			if (i != j) {
				s = s + abs(a[i] - a[j]);
				dem++;
			}
		}
	if (dem == 0)
		return 0;
	return (s / dem);
}

void Xuat(float a[], int n) {
	cout << setw(4) << TrungBinh(a, n);
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
