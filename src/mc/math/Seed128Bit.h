#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Seed128Bit {
public:
    // prevent constructor by default
    Seed128Bit& operator=(Seed128Bit const &) = delete;
    Seed128Bit(Seed128Bit const &) = delete;
    Seed128Bit() = delete;

};

