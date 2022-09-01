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

#include "areas/1/custom.model.inc.h"
#include "levels/thi/header.h"
extern u8 _thi_segment_ESegmentRomStart[]; 
extern u8 _thi_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_thi_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _thi_segment_ESegmentRomStart, _thi_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group6_mio0SegmentRomStart,_group6_mio0SegmentRomEnd),
LOAD_RAW(12,_group6_geoSegmentRomStart,_group6_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05000840),
// LOAD_MODEL_FROM_DL(132,0x08025f08),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0),
// LOAD_MODEL_FROM_DL(161,0x0301cb00),
// LOAD_MODEL_FROM_DL(164,0x04032a18),
// LOAD_MODEL_FROM_DL(201,0x080048e0),
// LOAD_MODEL_FROM_DL(218,0x08024bb8),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_7),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_thi_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_thi_1_[] = {
AREA(1,Geo_thi_1_0x19001700),
TERRAIN(col_thi_1_0xe047a78),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(TERRAIN_STONE),
JUMP_LINK(local_objects_thi_1_),
JUMP_LINK(local_warps_thi_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_thi_1_[] = {
OBJECT(0,-785,-3884,6010,0,180,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(0,6780,-985,1840,0,270,0,0xb0000, bhvFadingWarp),
OBJECT(0,-5938,-406,659,0,180,0,0xc0000, bhvFadingWarp),
OBJECT(22,4003,-4363,-4060,0,270,0,0xd0000, bhvWarpPipe),
OBJECT(22,356,3826,-2395,0,270,0,0xe0000, bhvWarpPipe),
OBJECT(122,-803,105,6167,0,0,0,0x0, bhvStar),
OBJECT(0,1892,4271,1642,0,0,0,0x2000000, bhvHiddenStar),
OBJECT(0,1488,-4042,-604,0,0,0,0x1000000, bhvHiddenRedCoinStar),
OBJECT(122,5016,2865,1667,0,0,0,0x3000000, bhvStar),
OBJECT(137,6774,-3693,-1703,0,0,0,0x4080000, bhvExclamationBox),
OBJECT(122,-5942,-250,-270,0,0,0,0x5000000, bhvStar),
OBJECT(MODEL_PURPLE_MARBLE,5400,-933,1419,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,5565,-1787,-3602,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,-1694,-4353,6906,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,655,3916,-309,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,6036,5653,-1265,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(215,-3045,4053,-703,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-683,-4041,-5012,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-3975,-3987,-5342,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5500,-3489,-4880,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5706,-2917,-3425,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-4642,-2240,-2673,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-2883,5739,1920,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-1592,-4340,6127,0,0,0,0x0, bhvRedCoin),
OBJECT(202,-2628,-4331,-4986,0,127,0,0x8a10000, bhvPlatformOnTrack),
OBJECT(31,-900,3826,-1795,0,0,0,0x0, bhvDoor),
OBJECT(101,5975,165,-3074,0,0,0,0x0, bhvScuttlebug),
OBJECT(0,4048,165,-2695,0,-45,0,0x0, bhvGoombaTripletSpawner),
OBJECT(84,2317,165,-3360,0,135,0,0x0, bhvMontyMoleHole),
OBJECT(207,-1408,3826,953,0,270,0,0x0, bhvFloorSwitchHiddenObjects),
OBJECT(129,1362,5190,709,0,-20,0,0x0, bhvHiddenObject),
OBJECT(129,1033,5645,1782,0,-20,0,0x0, bhvHiddenObject),
OBJECT(129,1167,5455,1246,0,-20,0,0x0, bhvHiddenObject),
OBJECT(101,-787,-4363,4615,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,848,-4363,-3826,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,3428,-4363,-3677,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,-1473,3826,-989,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,151,3826,1038,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,-2292,3826,1298,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,1726,5023,-379,0,0,0,0x0, bhvScuttlebug),
OBJECT(101,-371,-4363,3407,0,0,0,0x0, bhvScuttlebug),
OBJECT(0,-634,3826,-1018,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(192,-1707,-4363,-4716,0,0,0,0x0, bhvGoomba),
OBJECT(192,5461,-2025,-4411,0,0,0,0x0, bhvGoomba),
//OBJECT(0,6700,-737,1845,0,0,0,0x0, bhvBobBowlingBallSpawner),
OBJECT(206,3931,-207,4521,0,0,0,0x0, bhvSnufit),
OBJECT(206,3148,-207,5310,0,0,0,0x0, bhvSnufit),
OBJECT(206,580,210,6133,0,0,0,0x0, bhvSnufit),
OBJECT(206,4802,5781,-315,0,0,0,0x0, bhvSnufit),
OBJECT(206,4105,-4093,-3313,0,0,0,0x0, bhvSnufit),
OBJECT(100,1250,-3364,-3977,0,0,0,0x0, bhvSwoop),
OBJECT(100,167,-3364,-2937,0,0,0,0x0, bhvSwoop),
OBJECT(100,2837,6014,-319,0,0,0,0x0, bhvSwoop),
OBJECT(100,56,-3364,-2427,0,0,0,0x0, bhvSwoop),
OBJECT(100,-1790,4500,929,0,0,0,0x0, bhvSwoop),
OBJECT(0,-1375,5100,164,0,0,0,0x0, bhvMrI),
OBJECT(0,1647,5023,-1105,0,0,0,0x0, bhvMrI),
OBJECT(206,-5794,3967,-465,0,0,0,0x0, bhvSnufit),
OBJECT(212,-7463,3959,-508,0,0,0,0x0, bhv1Up),
OBJECT(84,3298,-4363,-4839,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(84,1939,3826,1332,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(84,1678,3826,1927,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(84,-3314,3826,-146,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(84,6402,5653,-1211,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(84,5672,5653,-1213,0,0,0,0x0, bhvMontyMoleHole),
OBJECT(0,-1235,-2684,1375,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,-2382,-4363,3812,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,284,-4363,-4280,0,55,0,0x0, bhvCoinFormation),
OBJECT(0,3394,5067,-307,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,-1096,3408,5980,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,-1388,5140,313,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-4405,2916,-1986,0,0,0,0x0, bhvCoinFormation),
OBJECT(0,4959,-3542,-4024,0,0,0,0x110000, bhvCoinFormation),
OBJECT(0,-874,5739,2451,0,90,0,0x0, bhvCoinFormation),
OBJECT(120,-2466,3878,-1390,0,0,0,0x0, bhvRecoveryHeart),
OBJECT(85,2812,-3698,-2509,0,0,0,0x0, bhvMontyMole),
OBJECT(85,2812,-3698,-2509,0,0,0,0x10000, bhvMontyMole),
OBJECT(124,6054,5653,425,0,180,0,0x330000, bhvMessagePanel),
//OBJECT(0,6700,-737,1845,0,0,0,0x0, bhvTtmBowlingBallSpawner),
//OBJECT(0,-5087,-726,2889,0,0,0,0x10000, bhvBobBowlingBallSpawner),
OBJECT(206,-3669,-1907,-2908,0,0,0,0x0, bhvSnufit),
OBJECT(206,-4605,-3594,-5260,0,0,0,0x0, bhvSnufit),
OBJECT(220,-5879,-3021,-4302,0,0,0,0x10000, bhvFlyGuy),
OBJECT(140,5600,-996,1419,0,0,0,0x0, bhvBlueCoinSwitch),
OBJECT(118,4673,-996,1827,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,3467,-1239,1658,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,1551,-1799,1390,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,390,-2320,1351,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(192,1294,-4352,-146,0,0,0,0x0, bhvGoomba),
OBJECT(192,1089,-4352,-538,0,0,0,0x0, bhvGoomba),
OBJECT(0,1300,-4064,1380,0,0,0,0x110000, bhvCoinFormation),
OBJECT(101,3558,165,-4346,0,180,0,0x0, bhvScuttlebug),
OBJECT(212,-5284,-934,2889,0,0,0,0x0, bhv1Up),
OBJECT(0,-2695,-1272,2889,0,90,0,0x0, bhvCoinFormation),
RETURN()
};
const LevelScript local_warps_thi_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,13,1,12,0),
WARP_NODE(12,13,1,11,0),
WARP_NODE(13,13,1,14,0),
WARP_NODE(14,13,1,13,0),
WARP_NODE(240,6,1,97,0),
WARP_NODE(241,6,1,113,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
