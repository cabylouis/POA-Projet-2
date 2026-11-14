#include "Tester.h"
#include "../Agent.h"

char Tester::applyStrategy(Agent& player) const {
    if (const auto foesMemory = player.getFoesMemory(); foesMemory.empty() || foesMemory.back() == 'D') {
        return 'D';
    }

    const auto ownMemory = player.getOwnMemory();
    if (ownMemory.size() < 2) {
        return 'C';
    }

    if ((ownMemory[ownMemory.size() - 2] == 'D' && ownMemory.back() == 'C') || ownMemory.back() == 'D') {
        return 'C';
    }
    return 'D';
}