#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockCraftingTableDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCraftingTableDescription& operator=(BlockCraftingTableDescription const &) = delete;
    BlockCraftingTableDescription(BlockCraftingTableDescription const &) = delete;
    BlockCraftingTableDescription() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getName@BlockCraftingTableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const & getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockCraftingTableDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext &) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockCraftingTableDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol: ?buildNetworkTag@BlockCraftingTableDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;

    // vIndex: 9, symbol: ?initializeFromNetwork@BlockCraftingTableDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);

    // symbol: ?bindType@BlockCraftingTableDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?NameID@BlockCraftingTableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

};

