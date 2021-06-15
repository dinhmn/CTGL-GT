#include <iostream>
#include <conio.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

typedef Node *tro
void MakeNull(tro &root);
tro CreateNode(int data);
void InsertNode(tro &root, int x);
void AddNode(tro &root);
void NLR(tro root);
void LRN(tro root);
void LNR(tro root);
tro SearchNode(tro root, int x);
void RemoveNodeTree(tro &root);
void RemoveNode(tro root);
int CountNode(tro root);

tro CreateNode(int data)
{
    tro p = new Node;
    if (p == NULL)
    {
        return NULL;
        cout << "Khong du bo nho\n";
    }
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void MakeNull(tro &root)
{
    root = NULL;
}
void InsertNode(tro &root, int x)
{
    if (root == NULL)
        root = CreateNode(x);
    else
        if (root->data = x)
            return ;
        else if (root->data < x)
            if (root->data == NULL)
                CreateNode(x);
            else InsertNode(root->left, x);
            else InsertNode()
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
