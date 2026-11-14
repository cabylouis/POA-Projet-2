#ifndef PROJET_2_ALLD_H
#define PROJET_2_ALLD_H

#include "Strategy.h"

class AllD : public Strategy {
public:
    char applyStrategy(Agent& player) const override;

};

#endif
