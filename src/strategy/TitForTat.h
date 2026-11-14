#ifndef TITFORTAT_H
#define TITFORTAT_H
#include "Strategy.h"


class TitForTat : public Strategy {
public:
    char applyStrategy(Agent& player) const override;
};


#endif
