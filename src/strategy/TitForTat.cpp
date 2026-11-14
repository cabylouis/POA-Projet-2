#include "TitForTat.h"
#include "../Agent.h"

char TitForTat::applyStrategy(Agent& player) const {
    const auto& memory = player.getFoesMemory();
    if (memory.empty()) {
        return 'C';
    }
    return memory.back();
}