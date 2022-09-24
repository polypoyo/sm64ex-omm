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
#include "levels/bits/header.h"

const LevelScript level_bits_entry[] = {
    INIT_LEVEL(),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(local_area_bits_2_),
    JUMP_LINK(local_area_bits_1_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,135,-6558,0,6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

const LevelScript local_area_bits_1_[] = {
    AREA(1,Geo_bits_1_0x19001700),
    TERRAIN(col_bits_1_0xe069e28),
    SET_BACKGROUND_MUSIC(0,4),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_bits_1_),
    JUMP_LINK(local_warps_bits_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_bits_1_[] = {
    OBJECT_WITH_ACTS(0,-104,-1660,-7552,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(137,1990,1073,-1178,0,0,0,0x30000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(195,752,3262,-2449,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
    OBJECT_WITH_ACTS(201,745,-1545,-1205,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(22,5626,-1212,5368,0,-151,0,0x0, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(122,52,1458,3125,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,-5990,2604,2500,0,0,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,-2865,0,-1667,0,0,0,0x2000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,6191,3594,-573,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,4368,-1302,1198,0,0,0,0x4000000, bhvStar,31),
    OBJECT_WITH_ACTS(215,-1923,-1408,1271,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3747,-1460,184,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(0,-1707,-1512,-1173,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(207,-5000,462,5052,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,-5833,313,3646,0,41,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-6510,313,3177,0,44,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-6979,313,2552,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-6563,313,1719,0,-34,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-5990,313,1198,0,-45,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(24,-2135,-1512,3438,0,0,0,0x0, bhvTree,31),
    OBJECT_WITH_ACTS(120,-3229,-1460,2760,0,0,0,0x0, bhvRecoveryHeart,31),
    OBJECT_WITH_ACTS(23,-2240,-50,4115,0,0,0,0x0, bhvTree,31),
    OBJECT_WITH_ACTS(25,-1458,-485,3802,0,0,0,0x0, bhvTree,31),
    OBJECT_WITH_ACTS(201,1510,2128,6547,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(201,573,5980,2240,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(137,4423,1719,5324,0,44,0,0x0, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(137,1094,2344,5000,0,0,0,0x0, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(137,625,6719,1510,0,0,0,0x0, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-1510,-1568,-3490,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(215,-5506,931,809,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-6979,885,2552,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-990,-417,4271,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-1771,-677,3542,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3526,1042,274,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2010,1198,-880,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3594,-2092,-2760,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3490,-1823,469,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3003,3073,691,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3803,2135,-3484,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,5625,2969,-3489,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,6407,2135,-2552,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,6198,1094,1146,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,5834,-365,938,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(212,-2328,-1510,-5639,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,4727,-156,-4950,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,-6198,4516,-833,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,623,8544,1096,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,4792,5148,-4427,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,-3906,5069,5885,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,4946,2607,4834,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,1979,-1934,104,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,5208,-2092,-2292,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(212,5885,-1270,5469,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(22,946,469,1318,0,0,0,0x10000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(124,-104,-1741,-7031,0,180,0,0x390000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,-1509,-1828,-3095,0,180,0,0x3a0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,1198,-1512,-781,0,-135,0,0x3b0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,1771,2148,4948,0,0,0,0x300000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,625,6407,850,0,180,0,0x420000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(89,5677,-1512,156,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,5573,67,1979,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(0,-5521,462,260,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,7396,1647,-2396,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4531,-1322,5833,0,64,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(180,-3333,-1512,-7292,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-2865,-1512,-8021,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-5885,-1512,-5677,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4479,-1512,-4792,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-3906,-1512,-4948,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7344,3306,-1094,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7344,3306,-156,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,7344,3306,781,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(223,3021,-1504,3594,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(0,4900,-1198,4795,0,0,0,0xb0000, bhvDeathWarp,31),
    RETURN()
};

const LevelScript local_warps_bits_1_[] = {
    WARP_NODE(10,9,1,10,0),
    WARP_NODE(11,9,1,12,0),
    WARP_NODE(12,9,1,11,0),
    WARP_NODE(13,9,1,14,0),
    WARP_NODE(14,9,1,13,0),
    WARP_NODE(240,6,1,2,0),
    WARP_NODE(241,6,1,14,0),
    WARP_NODE(0,34,1,10,0),
    WARP_NODE(1,16,1,10,0),
    WARP_NODE(2,9,1,10,0),
    WARP_NODE(3,9,1,10,0),
    WARP_NODE(4,9,1,10,0),
    WARP_NODE(5,9,1,10,0),
    WARP_NODE(6,9,1,10,0),
    RETURN()
};

const LevelScript local_area_bits_2_[] = {
    AREA(2,Geo_bits_2_0x19001700),
    TERRAIN(col_bits_2_0xe062de8),
    SET_BACKGROUND_MUSIC(0,0x2E),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_bits_2_),
    JUMP_LINK(local_warps_bits_2_),
    JUMP_LINK(local_objects_bits_3_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_bits_2_[] = {
    OBJECT_WITH_ACTS(0,-52,-2447,-6536,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(22,-699,7678,2104,0,0,0,0x0, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(0,4522,-156,6504,0,0,0,0x10000, bhvInstantActiveWarp,31),
    OBJECT_WITH_ACTS(0,-5045,-1962,1087,0,0,0,0x20000, bhvInstantActiveWarp,31),
    OBJECT_WITH_ACTS(0,-955,-1898,4342,0,0,0,0x30000, bhvInstantActiveWarp,31),
    OBJECT_WITH_ACTS(215,-3337,-1781,5344,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-792,-2285,2460,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-5137,-2591,7376,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3266,-4060,6707,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-5615,-4138,6395,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4748,1432,6467,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-835,820,6489,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4042,3728,5864,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3060,2901,7808,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-6642,4003,730,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-5478,3728,-1438,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,6060,3697,214,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4087,4829,-350,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2969,4891,1775,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(195,-1562,1338,5967,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
    OBJECT_WITH_ACTS(201,-1603,1330,7535,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(207,-667,5182,3218,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(122,-4459,-1622,2156,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,-4559,-2873,5157,0,0,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(0,3802,4675,6867,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(137,5905,1755,3465,0,0,0,0x20000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(207,4896,-347,6094,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,5781,-521,4635,45,-46,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,6458,-521,3958,45,-30,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,6719,-521,3177,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,6302,-521,2656,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,5833,-521,2656,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,5417,-521,2917,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,5420,-381,3054,45,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(0,-5129,-2132,6175,0,-63,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-5730,-2322,1099,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(89,-5809,-2322,811,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-5547,-1295,1936,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-5652,-742,3035,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-5888,-742,2826,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,-6620,284,3140,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(122,-846,-579,2249,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(223,5555,1390,3548,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,-7562,837,-1280,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,-7300,837,-1658,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(194,2210,-2181,-6427,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(194,3170,-2181,-6486,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(194,5497,-2181,-4421,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(194,3694,-2181,-3519,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(194,2879,-1396,-4973,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(194,5613,-2239,-6137,0,0,0,0x0, bhvCirclingAmp,31),
    OBJECT_WITH_ACTS(180,-1920,1367,7562,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-1280,1367,7562,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-5165,1745,5759,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4395,1716,6467,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-7330,873,2996,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-7680,873,3001,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-3980,-1919,5534,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-3333,-1861,4617,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-3865,-2298,3472,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4423,-2327,3195,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4666,-2298,2711,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(120,-4478,-2239,2166,0,0,0,0x0, bhvRecoveryHeart,31),
    OBJECT_WITH_ACTS(124,-32,-2551,-6144,0,180,0,0x3e0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,-1025,-2322,-2412,0,90,0,0x3f0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,-5723,-2006,6419,0,115,0,0x410000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,-682,5577,2413,0,0,0,0x420000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(129,-221,6273,2246,0,45,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-575,7012,2508,45,46,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-285,7515,1925,45,47,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(0,-5392,-4636,5879,0,45,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-5744,-4077,6099,0,33,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-669,6596,2109,0,70,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-671,7198,2098,0,-315,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-711,7391,2116,0,63,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-38,5526,2952,0,32,0,0xb0000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(217,-4691,-5052,6581,0,0,0,0x0, bhvPushableMetalBox,31),
    OBJECT_WITH_ACTS(217,-4465,-4688,4466,45,0,0,0x0, bhvPushableMetalBox,31),
    OBJECT_WITH_ACTS(180,-4798,-4682,6561,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4816,-4682,6460,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4673,-4682,6478,0,0,0,0x0, bhvFireSpitter,31),
    RETURN()
};

const LevelScript local_warps_bits_2_[] = {
    WARP_NODE(10,9,2,10,0),
    WARP_NODE(11,21,2,11,0),
    WARP_NODE(12,9,2,11,0),
    WARP_NODE(13,9,2,14,0),
    WARP_NODE(14,9,2,13,0),
    WARP_NODE(240,6,2,8,0),
    WARP_NODE(241,6,2,9,0),
    WARP_NODE(0,34,2,10,0),
    WARP_NODE(1,21,2,10,0),
    WARP_NODE(2,21,2,10,0),
    WARP_NODE(3,21,2,10,0),
    RETURN()
};

// Ztar Zanctuary part 2 (previously in Bowser's Quicksand Pit)
// Added 16 red coins, to match the original idea of 30 red coins in ZZ by Lugmillord
const LevelScript local_objects_bits_3_[] = {
    OBJECT_WITH_ACTS(22, -820, -2317, -1575, 0, 180, 0, 21 << 16, bhvWarpPipe, 31), WARP_NODE(21, 21, 2, 20, 0),
    OBJECT_WITH_ACTS(22, 15545, -3957, -4210, 0, 0, 0, 20 << 16, bhvWarpPipe, 31), WARP_NODE(20, 21, 2, 21, 0),
    OBJECT_WITH_ACTS(22, 21340, -1951, 4650, 0, -90, 0, 23 << 16, bhvWarpPipe, 31), WARP_NODE(23, 21, 2, 22, 0),
    OBJECT_WITH_ACTS(22, 4520, -342, 6500, 0, 90, 0, 22 << 16, bhvWarpPipe, 31), WARP_NODE(22, 21, 2, 23, 0),
    OBJECT_WITH_ACTS(22, 4765, -342, 745, 0, 90, 0, 25 << 16, bhvWarpPipe, 31), WARP_NODE(25, 21, 2, 24, 0),
    OBJECT_WITH_ACTS(22, 21750, -1951, -1170, 0, -90, 0, 24 << 16, bhvWarpPipe, 31), WARP_NODE(24, 21, 2, 25, 0),
    OBJECT_WITH_ACTS(22, 10830, -3957, -850, 0, 90, 0, 27 << 16, bhvWarpPipe, 31), WARP_NODE(27, 21, 2, 26, 0),
    OBJECT_WITH_ACTS(22, -5045, -2317, 1080, 0, -90, 0, 26 << 16, bhvWarpPipe, 31), WARP_NODE(26, 21, 2, 27, 0),
    OBJECT_WITH_ACTS(22, -5340, 1474, -2550, 0, -90, 0, 29 << 16, bhvWarpPipe, 31), WARP_NODE(29, 21, 2, 28, 0),
    OBJECT_WITH_ACTS(22, 10280, -104, -4538, 0, 90, 0, 28 << 16, bhvWarpPipe, 31), WARP_NODE(28, 21, 2, 29, 0),
    OBJECT_WITH_ACTS(22, 15545, -3957, 2000, 0, 0, 0, 31 << 16, bhvWarpPipe, 31), WARP_NODE(31, 21, 2, 30, 0),
    OBJECT_WITH_ACTS(22, -830, -2317, 4700, 0, 180, 0, 30 << 16, bhvWarpPipe, 31), WARP_NODE(30, 21, 2, 31, 0),
    OBJECT_WITH_ACTS(195,15548,886,-3470,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
    OBJECT_WITH_ACTS(201,15542,-3964,-2173,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(122,20585,-1408,5069,0,0,0,0x4000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,14192,-1354,-2176,0,0,0,0x30000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,18554,-1727,4140,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(180,18478,-3731,2583,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,17513,-2863,3098,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,18092,-3152,3645,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,18510,-2123,3194,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(0,13118,-4323,-1809,0,291,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,13288,-4427,-4155,0,90,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,14264,-4427,-4127,0,270,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,12241,-4479,-4103,0,180,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,11469,-4531,-2880,0,180,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(124,15155,-3948,-1733,0,148,0,0x400000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(212,14378,-4318,-726,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(194,19059,-1654,236,0,0,0,0x0, bhvHomingAmp,31),
    OBJECT_WITH_ACTS(194,18615,-1563,267,0,0,0,0x0, bhvHomingAmp,31),
    OBJECT_WITH_ACTS(194,18296,-1458,-1850,0,0,0,0x0, bhvHomingAmp,31),
    OBJECT_WITH_ACTS(180,14312,-52,-3671,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,13704,-52,-3671,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,13408,-52,-3703,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,14008,-52,-3671,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(0,13088,0,-3869,0,-270,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,14510,-52,-3846,0,-90,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,13432,677,-552,0,-180,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,13052,-4375,-2732,0,132,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,13120,-4479,-4970,0,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,11449,-4531,-3704,0,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(122,13771,-3281,-5545,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(215, 17538, -5000, 5200, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 19730, -5000, 5100, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 20150, -5000, 4650, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 3700, 100, 6930, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 18280, -2000, -1850, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 18320, -2000, 150, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 19930, -2000, -640, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 14525, -4400, -3650, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 12675, -4480, -3575, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 10950, -4560, -4675, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 12035, -4400, -2285, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, -6000, 400, 1525, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, -6565, 1000, 4375, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 13790, 100, -440, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 15545, -3950, -675, 0, 0, 0, 0, bhvRedCoin, 31),
    OBJECT_WITH_ACTS(215, 15545, -3950, 575, 0, 0, 0, 0, bhvRedCoin, 31),
    RETURN()
};
