#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RemoveActorPacket : public ::Packet {
public:
    // prevent constructor by default
    RemoveActorPacket& operator=(RemoveActorPacket const &) = delete;
    RemoveActorPacket(RemoveActorPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RemoveActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@RemoveActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RemoveActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@RemoveActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1RemoveActorPacket@@UEAA@XZ
    MCVAPI ~RemoveActorPacket();

    // symbol: ??0RemoveActorPacket@@QEAA@XZ
    MCAPI RemoveActorPacket();

    // symbol: ??0RemoveActorPacket@@QEAA@UActorUniqueID@@@Z
    MCAPI RemoveActorPacket(struct ActorUniqueID);

    // NOLINTEND

};

