#pragma once
#include "common.h"
#include "patch.h"
#include "mm2.h"

#include <vector>

#include "..\events\dispatcher.h"

// Individual handlers
#include "feature_handlers/aiPoliceOfficerFeatureHandler.h"
#include "feature_handlers/aiVehicleInstanceFeatureHandler.h"
#include "feature_handlers/aiVehiclePhysicsFeatureHandler.h"
#include "feature_handlers/asCullManagerHandler.h"
#include "feature_handlers/aud3DObjectHandler.h"
#include "feature_handlers/Aud3DObjectManagerHandler.h"
#include "feature_handlers/BridgeFerryHandler.h"
#include "feature_handlers/cityLevelHandler.h"
#include "feature_handlers/cityTimeWeatherLightingHandler.h"
#include "feature_handlers/datCallbackExtensionHandler.h"
#include "feature_handlers/dgBangerInstanceHandler.h"
#include "feature_handlers/dgPhysManagerHandler.h"
#include "feature_handlers/Dialog_NewPlayerHandler.h"
#include "feature_handlers/FadeHandler.h"
#include "feature_handlers/fxTexelDamageHandler.h"
#include "feature_handlers/gettexHandler.h"
#include "feature_handlers/gfxPipelineHandler.h"
#include "feature_handlers/gizFerryHandler.h"
#include "feature_handlers/gizTrainHandler.h"
#include "feature_handlers/gizParkedCarMgrHandler.h"
#include "feature_handlers/InitMapHandler.h"
#include "feature_handlers/ImGuiFeatureHandler.h"
#include "feature_handlers/ltLensFlareHandler.h"
#include "feature_handlers/lvlHandler.h"
#include "feature_handlers/lvlInstanceFeatureHandler.h"
#include "feature_handlers/memSafeHeapHandler.h"
#include "feature_handlers/mmArrowHandler.h"
#include "feature_handlers/mmCityListHandler.h"
#include "feature_handlers/mmDashViewHandler.h"
#include "feature_handlers/mmDirSndHandler.h"
#include "feature_handlers/mmExternalViewHandler.h"
#include "feature_handlers/mmGameHandler.h"
#include "feature_handlers/mmGameMusicDataHandler.h"
#include "feature_handlers/mmHudMapFeatureHandler.h"
#include "feature_handlers/mmIconsHandler.h"
#include "feature_handlers/mmInterfaceFeatureHandler.h"
#include "feature_handlers/mmPlayerHandler.h"
#include "feature_handlers/mmSingleRaceHandler.h"
#include "feature_handlers/mmSingleRoamHandler.h"
#include "feature_handlers/modStaticHandler.h"
//#include "feature_handlers/multiTireTrackHandler.h"
#include "feature_handlers/pedestrianInstanceHandler.h"
#include "feature_handlers/PUMainHandler.h"
#include "feature_handlers/sdlPage16Handler.h"
#include "feature_handlers/StreamHandler.h"
#include "feature_handlers/TextureVariantHandler.h"
#include "feature_handlers/vehBreakableMgrHandler.h"
#include "feature_handlers/vehCableCarInstanceHandler.h"
#include "feature_handlers/vehCarAudioContainerHandler.h"
#include "feature_handlers/vehCarHandler.h"
#include "feature_handlers/vehCarModelFeatureHandler.h"
#include "feature_handlers/vehCarSimHandler.h"
#include "feature_handlers/vehEngineFeatureHandler.h"
#include "feature_handlers/vehPoliceCarAudioHandler.h"
#include "feature_handlers/vehSirenHandler.h"
#include "feature_handlers/vehTrailerFeatureHandler.h"
#include "feature_handlers/vehTrailerInstanceFeatureHandler.h"
#include "feature_handlers/vehWheelHandler.h"
#include "feature_handlers/vglHandler.h"

