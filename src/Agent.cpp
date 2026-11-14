#include "Agent.h"
#include "strategy/Strategy.h"

Agent::Agent(const std::string& name, const std::shared_ptr<Strategy>& strategy) : name(name) , strategy(strategy) {}

const std::string& Agent::getName() const {
    return name;
}

int Agent::getScore() const {
    return score;
}

void Agent::updateScore(const int addPoint) {
    score += addPoint;
}

const std::vector<char>& Agent::getOwnMemory() const {
    return ownMemory;
}

void Agent::updateOwnMemory(const char s) {
    ownMemory.push_back(s);
}

const std::vector<char>& Agent::getFoesMemory() const {
    return foesMemory;
}

void Agent::updateFoesMemory(const char s) {
    foesMemory.push_back(s);
}

char Agent::playTurn() {
    return strategy->applyStrategy(*this);
}