#include "SLNode.h"
#include "SList.h"
#include <iostream>
using namespace std;

int main() {
    
    SList theList;
    
    theList.insertHead(10);
    cout << theList.toString() << endl;
    
    theList.insertHead(8);
    cout << theList.toString() << endl;
    
    theList.insertHead(6);
    cout << theList.toString() << endl;
    
    theList.removeHead();
    cout << theList.toString() << endl;
   
   theList.insertHead(45555);
   theList.insertHead(998);
   
   cout << "size : " << theList.getSize() << endl;
   cout << theList.toString() << endl;
   
   theList.clear();
   cout << theList.toString() << "[]" << endl;
   
   cout << "size : " << theList.getSize() << endl;
    
    return 0;
}


/* dynamic test
SLNode* node1 = new SLNode;
    
    if (node1->getContents() == 0) {
        cout << "node1 contents ok" << endl;
    }
    
    
    if (node1->getNextNode() == NULL) {
        cout << "node1 nextNode Okay" << endl;
    }
    
    
    SLNode* node2 = new SLNode(99);
    
    if (node2->getContents() == 99) {
        cout << "node2 contents ok" << endl;
    }
    
    
    if (node2->getNextNode() == NULL) {
        cout << "node2 nextNode Okay" << endl;
    }
    
    node1->setNextNode(node2);
    
    if (node1->getNextNode() == node2) {
        cout << "node1 nextNode -> node2" << endl;
    }
    
    
    node2->setNextNode(new SLNode(42));
    
    cout << "-> " << node2->getNextNode()->getContents() << endl;
    cout << "--> " << node1->getNextNode()->getNextNode()->getContents() << endl;
    
    SLNode* tempNode = node2->getNextNode();
    cout << "temp-> " << tempNode->getContents() <






static node test
SLNode node1;
    
    if(node1.getContents() == 0) {
        cout << "node1 contents okay" << endl;
    }
    
    if(node1.getNextNode() == NULL) {
        cout << "node1 nextnode okay" << endl;
    }
    
    
    SLNode node2(99);
    
    if(node2.getContents() == 99) {
        cout << "node2 contents okay" << endl;
    }
    
    if(node2.getNextNode() == NULL) {
        cout << "node2 nextnode okay" << endl;
    }
    
    node1.setNextNode(&node2);
    
    if (node1.getNextNode() == &node2) {
        cout << "node1 nextNode -> node2" << endl;
    }
    */