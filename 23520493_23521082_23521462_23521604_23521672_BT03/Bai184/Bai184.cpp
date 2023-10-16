#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void NhapMangA(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
void NhapMangB(int b[], int m) {
	for (int i = 0; i < m; i++)
	{
		cout << "\nNhap phan tu b[" << i << "]=";
		cin >> b[i];
	}
}

int DemCon(int a[], int n, int b[], int m) {
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++) {
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}
void Xuat(int a[], int n, int b[], int m) {
	cout << "So lan cac mang xuat hien la: " << endl;
	cout << "\n" << setw(4) << DemCon(a, n, b, m);
}
int main() {
	int a[500];
	int b[500];
	int n;
	int m;
	cout << "Nhap so luong phan tu mang A: ";
	cin >> n;	
	NhapMangA(a, n);
	cout << "Nhap so luong phan tu mang B: ";
	cin >> m;
	NhapMangB(b, m);
	cout << "Cac day con la: ";
	Xuat(a, n,b, m);
	return 0;
}
