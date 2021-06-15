#include <iostream>
#define Max 10
using namespace std;

typedef int Number;
struct Stack
{
    Number arr[Max];
    int top;
};
Stack s;
void Initilize(Stack &s)
{
    s.top = -1;
}
int Empty(Stack s)
{
    return (s.top == -1);
}
int Full(Stack s)
{
    return (s.top == Max -1);
}

int Push(Stack &s, Number x)
{
    if (Full(s))
        return 0;
    else
    {
        s.top = s.top + 1;
        s.arr[s.top] = x;
        return 1;
    }
}
int Pop(Stack s, Number x)
{
    if (Empty(s)) return 0;
    else{
        x = s.arr[s.top];
        s.top = s.top -1;
        return 1;
    }
}
void ConvertBinary(Stack &s,unsigned long n)
{
    int r;
    do{
        n = n / 2;
        r = n % 2;
    }while(Push(s, r) && n > 0);
}
void Show(Stack s)
{
    int r;
    cout << "Encode of Binary: ";
    while(Pop(s, r));
        cout << r << endl;
}
int main()
{
    Stack s;
    int n;
    cout << "Nhap n: ";
    cin >> n;

    ConvertBinary(s, n);
    cout << "Ma nhi phan: ";
    Show(s);
    return 0;
}
