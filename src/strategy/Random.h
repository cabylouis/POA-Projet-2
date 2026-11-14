#ifndef PROJET_2_RANDOM_H
#define PROJET_2_RANDOM_H

#include "Strategy.h"

class Random : public Strategy {
public:
    char applyStrategy(Agent& player) const override;
};

#endif
