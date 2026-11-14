#include "Joss.h"
#include "../Agent.h"

char Joss::applyStrategy(Agent& player) const {
    const auto& memory = player.getFoesMemory();
    const char res = memory.empty() ? 'C' : memory.back();

    if (!memory.empty() && memory.size() % 10 == 0) {
        return (res == 'C') ? 'D' : 'C';
    }

    return res;
}