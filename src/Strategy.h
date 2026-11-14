#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    virtual ~Strategy() = default;

    virtual char applyStrategy() const = 0;
};

#endif
