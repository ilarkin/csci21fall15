#pragma once


#include <string>
using namespace std;
class Prize {
    public:
        Prize();
        Prize(string, unsigned int);
        ~Prize();
        
        void setPrizeValue (unsigned int newPrizeValue);
        void setPrizeName (string newPrizeName);
        
        unsigned int getPrizeValue();
        string getPrizeName();
        
    private:
        string prizeName;
        unsigned int prizeValue;
};