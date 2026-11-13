#ifndef AGENT_H
#define AGENT_H

import "Strategy.h";

class Agent {
public:
    Agent(const char name, const Strategy strategy);

private:
    char name;
    Strategy strategy;
};


#endif
