#ifndef STRATEGY_H
#define STRATEGY_H

class Agent;

class Strategy {
public:
    virtual ~Strategy() = default;

    virtual char applyStrategy(Agent& player) const = 0;
};

#endif
