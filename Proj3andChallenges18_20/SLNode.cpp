#include "SLNode.h"

SLNode::SLNode() {
    contents = 0;
    nextNode = NULL;
}

SLNode::SLNode(int defCont) {
    contents = defCont;
    nextNode = NULL;
}

	   
SLNode::~SLNode() {
    nextNode = NULL;
}
	    
void SLNode::setContents (int newContent) {
    contents = newContent;
}
int SLNode::getContents () const {
    return contents;
}
	
void SLNode::setNextNode (SLNode* newNextNode) {
    nextNode = newNextNode;
}
	
SLNode* SLNode::getNextNode () const {
    return nextNode;
}