#include "Tournament.h"

Tournament::Tournament(const std::vector<Agent>& players, const int nbTours) : players(players), nbTours(nbTours) {}

void Tournament::execute() const {
    std::cout << "Start of the tournament";
    for (int i = 1; i < nbTours; i++) {
        std::cout << "Turn : " << i;
        for (const Agent& player : players) {

        }
    }
}