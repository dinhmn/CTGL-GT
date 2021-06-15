#include <iostream>

using namespace std;

struct SinhVien
{
    string MaSV;
    string HoTen;
    int NamSinh;
    float Mark;
};
struct Node
{
    SinhVien *sv;
    Node *next;
};
typedef struct Node NODE;
struct list
{
    NODE *pHead; // node quan li dau danh sach
    NODE *pTail; // node quan li cuoi danh sach
};
typedef struct list LIST;

void KhoiTao(LIST &l)
{
    // cho 2 node tro den NULL - Vì danh sách liên kết đơn chưa có phần tử
    l.pHead = NULL;
    l.pTail = NULL;
}

NODE *KhoiTaoNODE(SinhVien &sv)
{
    NODE *p = new NODE; //
    if (p == NULL)
    {
        cout << "\nKhong du bo nho de cap phat" << endl;
        return NULL;
    }
    p->sv = sv;
    p->next = NULL;
    return p;
}
void ThemVaoDau(LIST &l, NODE *p)
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
