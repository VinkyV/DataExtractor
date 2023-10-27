#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/deps/core/LevelStorageState.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/ForceBlockNetworkIdsAreHashes.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Editor { class IEditorManager; }
namespace Scripting { class ScriptEngine; }
namespace mce { class UUID; }
// clang-format on

class ServerInstance {
public:
    // prevent constructor by default
    ServerInstance& operator=(ServerInstance const &) = delete;
    ServerInstance(ServerInstance const &) = delete;
    ServerInstance() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onAppResumed@ServerInstance@@UEAAXXZ
    MCVAPI void onAppResumed();

    // symbol: ?onAppSuspended@ServerInstance@@UEAAXXZ
    MCVAPI void onAppSuspended();

    // symbol: ?onCriticalDiskError@ServerInstance@@UEAAX_NAEBW4LevelStorageState@Core@@@Z
    MCVAPI void onCriticalDiskError(bool, ::Core::LevelStorageState const &);

    // symbol: ?onGameModeChanged@ServerInstance@@UEAAXXZ
    MCVAPI void onGameModeChanged();

    // symbol: ?onGameSessionReset@ServerInstance@@UEAAXXZ
    MCVAPI void onGameSessionReset();

    // symbol: ?onInternetUpdate@ServerInstance@@UEAAXXZ
    MCVAPI void onInternetUpdate();

    // symbol: ?onLevelCorrupt@ServerInstance@@UEAAXXZ
    MCVAPI void onLevelCorrupt();

    // symbol: ?onLevelExit@ServerInstance@@UEAAXXZ
    MCVAPI void onLevelExit();

    // symbol: ?onLowDiskSpace@ServerInstance@@UEAAX_N@Z
    MCVAPI void onLowDiskSpace(bool);

    // symbol: ?onLowMemory@ServerInstance@@UEAAXXZ
    MCVAPI void onLowMemory();

    // symbol: ?onOutOfDiskSpace@ServerInstance@@UEAAX_N@Z
    MCVAPI void onOutOfDiskSpace(bool);

    // symbol: ?onRequestResourceReload@ServerInstance@@UEAAXXZ
    MCVAPI void onRequestResourceReload();

    // symbol: ?onTick@ServerInstance@@UEAAXHH@Z
    MCVAPI void onTick(int, int);

    // symbol: ?updateScreens@ServerInstance@@UEAAXXZ
    MCVAPI void updateScreens();

    // symbol: ??1ServerInstance@@UEAA@XZ
    MCVAPI ~ServerInstance();

    // symbol: ??0ServerInstance@@QEAA@AEAVIMinecraftApp@@AEBV?$not_null@V?$NonOwnerPointer@VServerInstanceEventCoordinator@@@Bedrock@@@gsl@@@Z
    MCAPI ServerInstance(class IMinecraftApp &, Bedrock::NotNullNonOwnerPtr<class ServerInstanceEventCoordinator> const &);

    // symbol: ?disconnectAllClientsWithMessage@ServerInstance@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void disconnectAllClientsWithMessage(std::string);

    // symbol: ?enableItemStackNetManager@ServerInstance@@QEBA_NXZ
    MCAPI bool enableItemStackNetManager() const;

    // symbol: ?getCDNConfig@ServerInstance@@QEBA?AV?$NonOwnerPointer@VCDNConfig@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class CDNConfig> getCDNConfig() const;

    // symbol: ?getEditorManager@ServerInstance@@QEBA?AV?$NonOwnerPointer@VIEditorManager@Editor@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;

    // symbol: ?getScriptManager@ServerInstance@@QEAAPEAVServerScriptManager@@XZ
    MCAPI class ServerScriptManager * getScriptManager();

    // symbol: ?getScriptingEngineV2@ServerInstance@@QEAAPEAVScriptEngine@Scripting@@XZ
    MCAPI class Scripting::ScriptEngine * getScriptingEngineV2();

