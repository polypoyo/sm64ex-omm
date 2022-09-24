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
#include "levels/bitdw/header.h"

const LevelScript level_bitdw_entry[] = {
    INIT_LEVEL(),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(local_area_bitdw_1_),
    JUMP_LINK(local_area_bitdw_2_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,135,-6558,0,6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

const LevelScript local_area_bitdw_1_[] = {
    AREA(1,Geo_bitdw_1_0x19001700),
    TERRAIN(col_bitdw_1_0xe016468),
    SET_BACKGROUND_MUSIC(0,17),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_bitdw_1_),
    JUMP_LINK(local_warps_bitdw_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_bitdw_1_[] = {
    OBJECT_WITH_ACTS(0,3622,-591,-5316,0,-45,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(122,3934,1537,-5645,0,-154,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,3700,1595,3113,0,-153,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,-712,2066,6456,0,88,0,0xb0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-2889,-482,3882,0,-151,0,0x3000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(215,-5604,-313,-1583,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3878,-781,850,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2439,-417,3212,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4692,-885,-6307,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,1040,2135,434,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2802,0,1882,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2765,0,-1399,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3110,-885,2348,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(188,-2958,-963,4643,0,45,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(201,170,-1007,-3170,0,0,0,0x0, bhvCannonClosed,31),
    OBJECT_WITH_ACTS(195,-5588,784,-1303,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
    OBJECT_WITH_ACTS(212,3665,1302,582,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(207,2918,1829,1800,0,90,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,2798,2188,2473,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,2433,2552,2486,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,2082,2917,2487,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,1793,3270,2484,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,1799,3542,2151,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,1797,3802,1763,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(22,2407,3958,1798,0,0,0,0xa0000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(0,3174,2344,901,0,0,0,0xb0000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(124,-5676,-963,1801,0,0,0,0x670000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(84,1501,-833,-1953,0,270,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(84,-2876,-781,1950,0,180,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(0,-5616,0,614,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3285,-729,1073,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-5568,-885,1,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,1450,2448,1838,0,0,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(188,1866,-963,-5171,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,2912,-963,-4181,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-662,-963,-3806,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-1521,-963,-3506,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-537,-963,-624,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-1824,-963,87,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-1020,-963,4244,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-6815,-963,-69,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,-5482,-208,1012,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,2098,1829,849,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,2706,1829,2818,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(188,3313,-963,1765,0,0,0,0x0, bhvBobomb,31),
    OBJECT_WITH_ACTS(124,3388,-962,-4640,0,179,0,0x680000, bhvMessagePanel,31),
    RETURN()
};

const LevelScript local_warps_bitdw_1_[] = {
    WARP_NODE(10,30,1,10,0),
    WARP_NODE(11,16,1,2,0),
    WARP_NODE(12,9,1,11,0),
    WARP_NODE(13,9,1,14,0),
    WARP_NODE(14,9,1,13,0),
    WARP_NODE(240,26,1,48,0),
    WARP_NODE(241,26,1,49,0),
    WARP_NODE(0,9,1,10,0),
    WARP_NODE(1,9,1,10,0),
    WARP_NODE(2,9,1,10,0),
    WARP_NODE(3,9,1,10,0),
    WARP_NODE(4,9,1,10,0),
    WARP_NODE(5,9,1,10,0),
    WARP_NODE(6,9,1,10,0),
    RETURN()
};

const LevelScript local_area_bitdw_2_[] = {
    AREA(2,Geo_bitdw_2_0x19001700),
    TERRAIN(col_bitdw_2_0xe01f528),
    SET_BACKGROUND_MUSIC(0,0x2D),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_bitdw_2_),
    JUMP_LINK(local_warps_bitdw_2_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_bitdw_2_[] = {
    OBJECT_WITH_ACTS(0,-3906,-851,-5156,0,45,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(124,-3345,-851,-4119,0,-154,0,0x30000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(122,-4702,1179,-4657,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,7960,1909,-7426,0,0,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,-3588,1653,1157,0,0,0,0x20b0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,5469,1166,-677,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(215,-324,-980,-2776,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,1927,2500,6823,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4913,-937,-6327,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4942,-1094,-6350,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3638,1354,3493,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-1825,1042,578,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3646,1406,-677,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-6354,677,-2135,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(100,3666,-851,2084,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,2917,-851,104,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-417,-851,-1146,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-1538,-851,-4008,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,1057,-851,-2378,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,-104,-851,1354,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,1146,-851,1823,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(212,-1841,1927,4895,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(137,1268,1828,6791,0,0,0,0x40000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(84,-1602,-695,-1646,0,0,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(84,2813,-677,2187,0,-90,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(84,-1563,-677,-1458,0,180,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(84,2604,-677,2238,0,90,0,0x0, bhvBulletBill,31),
    OBJECT_WITH_ACTS(88,-1772,1861,6146,0,90,0,0x0, bhvThwomp,31),
    OBJECT_WITH_ACTS(88,-1874,2132,3595,0,0,0,0x0, bhvThwomp,31),
    OBJECT_WITH_ACTS(22,-2552,4078,2188,0,0,0,0x10000, bhvWarpPipe,31),
    OBJECT_WITH_ACTS(0,-1458,-799,6198,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,5469,-851,2344,0,90,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(180,-1043,1903,6198,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-2897,3786,1508,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-4414,1310,-5808,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(0,-1859,1975,3601,0,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,5460,-232,1975,0,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,5421,581,-179,0,0,0,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(223,5371,-79,1637,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,5460,-96,1859,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(223,5460,749,-349,0,0,0,0x0, bhvChuckya,31),
    OBJECT_WITH_ACTS(0,-96,2036,6667,0,0,0,0x20000, bhvDeathWarp,31),
    OBJECT_WITH_ACTS(120,313,-730,6250,0,0,0,0x0, bhvRecoveryHeart,31),
    RETURN()
};

const LevelScript local_warps_bitdw_2_[] = {
    WARP_NODE(10,9,2,10,0),
    WARP_NODE(11,9,2,12,0),
    WARP_NODE(12,9,2,11,0),
    WARP_NODE(13,9,2,14,0),
    WARP_NODE(14,9,2,13,0),
    WARP_NODE(240,26,2,34,0),
    WARP_NODE(241,26,2,44,0),
    WARP_NODE(0,9,2,10,0),
    WARP_NODE(1,30,2,10,0),
    WARP_NODE(2,9,2,10,0),
    WARP_NODE(3,9,2,10,0),
    WARP_NODE(4,9,2,10,0),
    WARP_NODE(5,9,2,10,0),
    WARP_NODE(6,9,2,10,0),
    RETURN()
};
