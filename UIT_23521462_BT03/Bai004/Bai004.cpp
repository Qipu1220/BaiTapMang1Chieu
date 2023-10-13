#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(string filename, float a[], int& n) {
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}
void Xuat(float a[], int n) {
	for (int i = 0; i <= n-1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}
int main() {
	float b[500];
	int k;
	ifstream file("TEST004.txt");
	Nhap("TEST004.txt", b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}