#pragma once


/*
private data members: boxNumber (unsigned int), boxColor (string), scratch (Prize), prizes (Prize*, for dynamic array), prizeCapacity (unsigned int), prizeCount (unsigned int)
public default constructor: initial values boxNumber (0), boxColor ("NO COLOR"), prizeCapacity (5), prizeCount(0); in the definition, prizes array must be initialized to match prizeCapacity
public overloaded constructor: parameters for boxNumber, boxColor, prizeCapacity; in the definition, prizes array must be initialized to match prizeCapacity
public destructor: free memory associated with prizes
public accessors/gets AND mutators/sets for boxNumber, boxColor
public accessor/get ONLY for data members prizeCapacity, prizeCount
public addPrize: parameters prize (Prize), return value (bool); place prize in prizes array if there is space and return true, else return false
public getPrize: parameters index (unsigned int), return value Prize&; return a Prize if index is valid, else return scratch (data member declared in class header)
public removePrize: parameters index (unsigned int), return value Prize; remove and return Prize if index is valid, else return scratch (data member declared in class header)
*/
#include "prize.h"
#include <string>
using namespace std;

class Box {
    public:
        Box();
        Box(unsigned int, string, unsigned int);
        ~Box();
        
        void setBoxNumber(unsigned int newBoxNumber);
        void setBoxColor (string newBoxColor);
        
        unsigned int getBoxNumber();
        string getBoxColor();

        unsigned int getPrizeCapacity();
        unsigned int getPrizeCount();
        
        bool addPrize(Prize prize);
        Prize getPrize(unsigned int index);
        Prize removePrize(unsigned int index);


    private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};