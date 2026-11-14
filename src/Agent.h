#ifndef AGENT_H
#define AGENT_H

#include <memory>
#include <string>
#include <vector>

#include "strategy/Strategy.h"

class Agent {
public:
    Agent(const std::string& name, const std::shared_ptr<Strategy>& strategy);

    const std::string& getName() const ;

    int getScore() const;

    void updateScore(int addPoint) ;

    const std::vector<char>& getOwnMemory() const  ;

    void updateOwnMemory(char s) ;

    const std::vector<char>& getFoesMemory() const  ;

    void updateFoesMemory(char s) ;

    char playTurn() ;

private:
    std::string name;
    std::shared_ptr<Strategy> strategy;
    int score = 0;
    std::vector<char> ownMemory;
    std::vector<char> foesMemory;
};


#endif
