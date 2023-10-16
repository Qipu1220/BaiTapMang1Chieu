#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void NhapMang(int[], int);
void Xuat(int[], int);
void DaoMang(float[], int);

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
void DaoMang(float a[], int n) {
	int d = 0;
	int c = n - 1;
	while (d < c) {
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}
void Xuat(int a[], int n) {
	printf("\n\nMANG DUOC DAO NGUOC\n");
	for (int i = n-1; i >= 0 ; i--) 
		printf("%d \t", a[i]);
}
int main() {
	int a[500];
	int n;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	Xuat(a, n);
	return 0;
}