    // symbol: ?initializeServer@ServerInstance@@QEAA_NAEAVIMinecraftApp@@AEAVAllowList@@PEAVPermissionsFile@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@55VLevelSettings@@H_NUConnectionDefinition@@7AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@9@5AEBVUUID@mce@@AEAVIMinecraftEventing@@AEBV?$not_null@V?$NonOwnerPointer@VIResourcePackRepository@@@Bedrock@@@6@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@6@AEAVResourcePackManager@@V?$function@$$A6A?AV?$OwnerPtrT@U?$SharePtrRefTraits@VLevelStorage@@@@@@AEAVScheduler@@@Z@9@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@9@PEAVLevelData@@55V?$unique_ptr@VEducationOptions@@U?$default_delete@VEducationOptions@@@std@@@9@PEAVResourcePackManager@@V?$function@$$A6AXXZ@9@V?$function@$$A6AXXZ@9@PEAVServerMetrics@@PEAVDebugEndPoint@@7V?$shared_ptr@VFileStorageArea@Core@@@9@AEBUNetworkSettingOptions@@777V?$optional@UPlayerMovementSettings@@@9@V?$optional@UScriptSettings@@@9@AEBVExperiments@@7MV?$optional@_N@9@W4ForceBlockNetworkIdsAreHashes@@AEBUNetworkPermissions@@V?$not_null@V?$NonOwnerPointer@VNetworkSessionOwner@@@Bedrock@@@6@V?$NonOwnerPointer@VCDNConfig@@@Bedrock@@@Z
    MCAPI bool initializeServer(class IMinecraftApp &, class AllowList &, class PermissionsFile *, Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const &, std::chrono::seconds, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const &, std::string, class mce::UUID const &, class IMinecraftEventing &, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const &, Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const &, class ResourcePackManager &, std::function<class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>> (class Scheduler &)>, std::string const &, class LevelData *, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager *, std::function<void (void)>, std::function<void (void)>, class ServerMetrics *, class DebugEndPoint *, bool, std::shared_ptr<class Core::FileStorageArea>, struct NetworkSettingOptions const &, bool, bool, bool, std::optional<struct PlayerMovementSettings>, std::optional<struct ScriptSettings>, class Experiments const &, bool, float, std::optional<bool>, ::ForceBlockNetworkIdsAreHashes, struct NetworkPermissions const &, Bedrock::NotNullNonOwnerPtr<class NetworkSessionOwner>, class Bedrock::NonOwnerPointer<class CDNConfig>);

    // symbol: ?isRealmsStoriesEnabled@ServerInstance@@QEBA_NXZ
    MCAPI bool isRealmsStoriesEnabled() const;

    // symbol: ?leaveGameSync@ServerInstance@@QEAAXXZ
    MCAPI void leaveGameSync();

    // symbol: ?queueForServerThread@ServerInstance@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void queueForServerThread(std::function<void (void)>);

    // symbol: ?setLevelCorruptionCallback@ServerInstance@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void setLevelCorruptionCallback(std::function<void (void)>);

    // symbol: ?setWakeupFrequency@ServerInstance@@QEAAXH@Z
    MCAPI void setWakeupFrequency(int);

    // symbol: ?shutDownWithMessage@ServerInstance@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void shutDownWithMessage(std::string);

    // symbol: ?startServerThread@ServerInstance@@QEAAXXZ
    MCAPI void startServerThread();

    // symbol: ?SERVER_MAX_DELAY_BEFORE_SLOWDOWN@ServerInstance@@2V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@B
    MCAPI static std::chrono::nanoseconds const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_resetServerScriptManager@ServerInstance@@AEAAXXZ
    MCAPI void _resetServerScriptManager();

    // symbol: ?_threadSafeExecute@ServerInstance@@AEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void _threadSafeExecute(std::function<void (void)>);

    // symbol: ?_update@ServerInstance@@AEAAXXZ
    MCAPI void _update();

    // symbol: ?_useClientSideChunkGeneration@ServerInstance@@AEBA_NPEAVLevelData@@@Z
    MCAPI bool _useClientSideChunkGeneration(class LevelData *) const;

    // NOLINTEND

};

