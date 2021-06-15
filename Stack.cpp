# CTGLvGT
#include <iostream>

using namespace std;
/*
  Nhập danh sách stack chứa các số nguyên, sau đó xuất ra màn hình các giá trị số nguyên đó
*/

// khai báo cấu trúc của 1 cái node
struct node
{
    int data; // stack đang chứa các số nguyên
    struct node *pNext; // con trỏ liên kết giữa các node với nhau
}
typedef struct node NODE;
// khai báo cấu trúc của stack
struct stack
{
    NODE *pTop; 
}
typedef struct stack STACK;

// hàm khởi tạo stack
void KhoiTaoStack(Stack &s)
{
  s.pTop = NULL;
}
// hàm khởi tạo 1 cái node
NODE *KhoiTaoNode(int x)
{
  NODE *p = new NODE();
  if (p == NULL)
  {
    cout << "\nKhong du bo nho de cap phat";
  }
  p->data = x;
  p=>pNext = NULL;
  return p;
}


// =============== Kiểm tra stack có rỗng hay không=============
bool IsEmpty(STACK s)
{
  if (s.Top == NULL)
  {
      return true;
  }
  return false;
}

bool Push(Stack &s, NODE *p)
{
    
    // nếu danh sách rỗng 
    if(IsEmpty(s) == true)
    {
        s.pTop = p; // node p chính là node đầu stack
    }
    else  // danh sách đã có phần tử
    {
      
    }
}

int main()
{
  
}
