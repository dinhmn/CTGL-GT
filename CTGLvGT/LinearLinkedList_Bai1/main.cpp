#include <iostream>

using namespace std;

struct SinhVien
{
    string MaSV;
    string HoDem;
    string Ten;
    int NamSinh;
    float DiemTK;
};
struct List{
    int cous;
    SinhVien sv[Max];
};
void creat (List &L)
{
    L.cous = -1;
}
int emply(List L)
{
    return (L.cous == -1);
}
int full(List L)
{
    return (L.cous = Max - 1);
}
void Nhap(SinhVien &sv)
{
    cout << "Nhap ma sinh vien: ";
    fflush(stdin);
    getline(cin, sv.MaSV);
    cout << "Nhap ho dem: ";
    fflush(stdin);
    getline(cin, sv.HoDem);
    cout << "Nhap ten: ";
    fflush(stdin);
    getline(cin, sv.Ten);
    cout << "Nhap nam sinh: ";
    cin >> sv.NamSinh;
    cout << "Nhap diem tong ket: ";
    cin >> sv.DiemTK;
}

void Xuat(SinhVien sv)
{
    cout << sv.MaSV << setw(15) << sv.HoDem << setw(15) << sv.Ten << setw(15) << sv.NamSinh << setw(10) << sv.DiemTK << endl;
}

void Nhap_DS(List &L)
{
    cout << "Nhap so phan tu danh sach can tao: ";
    cin >> L.cous;
    for(int i=0; i < L.cous ; i++)
    {
        cout << "Nhap thong tin sinh vien thu: " << i+1 << endl;
        Nhap(L.sv[i]);
    }
}

void Xuat_DS(List &L)
{
    cout << "MaSV" << setw(15) << "Ho Dem" << setw(15) << "Ten" << setw(15) << "NamSinh" << setw(10) << "DiemTK" << setw(15) << endl;
    for (int i = 0; i < L.cous; i++)
    {
        Xuat(L.sv[i]);
    }
}
int remove_number(List L)
{
    int k;
    cout << "Nhap vi tri can xoa: ";
    cin >> k;
    if(!emply(L))
    {
        if (k <= L.cous + 1 && k >0)
        {
            for (int i =k; i <= L.cous; i++)
            {
                L.sv[i-1] = L.sv[i];

            }
            return 1;
        }
        else return 0;
    }
}
int insertintheList(List &L)
{
    CanBo x;
    cout << "Nhap du lieu sinh vien can them\n";
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
void Swap(SinhVien *a, SinhVien *b)
{
    SinhVien temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(List L)
{
    for (int i =0; i < L.cous; i++)
    {
        int m =i;
        for (int j = i+1; j < L.cous; j++)
        {
            if (L.sv[j] < L.sv[m])
                m =j;
        }
        if (m != i)
        {
            Swap(&arr[m], &arr[i]);
        }
    }
}


int main()
{
    List L;
    Nhap_DS(L);
    cout << "Danh sach cac sinh vien la " << endl;
    Xuat_DS(L);

    cout << "Xoa phan tu " << endl;
    remove_number(L);
    Xuat_DS(L);

    cout << "\nChen sinh vien" << endl;
    insertintheList(L);
    Xuat_DS(L);

    cout << "\nSap xep danh sach " << endl;
    insertintheList(L);
    Xuat_DS(L);

    return 0;
}
