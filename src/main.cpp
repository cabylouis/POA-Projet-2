#include <memory>
#include "strategy/AllD.h"
#include "Tournament.h"
#include "strategy/Joss.h"
#include "strategy/Random.h"
#include "strategy/Tester.h"
#include "strategy/TitForTat.h"

int main() {
    const auto strategy1 = std::make_shared<TitForTat>();
    const auto strategy2 = std::make_shared<Joss>();
    const auto strategy3 = std::make_shared<Tester>();
    const auto calculator = new ScoreCalculator();

    std::vector<Agent> allAgents;
    const auto agent1 = new Agent("Albert", strategy2);
    allAgents.push_back(*agent1);
    const auto agent2 = new Agent("Benoit", strategy2);
    allAgents.push_back(*agent2);
    const auto agent3 = new Agent("Celeste", strategy3);
    allAgents.push_back(*agent3);

    Tournament tournament(allAgents, *calculator, 200);
    tournament.execute();

    return 0;
}
