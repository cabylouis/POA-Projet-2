#include "Agent.h"
#include "Strategy.h"

Agent::Agent(const std::string& name, const std::shared_ptr<Strategy>& strategy, const int score, const std::vector<char>& memory) :
name(name) , strategy(strategy), score(score), memory(memory) {}

const std::string& Agent::getName() const {
    return name;
}

int Agent::getScore() const {
    return score;
}

void Agent::updateScore(const int addPoint) {
    score += addPoint;
}

const std::vector<char>& Agent::getMemory() const {
    return memory;
}

void Agent::updateMemory(const char s) {
    memory.push_back(s);
}

char Agent::playTurn() const {
    return strategy->applyStrategy();
}