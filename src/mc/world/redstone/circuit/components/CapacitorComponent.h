#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {
public:
    // prevent constructor by default
    CapacitorComponent& operator=(CapacitorComponent const &) = delete;
    CapacitorComponent(CapacitorComponent const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@CapacitorComponent@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // vIndex: 25, symbol: ?getPoweroutDirection@CapacitorComponent@@UEBAEXZ
    virtual uint8_t getPoweroutDirection() const;

    // symbol: ??0CapacitorComponent@@QEAA@XZ
    MCAPI CapacitorComponent();

    // NOLINTEND

};

