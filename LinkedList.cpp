#include <bits/stdc++.h>
using namespace std;

// Construction of node;
class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    // Node alocation.
    Node *start;
    Node *one;
    Node *two;
    Node *three;

    // alocates nodes
    one = new Node;
    two = new Node;
    three = new Node;

    // assing value in values

    one->data = 1;
    two->data = 2;
    three->data = 3;

    // connect nodes;
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Print
    start = one;
    while (start != NULL)
    {
        cout << start->data;
        start = start->next;
    }

    return 0;
}