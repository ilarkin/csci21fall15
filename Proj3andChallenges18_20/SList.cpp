#include "SList.h"


SList::SList()
: head(NULL), size(0)
{}


SList::~SList() {
    clear();
}

void SList::insertHead(int contents) {
	SLNode* node = new SLNode(contents);
	node->setNextNode(head);
	head = node;
	
	size++;
    
}

void SList::removeHead() {
    if (head !=NULL) {
        SLNode* temp = head->getNextNode();
        delete head;
        head = temp;
    
        size--;
    }
    
}

void SList::clear() {
    while(head != NULL) {
        removeHead();
    }
}

unsigned int SList::getSize() const {
	return size;
    
}

string SList::toString() const {
    
    
    stringstream ss;
    for (SLNode* i = head; i != NULL; i = i->getNextNode()) {
        ss << i->getContents();
    }
    return ss.str();
}

