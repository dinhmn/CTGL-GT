#include <iostream>
#include <iomanip>

using namespace std;

#define Max 7

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
    int dem = L.cous;
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

    if (L.cous < dem)
    {
        Xuat_DS(L);
    }

}
int Search(List L)
{
    if (!emply(L))
    {
        for (int i=0; i < L.cous ;i++)
        {
            if (L.sv[i].Ten == "Doanh")
            {
                Xuat(L.sv[i]);
            }
        }
    }
}
void Swap(SinhVien *sv1, SinhVien *sv2)
{
    SinhVien *temp = sv1;
    sv1 = sv2;
    sv2 = temp;
}
void Sort(List L)
{
    for (int i = 0; i < L.cous-1 ; i++)
    {
        for (int j = i + 1; j < L.cous ; j++)
        {
            if (L.sv[i].DiemTK < L.sv[j].DiemTK)

                {
                    SinhVien team = L.sv[i];
                    L.sv[i] = L.sv[j];
                    L.sv[j] = team;
                }
        }
    }
    Xuat_DS(L);
}
int main()
{
    List L;
    Nhap_DS(L);
    Xuat_DS(L);

    cout << "\nXoa danh sach sinh vien" << endl;
    remove_number(L);

    cout << "\nTim kiem sinh vien co ten 'Doanh' " << endl;
    Search(L);

    cout << "\nSap xep lai danh sach " << endl;
    Sort(L);

    return 0;
}
