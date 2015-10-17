#include "box.h"
#include "prize.h"

Box::Box() {
    boxNumber = 0;
    boxColor = "NO COLOR";
    prizeCapacity = 5;
    prizeCount = 0;
    prizes = new Prize[prizeCapacity];
}

Box::Box(unsigned int boxNum, string boxCol, unsigned int prizeCap) {
    boxNumber = boxNum;
    boxColor = boxCol;
    prizeCapacity = prizeCap;
    prizes = new Prize[prizeCapacity];
}

Box::~Box() {
    delete [] prizes;
}
        
void Box::setBoxNumber(unsigned int newBoxNumber) {
    boxNumber = newBoxNumber;  
}

void Box::setBoxColor (string newBoxColor) {
    boxColor = newBoxColor;
}

unsigned int Box::getBoxNumber() {
    return boxNumber;
}

string Box::getBoxColor() {
    return boxColor;
}

unsigned int Box::getPrizeCapacity() {
    return prizeCapacity;
}

unsigned int Box::getPrizeCount() {
    return prizeCount;
}
        
bool Box::addPrize(Prize prize) {
     if (prizeCount >= prizeCapacity) {
   //     throw ArrayException("ERROR")
        return false;
    } else {
        prizes[prizeCount] = prize;
        prizeCount++;
        return true;
    }
}



Prize Box::getPrize(unsigned int index) {
    return prizes[index];
}
Prize Box::removePrize(unsigned int index) {
    for (int i = index; i < prizeCount; i++) {
        prizes[index] = prizes[index+1];
    }
    
    prizeCount--;
    return prizes[index];
}