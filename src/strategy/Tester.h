#ifndef TESTER_H
#define TESTER_H

#include "Strategy.h"

class Tester : public Strategy {
    char applyStrategy(Agent& player) const override ;

};

#endif
