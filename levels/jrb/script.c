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
#include "levels/jrb/header.h"

static const LevelScript level_jrb_POSTLOAD[] = {
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(local_area_jrb_1_),
    JUMP_LINK(local_area_jrb_2_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,135,-6558,0,6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

//AREA 2 LOADS
static const LevelScript level_jrb_area2load[] = {
    ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),
    JUMP(level_jrb_POSTLOAD)
};

const LevelScript level_jrb_entry[] = {
    INIT_LEVEL(),
    JUMP_AREA(0,2,level_jrb_area2load),
    //AREA 1 LOADS
    ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    JUMP(level_jrb_POSTLOAD)
};

const LevelScript local_area_jrb_1_[] = {
    AREA(1,Geo_jrb_1_0x19001700),
    TERRAIN(col_jrb_1_0xe022c08),
    SET_BACKGROUND_MUSIC(0,5),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_jrb_1_),
    JUMP_LINK(local_warps_jrb_1_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_jrb_1_[] = {
    OBJECT_WITH_ACTS(0,-4206,3888,-5082,0,45,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(122,3941,-6587,1983,0,-154,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(122,3237,-2832,5400,0,0,0,0x1000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,3321,3836,-3608,0,107,0,0xb0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-1635,3008,-4271,0,-151,0,0x3000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(137,757,4271,4521,0,0,0,0xd0000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(122,-3633,4531,361,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(140,5089,3104,-2298,0,0,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,4902,3281,-3162,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,4401,3385,-3672,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,4065,3437,-3346,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(0,371,-990,-1155,0,0,0,0x0, bhvLargeFishGroup,31),
    OBJECT_WITH_ACTS(212,-2402,2642,-2458,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(180,-5265,2699,5684,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(192,-5838,2761,5120,0,0,0,0x0, bhvGoomba,31),
    OBJECT_WITH_ACTS(137,-6152,3542,6281,0,0,0,0x10000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(207,-3852,1796,3886,0,118,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,-2621,2917,4949,0,35,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-2224,3125,4791,0,11,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-1755,3229,4721,0,9,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,-1406,3334,4735,0,-29,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(137,-298,4010,5360,0,0,0,0x60000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(0,-3488,2969,-6809,0,0,0,0x0, bhvGoombaTripletSpawner,31),
    OBJECT_WITH_ACTS(0,-162,2709,604,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(220,-2830,3437,-3712,0,0,0,0x0, bhvFlyGuy,31),
    OBJECT_WITH_ACTS(130,-1859,2810,-6933,0,0,0,0x0, bhvBreakableBoxSmall,31),
    OBJECT_WITH_ACTS(116,-3288,4271,-1318,0,-3,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(116,-3912,4323,-1862,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(129,-6078,2699,4474,0,0,0,0x0, bhvJumpingBox,31),
    OBJECT_WITH_ACTS(116,-3501,4375,-431,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(116,-5332,3073,-1406,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(116,-4861,2917,-2787,0,0,0,0x0, bhvOneCoin,31),
    OBJECT_WITH_ACTS(137,-5799,3489,-4897,0,0,0,0x60000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(215,-3725,4063,-1971,0,29,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-4693,3698,-2002,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3501,1458,3667,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,4773,2761,-1766,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,0,-4689,0,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,139,-7532,-776,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-3490,-5418,559,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,3604,-3281,298,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(0,-3577,-4010,549,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,1122,-5729,-291,0,97,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,2662,-2604,2107,0,117,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3583,-3281,100,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,158,-4063,-887,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-697,-4063,1202,90,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3109,2708,1243,0,-23,0,0x0, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,647,-6094,29,0,0,0,0x0, bhvLargeFishGroup,31),
    OBJECT_WITH_ACTS(0,3480,-2604,1241,0,0,0,0x0, bhvLargeFishGroup,31),
    OBJECT_WITH_ACTS(0,-274,-2240,920,0,0,0,0x0, bhvLargeFishGroup,31),
    OBJECT_WITH_ACTS(105,-1432,2813,-3370,0,0,0,0x0, bhvSkeeter,31),
    OBJECT_WITH_ACTS(105,1402,2865,-8,0,0,0,0x0, bhvSkeeter,31),
    OBJECT_WITH_ACTS(105,-1980,2865,2707,0,0,0,0x0, bhvSkeeter,31),
    OBJECT_WITH_ACTS(88,-2471,2719,-2468,0,0,0,0x0, bhvClamShell,31),
    OBJECT_WITH_ACTS(88,0,-4948,0,0,0,0,0x0, bhvClamShell,31),
    OBJECT_WITH_ACTS(88,3583,-2709,178,0,0,0,0x0, bhvClamShell,31),
    OBJECT_WITH_ACTS(212,-3149,4055,-467,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(88,49,-7500,-777,0,1,0,0x0, bhvClamShell,31),
    OBJECT_WITH_ACTS(190,-7,-5114,82,0,0,0,0x0, bhvKoopaShellUnderwater,31),
    OBJECT_WITH_ACTS(124,-3568,2810,-4458,0,-126,0,0x2a0000, bhvMessagePanel,31),
    OBJECT_WITH_ACTS(124,-4455,2810,-2893,0,157,0,0x2b0000, bhvMessagePanel,31),
    RETURN()
};

const LevelScript local_warps_jrb_1_[] = {
    WARP_NODE(10,9,1,10,0),
    WARP_NODE(11,9,1,12,0),
    WARP_NODE(12,9,1,11,0),
    WARP_NODE(13,9,1,14,0),
    WARP_NODE(14,9,1,13,0),
    WARP_NODE(240,26,1,44,0),
    WARP_NODE(241,26,1,45,0),
    WARP_NODE(0,9,1,10,0),
    WARP_NODE(1,9,1,10,0),
    WARP_NODE(2,9,1,10,0),
    WARP_NODE(3,9,1,10,0),
    WARP_NODE(4,9,1,10,0),
    WARP_NODE(5,9,1,10,0),
    WARP_NODE(6,9,1,10,0),
    RETURN()
};

const LevelScript local_area_jrb_2_[] = {
    AREA(2,Geo_jrb_2_0x19001700),
    TERRAIN(col_jrb_2_0xe0299d8),
    SET_BACKGROUND_MUSIC(0,5),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_jrb_2_),
    JUMP_LINK(local_warps_jrb_2_),
    END_AREA(),
    RETURN()
};

const LevelScript local_objects_jrb_2_[] = {
    OBJECT_WITH_ACTS(0,3646,3194,-6250,0,-45,0,0xa0000, bhvSpinAirborneWarp,31),
    OBJECT_WITH_ACTS(122,-673,4718,4962,0,0,0,0x0, bhvStar,31),
    OBJECT_WITH_ACTS(0,-3424,4458,-3492,0,0,0,0x1000000, bhvHiddenStar,31),
    OBJECT_WITH_ACTS(217,-2217,3212,-3883,0,0,0,0x0, bhvPushableMetalBox,31),
    OBJECT_WITH_ACTS(0,-4843,3081,-1767,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-5209,3497,-2240,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-5000,3566,-3073,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-4479,3651,-3646,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(0,-4115,3758,-3282,0,0,0,0x0, bhvHiddenStarTrigger,31),
    OBJECT_WITH_ACTS(55,-3741,-3177,5674,0,-137,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(55,-4479,-3438,4323,0,-50,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(55,-3772,-3333,409,0,89,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(55,-3489,-3438,1980,0,19,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(122,-2628,-2656,5460,0,0,0,0x2000000, bhvStar,31),
    OBJECT_WITH_ACTS(137,3927,-7240,825,0,0,0,0x10000, bhvExclamationBox,31),
    OBJECT_WITH_ACTS(122,-4191,-6532,3503,0,0,0,0x3000000, bhvStar,31),
    OBJECT_WITH_ACTS(122,4948,-1198,729,0,0,0,0x5000000, bhvStar,31),
    OBJECT_WITH_ACTS(0,-189,1979,640,0,35,0,0x4000000, bhvHiddenRedCoinStar,31),
    OBJECT_WITH_ACTS(215,-2525,2396,798,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2414,1667,-2249,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-2326,3055,-2111,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,798,938,2006,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-93,-4792,364,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,-1205,-3021,-1027,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,2415,-365,2721,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(215,464,365,1539,0,0,0,0x0, bhvRedCoin,31),
    OBJECT_WITH_ACTS(207,3958,2157,4271,0,60,0,0x0, bhvFloorSwitchHiddenObjects,31),
    OBJECT_WITH_ACTS(129,2055,3125,5189,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,1073,3021,5183,0,0,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(129,202,3385,4764,0,-29,0,0x0, bhvHiddenObject,31),
    OBJECT_WITH_ACTS(58,-208,1306,625,0,0,0,0x0, bhvLllRotatingBlockWithFireBars,31),
    OBJECT_WITH_ACTS(100,6250,3589,6510,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,4271,4118,-2552,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(100,3073,4581,990,0,0,0,0x0, bhvPiranhaPlant,31),
    OBJECT_WITH_ACTS(89,3281,4160,1823,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(89,3750,4434,-1979,0,0,0,0x0, bhvHeaveHo,31),
    OBJECT_WITH_ACTS(107,4375,3271,-5104,0,0,0,0x0, bhvWoodenPost,31),
    OBJECT_WITH_ACTS(0,4063,3194,-3906,0,0,0,0x0, bhvGoombaTripletSpawner,31),
    OBJECT_WITH_ACTS(130,-2813,3678,990,0,-58,0,0x0, bhvBreakableBoxSmall,31),
    OBJECT_WITH_ACTS(129,-3177,3889,-3541,0,0,0,0x0, bhvJumpingBox,31),
    OBJECT_WITH_ACTS(212,3490,4948,521,0,0,0,0x0, bhv1Up,31),
    OBJECT_WITH_ACTS(140,-278,21,3150,0,41,0,0x0, bhvBlueCoinSwitch,31),
    OBJECT_WITH_ACTS(118,313,-625,1927,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,95,-1823,647,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,-469,-2083,-104,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,-781,-2500,-938,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(118,-719,-2813,-1428,0,0,0,0x0, bhvHiddenBlueCoin,31),
    OBJECT_WITH_ACTS(180,417,-1667,1510,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-1475,2006,-1087,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(180,-2180,-3177,3163,0,0,0,0x0, bhvFireSpitter,31),
    OBJECT_WITH_ACTS(0,-4200,-3177,420,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-3370,-3229,494,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-3745,-3229,20,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-365,2083,-104,325,-5,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-925,990,-1305,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,163,1458,1109,270,-52,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4088,-7656,-89,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4337,-7656,1474,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-1526,-6979,-366,0,0,0,0x130000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,4427,2723,4583,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,3051,2135,143,0,0,0,0x110000, bhvCoinFormation,31),
    OBJECT_WITH_ACTS(0,-5365,3698,-3021,0,60,270,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-5000,3698,-3906,0,58,270,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(0,-3521,3802,-3293,341,-88,90,0x0, bhvFlamethrower,31),
    OBJECT_WITH_ACTS(55,-3359,-3438,3646,0,0,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(55,-4458,-3229,5237,0,0,0,0x0, bhvLllSinkingRockBlock,31),
    OBJECT_WITH_ACTS(120,-3333,-3179,3646,0,0,0,0x0, bhvRecoveryHeart,31),
    OBJECT_WITH_ACTS(120,-990,-4375,-833,0,0,0,0x0, bhvRecoveryHeart,31),
    OBJECT_WITH_ACTS(124,1354,2996,-3073,0,118,0,0x10000, bhvMessagePanel,31),
    RETURN()
};

const LevelScript local_warps_jrb_2_[] = {
    WARP_NODE(10,9,2,10,0),
    WARP_NODE(11,9,2,12,0),
    WARP_NODE(12,9,2,11,0),
    WARP_NODE(13,9,2,14,0),
    WARP_NODE(14,9,2,13,0),
    WARP_NODE(240,26,2,33,0),
    WARP_NODE(241,26,2,43,0),
    WARP_NODE(0,9,2,10,0),
    WARP_NODE(1,9,2,10,0),
    WARP_NODE(2,9,2,10,0),
    WARP_NODE(3,9,2,10,0),
    WARP_NODE(4,9,2,10,0),
    WARP_NODE(5,9,2,10,0),
    WARP_NODE(6,9,2,10,0),
    RETURN()
};
