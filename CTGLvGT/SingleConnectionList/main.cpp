#include <iostream>
#include <iomanip>

using namespace std;

struct SinhVien
{
    string Masv;
    string Hoten;
    float Tdiem;
};
void Nhap(SinhVien sv)
{
    cout << "Ma sinh vien: ";
    fflush(stdin);
    getline(cin, sv.Masv);
    cout << "Ho ten: ";
    fflush(stdin);
    getline(cin, sv.Hoten);
    cout << "Tong diem: ";
    cin >> sv.Tdiem;
}
void Xuat(SinhVien sv)
{
    cout << "Ma sinh vien: " << sv.Masv << endl;
    cout << "Ho ten: " << sv.Hoten << endl;
    cout << "Tong diem: " << sv.Tdiem << endl;
}
struct Node
{
    SinhVien sv;
    Node *next;
};
typedef struct Node *node;
node L;

void create(node &t)
{
    t = NULL;
}

int isEmpty(node t)
{
    return (t==NULL);
}

void Nhap(Node &t)
{
    Node *p;
    t = new Node();
    p = t;
    cout << "Nhap vao ma sinh vien: " ; fflush(stdin); getline(cin, t->sv.Masv);
    c
}

Node *CreateNode(SinhVien sv)
{
    Node *p;
    if (isEmpty(p))
    {
        return NULL;
    }

        Nhap(p->sv);
        p->sv = sv;
        p = p->next;

    return p;
}

void HienThi(node t)
{
    Node *p;
    if (t!= NULL)
    {
        p = t;
        int i = 0;
        while(p!=NULL)
        {
            i++;
            cout << setw(10) << p->sv.Masv << setw(10) << p->sv.Hoten << setw(10) << p->sv.Tdiem << endl;
            p = p->next;
        }
    }

}
void travel(node t)
{
    node p; //tạo 1 Node Q để duyệt
    if (!empty(t))
    {
        p = t; //cho Q trỏ vào Node đầu tiên
        int i=0; //biến đếm
        while (p != NULL)
        {
            i++;//Các lênh (nếu muốn tính độ dài của danh sách

            p = p->next; //cho Q trỏ dến Node tiếp theo
        }
        return i; //trả lại số Node của danh sách;
    }
}

int main()
{
    node p;
    SinhVien sv[100];
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Nhap(sv[i]);
        CreateNode(sv[i]);
    }
    HienThi(p);
    return 0;
}
