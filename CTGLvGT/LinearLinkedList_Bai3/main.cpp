#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define MAX 7

struct CanBo
{
    string MaCanBo;
    string HoDem;
    string Ten;
    string GioiTinh;
    int Tuoi;
    float HeSoLuong;
    long Luong;
};
struct List
{
    int cunt;
    CanBo A[MAX];
};
List L;
void creat (List &L)
{
    L.cunt = -1;
}
int emply(List L)
{
    return (L.cunt == -1);
}
int full(List L)
{
    return (L.cunt = MAX - 1);
}

void Nhap(CanBo &cb)
{
    cout << "Nhap ma can bo: ";
    fflush(stdin);
    getline(cin, cb.MaCanBo);
    cout << "Nhap ho dem: ";
    fflush(stdin);
    getline(cin, cb.HoDem);
    cout << "Nhap ten: ";
    fflush(stdin);
    getline(cin, cb.Ten);
    cout << "Nhap gioi tinh: ";
    fflush(stdin);
    getline(cin, cb.GioiTinh);
    cout << "Nhap tuoi: ";
    cin >> cb.Tuoi;
    cout << "Nhap he so luong: ";
    cin >> cb.HeSoLuong;
}

void Nhap_ds(List &L)
{
    cout << "Nhap so luong phan tu: ";
    cin >> L.cunt;
    for (int i =0 ; i < L.cunt ; i++)
    {

        cout << "\nNhap thong tin can bo thu: " << i +1 << endl;
        Nhap(L.A[i]);
    }
}

void Xuat(CanBo cb)
{
    cb.Luong = cb.HeSoLuong * 1150000;
    cout << cb.MaCanBo << setw(15) << cb.HoDem << setw(20) << cb.Ten << setw(10) << cb.GioiTinh << setw(10) << cb.Tuoi << setw(15) << cb.HeSoLuong << setw(15) << cb.Luong << endl;
}
void Xuat_DS(List L)
{
    cout << "Ma can bo " << setw(10) << "Ho dem " << setw(10) << "Ten " << setw(10) << "Gioi tinh" << setw(10) << "Tuoi" << setw(10) << "He so luong " << setw(10) << "Luong " << endl;
    for (int i =0; i < L.cunt; i++)
    {
        Xuat(L.A[i]);
    }
}
void ShowList(List L)
{
    for (int i =0; i < L.cunt; i++)
    {
        if (L.A[i].Tuoi < 50 && L.A[i].GioiTinh == "Nu")
        {
            Xuat(L.A[i]);
        }
    }
}
void ShowSearch(List L)
{
    int Count =0;
    for (int i =0; i < L.cunt ; i++)
    {
        if (L.A[i].Ten == "Tung")
        {
            Count++;
        }
    }
    for (int i = 0 ; i < L.cunt; i++)
    {
        if (L.A[i].Ten == "Tung" && Count == 1)
        {
            Xuat(L.A[i]);
            break;
        }
    }
}

int insertintheList(List &L)
{
    CanBo x;
    cout << "Nhap du lieu can bo can them\n";
    Nhap(x);
    int k;
    cout << "\nNhap vi tri can them: ";
    cin >> k;
    int i;
    if (k <= L.cunt+1 && k > 0 && full(L))
    {
        for (i = L.cunt; i >= k-1; i--)
        {
            L.A[i+1] = L.A[i];
        }
        L.A[i-1] = x;
        L.cunt++;
        return 1;
    }
    else return 0;
}
int main()
{
    List L;
    Nhap_ds(L);
    Xuat_DS(L);

    cout << "Show List" << endl;
    ShowList(L);
    cout << "\nHien thi thong tin can bo can tim " << endl;
    ShowSearch(L);

    insertintheList(L);
    return 0;
}
