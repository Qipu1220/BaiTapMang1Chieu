#include <iostream>
#include <iomanip>
using namespace std;

int InterchangeSort(int a[], int n) {
	int i, j, dem = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
				dem++;
			}
		}
	}
	return dem;
}
int main()
{
	int a[6] = { 3,6,1,4,2,5 };
	InterchangeSort(a, 6);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << setw(4) << InterchangeSort(a,n);
	return 0;
}