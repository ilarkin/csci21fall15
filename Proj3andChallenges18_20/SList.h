#pragma once

#include "SLNode.h"


#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;


class SList {
    public:
        SList();
        ~SList();
        
        void insertHead(int contents);
        
        void removeHead();
        void clear();
        unsigned int getSize() const;
        string toString() const;
        
    
    
    private:
        SLNode* head;
        unsigned int size;
};


