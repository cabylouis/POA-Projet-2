#ifndef AGENT_H
#define AGENT_H

#include <memory>
#include <string>
#include <vector>

#include "Strategy.h"

class Agent {
public:
    Agent(const std::string& name, const std::shared_ptr<Strategy>& strategy, int score, const std::vector<char>& memory);

    const std::string& getName() const ;

    int getScore() const;

    void updateScore(int addPoint) ;

    const std::vector<char>& getMemory() const  ;

    void updateMemory(char s) ;

    char playTurn() const ;

private:
    std::string name;
    std::shared_ptr<Strategy> strategy;
    int score;
    std::vector<char> memory;
};


#endif
