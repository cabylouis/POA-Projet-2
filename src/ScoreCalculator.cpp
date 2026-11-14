#include "ScoreCalculator.h"

void ScoreCalculator::computeScore(std::vector<Agent>& players, const std::vector<char>& moves) {
    for (int i = 0; i < moves.size(); ++i) {
        int tmp = 0;

        for (int j = 0; j < moves.size(); ++j) {
            if (i != j) {
                tmp += strategyScore(moves[i], moves[j]);
            }
        }

        players[i].updateScore(tmp);
    }
}

int ScoreCalculator::strategyScore(const char self, const char foe) {
    if (self == 'D' && foe == 'D') {
        return 2;
    }
    if (self == 'D' && foe == 'C') {
        return 5;
    }
    if (self == 'C' && foe == 'D') {
        return 0;
    }
    return 3;
}