#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <iostream>
#include <vector>

#include "Agent.h"

class Tournament {
public:
    Tournament(const std::vector<Agent>& players, const int nbTours);

    void execute() const ;

private:
    std::vector<Agent> players;
    int nbTours;
};


#endif
