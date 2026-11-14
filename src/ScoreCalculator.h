#ifndef SCORE_CALCULATOR_H
#define SCORE_CALCULATOR_H

#include <vector>

#include "Agent.h"

class ScoreCalculator {
public:
    static void computeScore(std::vector<Agent>& players, const std::vector<char>& moves);

    static int strategyScore(char self, char foe) ;
};

#endif