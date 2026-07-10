#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first = nullptr;
Node *last = nullptr;

void create(int A[], int n)
{
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;

        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while (p != nullptr)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "null" << endl;
}

int count(Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int RCount(Node *p)
{
    if (p != NULL)
    {
        return RCount(p->next) + 1;
    }
    else
    {
        return 0;
    }
}

int FindSum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RSum(Node *p)
{
    int sum = 0;
    if (p == NULL)
    {
        return sum;
    }
    else
    {
        return RSum(p->next) + p->data;
    }
}

void Insert(Node *p, int index, int x)
{
    Node *t;
    int i;

    if (index < 0 || index > count(p))
        return;

    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;

        t->next = p->next;
        p->next = t;
    }
}

void InsertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void SortedInsert(Node *p, int x)
{
    Node *t, *q = NULL;

    t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

void DeleteNode(Node *p, int index)
{
    Node *q = new Node;
    int x = -1, i;

    if (index < 1 || index > count(p))
        return;

    if (index == 1)
    {
        q = first;
    }
}

int isSorted(Node *p)
{
    int x = -65536;

    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main()
{
    int A[] = {2, 3, 5};
    create(A, 3);
    // Display(first);
    // cout << "Count: " << count(first) << endl;
    // cout << "Recursive Count: " << RCount(first) << endl;
    // cout << "Sum : " << FindSum(first) << endl;
    // cout << "Recursive Sum : " << RSum(first) << endl;
    // Insert(first, 3, 10);
    // InsertLast(4);
    // InsertLast(5);
    // InsertLast(6);

    // SortedInsert(first, 6);

    cout << (isSorted(first) ? "True" : "False") << endl;

    Display(first);
}