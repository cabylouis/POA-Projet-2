#include "Tournament.h"

Tournament::Tournament(const std::vector<Agent>& players, const ScoreCalculator calculator, const int nbTours) :
players(players), calculator(calculator), nbTours(nbTours) {}

void Tournament::execute() {
    std::cout << "Start of the tournament \n\n";

    for (int i = 1; i <= nbTours; i++) {
        std::cout << "Turn : " << i << "\n";
        std::vector<char> currentTurnMoves;

        for (Agent& player : players) {
            std::cout << player.getName() << "'s turn : ";

            const char s = player.playTurn();
            currentTurnMoves.push_back(s);
            std::cout << s << "\n";
        }

        calculator.computeScore(players, currentTurnMoves);

        for (int j = 0; j < players.size(); j++) {
            for (int k = 0 ; k < currentTurnMoves.size() ; k++) {
                if (j == k) {
                    players[j].updateOwnMemory(currentTurnMoves[k]);
                } else {
                    players[j].updateFoesMemory(currentTurnMoves[k]);
                }
            }
        }

        std::cout << "\n";
    }

    for (const Agent& player : players) {
        std::cout << player.getName() << "'s score : " << player.getScore() << "\n";
        std::cout << player.getName() << "'s own memory : \n";

        for (const char c : player.getOwnMemory()) {
            std::cout << c << " ";
        }

        std::cout << "\n\n";

        std::cout << player.getName() << "'s foes memory : \n";

        for (const char c : player.getFoesMemory()) {
            std::cout << c << " ";
        }

        std::cout << "\n\n";
    }

    std::cout << "End of the tournament \n";
}