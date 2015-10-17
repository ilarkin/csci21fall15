#include "prize.h"
#include "box.h"

Prize::Prize() {
    prizeName = "NO NAME";
    prizeValue = 0;
}



Prize::Prize(string s, unsigned int v) {
    prizeName = s;
    prizeValue = v;
}



Prize::~Prize() {
    
}
  
  
  
        
void Prize::setPrizeValue (unsigned int newPrizeValue) {
    prizeValue = newPrizeValue;
    
}





void Prize::setPrizeName (string newPrizeName) {
    prizeName = newPrizeName;
}
        
        
        
        
unsigned int Prize::getPrizeValue() {
    return prizeValue;
}

string Prize::getPrizeName() {
    return prizeName;
}