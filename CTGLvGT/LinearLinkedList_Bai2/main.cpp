#include <iostream>
#include <iomanip>

using namespace std;
#define Max 10
struct MaHang
{
    int MaHang;
    string TenHang;
    string DVTinh;
    long DonGia;
    int SoLuong;
    long ThanhTien;
};

struct List
{
    int Count;
    MaHang A[Max];
};
void creat (List &L)
{
    L.Count = -1;
}
int emply(List L)
{
    return (L.Count == -1);
}
int full(List L)
{
    return (L.Count = Max - 1);
}

void Nhap(MaHang &cb)
{
    cout << "Nhap ma hang: ";
    cin >> cb.MaHang;
    cout << "Nhap ten hang: ";
    fflush(stdin);
    getline(cin, cb.TenHang);
    cout << "Nhap don vi tinh: ";
    fflush(stdin);
    getline(cin, cb.DVTinh);
    cout << "Nhap don gia: ";
    cin >> cb.DonGia;
    cout << "Nhap so luong: ";
    cin >> cb.SoLuong;
}

void Nhap_ds(List &L)
{
    cout << "Nhap so luong phan tu: ";
    cin >> L.Count;
    for (int i =0 ; i < L.Count ; i++)
    {

        cout << "\nNhap thong tin don hang thu: " << i +1 << endl;
        Nhap(L.A[i]);
    }
}

void Xuat(MaHang cb)
{
    cb.ThanhTien = cb.DonGia * cb.SoLuong;
    cout << cb.MaHang << setw(15) << cb.TenHang<< setw(20) << cb.DVTinh << setw(10) << cb.DonGia << setw(10) << cb.SoLuong << setw(15) << cb.ThanhTien << endl;
}
void Xuat_DS(List L)
{
    cout << "MaHang " << setw(10) << "TenHang " << setw(10) << "DV Tinh " << setw(10) << "DonGia" << setw(10) << "SoLuong" << setw(10) << "ThanhTien " << endl;
    for (int i =0; i < L.Count; i++)
    {
        Xuat(L.A[i]);
    }
}
int remove_number(List L)
{
    int k;
    cout << "Nhap vi tri can xoa: ";
    cin >> k;
    if(!emply(L))
    {
        if (k <= L.Count + 1 && k >0)
        {
            for (int i =k; i <= L.Count; i++)
            {
                L.A[i-1] = L.A[i];

            }
            return 1;
        }
        else return 0;
    }
}
int insertintheList(List &L)
{
    MaHang x;
    cout << "Nhap du lieu hang hoa can them\n";
    Nhap(x);
    int k;
    cout << "\nNhap vi tri can them: ";
    cin >> k;
    int i;
    if (k <= L.Count+1 && k > 0 && full(L))
    {
        for (i = L.Count; i >= k-1; i--)
        {
            L.A[i+1] = L.A[i];
        }
        L.A[i-1] = x;
        L.Count++;
        return 1;
    }
    else return 0;
}
void Swap(MaHang *a, MaHang *b)
{
    MaHang temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(List L)
{
    for (int i = 0; i < L.Count-1 ; i++)
    {
        for (int j = i + 1; j < L.Count; j++)
        {
            if (L.A[i].ThanhTien < L.A[j].ThanhTien)

                {
                    Swap(&L.A[i], &L.A[j]);
                }
        }
    }
    Xuat_DS(L);
}
int main()
{
    List L;
    Nhap_ds(L);
    cout << "\nXuat danh sach" << endl;
    Xuat_DS(L);

    cout << "\nXoa phan tu" << endl;
    remove_number(L);
    Xuat_DS(L);

    cout << "\nChen hang hoa" << endl;
    insertintheList(L);
    Xuat_DS(L);

    cout << "\nSap xep" << endl;
    Sort(L);
    Xuat_DS(L);

    return 0;
}
