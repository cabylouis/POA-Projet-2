#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <iostream>
#include <vector>

#include "Agent.h"
#include "ScoreCalculator.h"

class Tournament {
public:
    Tournament(const std::vector<Agent>& players, const ScoreCalculator calculator, const int nbTours);

    void execute() ;

private:
    std::vector<Agent> players;
    ScoreCalculator calculator;
    int nbTours;
};

#endif
