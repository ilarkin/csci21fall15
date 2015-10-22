#pragma once

class SLNode {
    
    public:
        SLNode();
        SLNode(int);
        
	    //default constructor, sets values nextNode(NULL) and contents(0)
	    //overloaded constructor, int parameter assigned to contents
	
	    ~SLNode();
	    //destructor, sets nextNode to NULL
	
	    void setContents (int);
	    int getContents () const;
	
	    void setNextNode (SLNode*);
	
	    SLNode* getNextNode () const;
	
    private:
        SLNode* nextNode;
        int contents;
        
	    //nextNode, SLNode* that points to the next node in a singly-linked list
	    //contents, int used to store the data contents of this SLNode
    
    
};