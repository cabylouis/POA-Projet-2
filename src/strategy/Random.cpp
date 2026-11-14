#include <stdlib.h>
#include "Random.h"

char Random::applyStrategy(Agent& player) const {
    if (rand() % 2 == 0) {
        return 'D';
    }
    return 'C';
}