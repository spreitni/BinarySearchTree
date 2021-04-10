#include <iostream>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    BinaryTree* bt = new BinaryTree();
    bt->add(5);
    bt->add(2);
    bt->add(13);
    bt->add(17);
    bt->add(1);
    cout << bt->getCount() << endl;
    bt->visitInOrder();
    cout<<"\n";
    bt->visitPostOrder();
    cout<<"\n";
    bt->visitPreOrder();
    return 0;
}