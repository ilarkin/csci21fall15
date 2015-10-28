#pragma once
#include <cstdlib>

class SLNode {
    
    public:
        SLNode();
        SLNode(int);
        
	    ~SLNode();
	    
	
	    void setContents (int);
	    int getContents () const;
	
	    void setNextNode (SLNode*);
	
	    SLNode* getNextNode () const;
	
    private:
        SLNode* nextNode;
        int contents;
        
    
    
};