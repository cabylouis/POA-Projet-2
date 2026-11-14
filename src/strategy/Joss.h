#ifndef JOSS_H
#define JOSS_H

#include "Strategy.h"

class Joss : public Strategy {
    char applyStrategy(Agent& player) const override ;
};

#endif
