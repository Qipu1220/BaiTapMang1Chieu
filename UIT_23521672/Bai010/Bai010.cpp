#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void nhap(int a[], int& n);
void xuat(int a[], int n);
bool ktToanLe(int n);
void LietKe(int a[], int n);

int main()
{
	int a[100];
	int b;

	nhap(a, b);
	cout << "Mang ban dau la: \n";
	xuat(a, b);
	cout << "\nSo nguyen toan le la: \n";
	LietKe(a, b);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (1000 + 1);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

bool ktToanLe(int n)
{
	bool flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktToanLe(a[i]))
			cout << setw(8) << a[i];
	}
}

