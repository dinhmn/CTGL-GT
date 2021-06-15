#include <iostream>
#include <iomanip>

using namespace std;

struct SinhVien
{
    string MaSV;
    string HoTen;
    int NamSinh;
    float Mark;
};
void Nhap(SinhVien &sv)
{
    cout << "\nNhap ma sinh vien: ";
    fflush(stdin);
    getline(cin, sv.MaSV);
    cout << "Nhap ho ten: ";
    fflush(stdin);
    getline(cin, sv.HoTen);
    cout << "Nhap nam sinh: ";
    cin >> sv.NamSinh;
    cout << "Nhap diem tong ket: ";
    cin >> sv.Mark;
}
void Xuat(SinhVien &sv)
{
    cout << "Ma sinh vien: " << sv.MaSV << endl;
    cout << "Ho ten: " << sv.HoTen << endl;
    cout << "Nam sinh: " << sv.NamSinh << endl;
    cout << "Diem tong ket: " << sv.Mark << endl;
}
struct Node{
    SinhVien sv;
    Node *next;
};
typedef Node * node;
node head;
void create (node &head)
{
    head = NULL;
}
int empty(node &head)
{
    return head == NULL;
}
void travel(node head)
{
    node Q;
    if (!empty(head))
    {
        Q = head;
        //int i = 0;
        while(Q!= NULL)
        {
        //    i++;
            Q = Q ->next;
        }
        //return i;
    }
}
void NhapDS(node &head)
{
    create(head);
    SinhVien x;
    node Q,P;
    int i =1;
    do{
        cout << "Nhap sv thu " << i << endl;
        Nhap(x);
        P = new(node);
        P->sv = x;
        P->next = NULL;
        if (head == NULL) head = P;
        else Q->next = P;
        Q = P;
        ++i;
    }while(1);
}
void XuatDanhSach(node head)
{
    /*cout << endl;
    int dem=0;
    for(node p = head; p!=NULL; p=p->next)
    {
        cout << p->sv << endl;
        dem++;
    }
    */
    if (head == NULL){
        cout << "NULL: ";
        return;
    }
    cout << setw(5) << "STT";
    cout << setw(10) << "Ma sv";
    cout << setw(25) << "Ho Ten";
    cout << setw(10) << "Nam sinh";
    cout << setw(10) << "Diem TK" << endl;
    node Q = head;
    int i = 0;
    while(Q!=NULL)
    {
        SinhVien x = Q->sv;
        Xuat(x);
        Q = Q->next;
    }

}

int main()
{


    return 0;
}
