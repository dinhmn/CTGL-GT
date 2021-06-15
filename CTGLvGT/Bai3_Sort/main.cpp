#include <iostream>

using namespace std;

struct Student
{
    string MaSV;
    string HoTen;
    int NamSinh;
    float DiemTB;
};

void input(Student st[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << "Student code input: ";
        fflush(stdin);
        getline(cin, st[i].MaSV);
        cout << "Name input: ";
        fflush(stdin);
        getline(cin, st[i].HoTen);
        cout << "Yeah input: ";
        cin >> st[i].NamSinh;
        cout << "Avarage mark input: ";
        cin >> st[i].DiemTB;
    }
}

void output(Student st[], int n)
{
    for (int i =0; i < n; i++)
    {
        cout << "-------Student Information-------" << endl;
        cout << "Student code: " << st[i].MaSV << endl;
        cout << "Name: " << st[i].HoTen << endl;
        cout << "Year: " << st[i].NamSinh << endl;
        cout << "Avarage mark: " << st[i].DiemTB << endl;
    }
}

void Swap(Student *a, Student *b)
{
    Student temp = *a;
    *a = *b;
    *b = temp;
}


void BubbleSort_Name(Student st[], int n)
{
    for (int i =0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (st[j].HoTen < st[j-1].HoTen)
            {
                Swap(&st[j], &st[j-1]);
            }
        }
    }
}
void BubbleSort_Mark(Student st[], int n)
{
    for (int i=0; i < n -1; i++)
    {
        for (int j = n -1; j > i; j--)
        {
            if (st[j].DiemTB > st[j].DiemTB)
            {
                Swap(&st[j], &st[j-1]);
            }
        }
    }
}
int main()
{

    Student st[100];
    int n;
    do{
        cout << "Input n: ";
        cin >> n;
    }while(n <=0 || n >= 100);
    cout << "------------ Hight School-----------" << endl;
    input(st, n);

    cout << "---------Welcom to EOP------------" << endl;

    output(st, n);


    BubbleSort_Name(st, n);
    cout << "----------------Bubble Sort Name----------------" << endl;
    output(st, n);

    BubbleSort_Mark(st, n);
    cout << "----------------Bubble Sort Mark----------------" << endl;
    output(st, n);




    return 0;
}
