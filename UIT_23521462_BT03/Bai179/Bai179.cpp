#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]=";
		cin >> a[i];
	}
}
int KT(float a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void LietKe(float a[], int n) {
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (KT(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				cout << "\n";
			}
		}
	}

}
int main() {
	float a[500];
	int vt;
	int n;
	int l;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Cac day con la: ";
	LietKe(a, n);
	return 0;
}
