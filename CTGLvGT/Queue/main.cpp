#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *pNext;
};
// Khai báo cấu trúc của 1 cái node trong queue
struct Queue
{
    node *pHead;
    node *pTail;
};

// hàm khởi tạo queue
void KhoiTaoQueue(Queue &q)
{
    q.pHead = NULL;
    q.pTail = NULL;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
