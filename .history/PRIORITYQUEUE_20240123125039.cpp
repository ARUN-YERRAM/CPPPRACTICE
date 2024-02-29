#include<iostream>
using namespace std;

class BinaryTree
{
public:
    int *a;
    int top;

    BinaryTree(int root, int size)
    {
        a = new int[size];
        a[0] = root;
        top = 0;
    }

    void setLeft(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 1] = element;
        top += 1;
    }

    void setRight(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 2] = element;
        top += 1;
    }

    int size()
    {
        return top + 1;
    }

    void printTree()
    {
        for (int i = 0; i < size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    BinaryTree *b = new BinaryTree(45, 20);
    b->setLeft(0, 34);
    b->setRight(0, 40);
    b->setLeft(1, 29);
    b->setRight(1, 16);
    b->setLeft(2, 22);
    b->setRight(2, 30);
    b->printTree();
    cout << "Size: " << b->size() << endl;
    delete[] b->a; // Free allocated memory
    delete b;      // Free the object
    return 0;
}