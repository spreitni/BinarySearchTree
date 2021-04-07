#include <string>

class binarySearchTree
{
    private:
        //int value;
        binarySearchTree* nextNode;
        int root;
        int setRoot;
        int payload;
    public:
        binarySearchTree(int value);
        int getPayLoad();
        binarySearchTree* getNextNode();
        binarySearchTree* setNextNode();
        int getPayload();






};