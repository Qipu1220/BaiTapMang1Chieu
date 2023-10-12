#include <iostream>
#include <fstream>
using namespace std;
struct SoPhuc
{
    double Thuc;
    double Ao;
};
void SwapSoPhuc(SoPhuc& a, SoPhuc& b);
void InterchangeSortSoPhuc(SoPhuc a[], int n);

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    SoPhuc a[10]; 

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan thuc cho phan tu " << i + 1 << ": ";
        cin >> a[i].Thuc;
        cout << "Nhap phan ao cho phan tu " << i + 1 << ": ";
        cin >> a[i].Ao;
    }
    InterchangeSortSoPhuc(a, n);
    cout << "Mang sau khi sap xep theo phan thuc: " << endl;
    for (int i = 0; i < n; i++)
        cout << "Phan thuc: " << a[i].Thuc << ", Phan ao: " << a[i].Ao << endl;
}

void SwapSoPhuc(SoPhuc& a, SoPhuc& b)
{
    SoPhuc temp = a;
    a = b;
    b = temp;
}
void InterchangeSortSoPhuc(SoPhuc a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].Thuc > a[j].Thuc)
                SwapSoPhuc(a[i], a[j]);
}
