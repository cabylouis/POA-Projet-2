#include "AllD.h"
#include "Tournament.h"

int main() {
    const auto strategy = std::make_shared<AllD>();
    const auto calculator = new ScoreCalculator();

    constexpr std::vector<char> memory1;
    constexpr std::vector<char> memory2;

    std::vector<Agent> allAgents;
    const auto agent1 = new Agent("Albert", strategy, 0, memory1);
    allAgents.push_back(*agent1);
    const auto agent2 = new Agent("Benoit", strategy, 0, memory2);
    allAgents.push_back(*agent2);

    Tournament tournament(allAgents, *calculator, 200);
    tournament.execute();

    return 0;
}
