#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "levels/lll/header.h"
const LevelScript level_lll_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
//idk why this is necessary
LOAD_MODEL_FROM_GEO(18, snow_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_lll_1_),
JUMP_LINK(local_area_lll_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x19001700),
TERRAIN(col_lll_1_0xe019480),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,1105,-2310,-2357,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-4499,-1692,137,0,-154,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(103,-313,5,-4525,0,-153,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(122,523,3524,-1147,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,2582,-847,5154,0,-151,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-5710,-1927,-816,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3600,-1875,1840,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3456,-2188,3948,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6169,-260,2339,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4817,-52,-358,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1459,1198,2149,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,221,104,-3160,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2912,-1927,-3085,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,230,-3073,-4711,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(124,-2536,-1985,-600,0,124,0,0x940000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,1129,12292,566,0,-47,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,1524,4375,-935,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-3804,-1875,-935,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1103,11823,276,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(140,1683,10585,136,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1346,10625,-160,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1004,10625,-317,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,679,10625,-371,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,371,10625,-322,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,27,10625,-162,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-214,10677,-19,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(103,4300,-352,848,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(103,-573,-2779,-3284,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(223,3628,-352,-733,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,-1413,-2779,-5260,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(0,1369,-2779,-3012,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2542,-1030,4396,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(217,-454,-469,-4274,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(220,-490,3698,-766,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(217,-409,7408,8,0,-27,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(25,3955,-1030,4330,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,707,-1030,5794,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,1313,-1030,5962,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,1316,-1030,6647,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,4310,-1030,4907,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,3141,-1030,6516,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,4303,-1030,5857,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,2586,-1030,6340,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,1220,-1030,2707,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,2585,-1030,3335,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,2146,-2779,-2766,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,2032,-2779,-3486,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,1444,-2779,-3867,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,5586,-352,644,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,3300,-352,-470,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-1080,-2779,-4153,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(137,-13,6667,1885,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-707,7500,468,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-758,5729,455,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,37,4948,-796,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,1861,-1030,6530,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,3579,-1030,6099,0,-48,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(84,-1938,-2779,-5000,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-2015,-1986,1415,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,1438,-1030,3669,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,1524,-60,-1440,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,442,142,-1674,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-586,337,-1164,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(120,-616,3177,711,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(217,2676,-770,1677,0,-24,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-1916,-2240,-1998,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1669,-1406,3423,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-833,-1094,4533,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,462,1979,2189,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-208,8229,469,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-208,9271,469,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-208,10156,469,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1615,-990,3542,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,1330,10677,1371,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1490,10677,1148,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,50,0),
WARP_NODE(241,26,1,51,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_lll_2_[] = {
AREA(2,Geo_lll_2_0x19001700),
TERRAIN(col_lll_2_0xe02bf10),
SET_BACKGROUND_MUSIC(0,0x28),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_lll_2_),
JUMP_LINK(local_warps_lll_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_2_[] = {
OBJECT_WITH_ACTS(0,-1876,-2545,-2750,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(103,427,729,-4499,0,0,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(137,428,-748,-4429,0,0,0,0x40d0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-4685,-122,1597,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(207,-2968,-484,1305,0,-59,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,196,-3594,-4932,0,33,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3138,-1250,376,0,20,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6302,-1355,1302,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5042,-521,-385,0,34,-45,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5765,-1355,-2659,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4375,-2396,-625,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-3177,-997,365,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-6302,-1103,1303,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-5000,-290,-417,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,4375,-2196,-624,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-5782,-1103,-2611,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(122,-586,-3125,-4397,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1089,12135,510,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,1457,52,-365,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,3021,-1510,3698,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-909,-677,6665,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2031,-1146,3385,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-260,-208,-2813,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,785,2240,-369,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1458,-2858,-5885,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4010,-1875,1615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1198,-1667,4063,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(100,-3046,-1161,6230,0,180,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(124,-2917,-1161,5781,0,151,0,0x60000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(18,-1510,-2910,-3646,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,833,-2910,-3854,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-3906,-1161,4271,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-6615,-484,-2188,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(18,-3698,-484,-1094,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(223,-781,-1161,4948,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-6354,-484,52,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4375,-484,-1510,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,469,206,-1146,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,-417,1226,3437,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(130,-6302,-484,2344,0,52,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(212,-260,2053,-3177,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(84,1667,-1628,3385,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-1563,-191,-1615,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-1615,-191,-1406,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-1042,2923,1979,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(86,1875,-2484,-2083,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,4427,-2117,3333,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,0,6140,1667,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-1510,3952,-885,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(129,-1091,10455,-658,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(140,-2656,-484,1146,0,29,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-2292,-521,1719,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1354,-885,2396,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-52,-938,3750,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1250,-1146,3854,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,2760,-2031,2344,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,3854,-1979,3021,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2344,2240,677,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-286,-3594,-4559,0,31,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(180,-1493,4004,-1217,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,625,7090,521,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-52,4647,-833,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,885,5391,625,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,-4531,-484,1146,0,-47,0,0x70000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_lll_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,26,2,37,0),
WARP_NODE(241,26,2,47,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
