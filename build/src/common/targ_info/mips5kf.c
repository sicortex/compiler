#include "ti_si_types.h"
const SI_RESOURCE resource9 = {"Issue",0,2,0,0};
const SI_RESOURCE resource10 = {"Execution",1,1,0,3};
const SI_RESOURCE resource11 = {"MultiplyDivide",2,1,0,5};
const SI_RESOURCE resource12 = {"Float",3,1,0,7};
const SI_RESOURCE resource13 = {"Prefetch",4,1,0,9};

#define SI_resource_count  5

static const SI_RESOURCE * const SI_resources[] = {
	&resource9,
	&resource10,
	&resource11,
	&resource12,
	&resource13
};

#define SI_RRW_initializer   0x1
#define SI_RRW_overuse_mask  0x554


#define SI_issue_slot_count  0

static const SI_ISSUE_SLOT * const SI_issue_slots[1] = {0};

/* Instruction group Dummy instructions */
static const SI_RRW res_req1[] = {
  0
};
static const mUINT8 latency5[] = {0,0,0,0};
static const mUINT8 latency6[] = {0,0};
static const SI gname0 = {
	"Dummy instructions",
	0              , /* id */
	latency5       , /* operand latency */
	latency6       , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req1       , /* resource requirement */
	0              , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	0              , /* resource count vec size */
	0              , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Piped__Rep02__Lat04 */
static const SI_RRW res_req15[] = {
  2,
  0x29,
  0x20
};
static const SI_RESOURCE_ID_SET gname17[] = {
	0x7,
	0x4
};
static SI_RESOURCE_TOTAL gname16[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource11,2} /* MultiplyDivide */
};
static const SI_RR ii_rr21[] = {
  0
};
static const SI_RESOURCE_ID_SET * const gname22[] = {
  0
};
static const mUINT8 latency19[] = {0,0,0,0};
static const mUINT8 latency20[] = {4,4};
static const SI gname14 = {
	"Piped__Rep02__Lat04",
	1              , /* id */
	latency19      , /* operand latency */
	latency20      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req15      , /* resource requirement */
	gname17        , /* res id used set vec */
	1              , /* II info size */
	ii_rr21        , /* II resource requirement vec */
	gname22        , /* II res id used set vec */
	{{0x1,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname16        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Piped__Rep09__Lat11 */
static const SI_RRW res_req24[] = {
  9,
  0x29,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20
};
static const SI_RESOURCE_ID_SET gname26[] = {
	0x7,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4
};
static SI_RESOURCE_TOTAL gname25[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource11,9} /* MultiplyDivide */
};
static const SI_RR ii_rr30[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname31[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency28[] = {0,0,0,0};
static const mUINT8 latency29[] = {11,11};
static const SI gname23 = {
	"Piped__Rep09__Lat11",
	2              , /* id */
	latency28      , /* operand latency */
	latency29      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req24      , /* resource requirement */
	gname26        , /* res id used set vec */
	8              , /* II info size */
	ii_rr30        , /* II resource requirement vec */
	gname31        , /* II res id used set vec */
	{{0xff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname25        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Piped__Rep36__Lat37 */
static const SI_RRW res_req33[] = {
  36,
  0x29,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20
};
static const SI_RESOURCE_ID_SET gname35[] = {
	0x7,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4
};
static SI_RESOURCE_TOTAL gname34[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource11,36} /* MultiplyDivide */
};
static const SI_RR ii_rr39[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname40[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency37[] = {0,0,0,0};
static const mUINT8 latency38[] = {37,37};
static const SI gname32 = {
	"Piped__Rep36__Lat37",
	3              , /* id */
	latency37      , /* operand latency */
	latency38      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req33      , /* resource requirement */
	gname35        , /* res id used set vec */
	35             , /* II info size */
	ii_rr39        , /* II resource requirement vec */
	gname40        , /* II res id used set vec */
	{{0x7ffffffff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname34        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Piped__Rep67__Lat69 */
static const SI_RRW res_req42[] = {
  67,
  0x29,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20,
  0x20
};
static const SI_RESOURCE_ID_SET gname44[] = {
	0x7,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4,
	0x4
};
static SI_RESOURCE_TOTAL gname43[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource11,67} /* MultiplyDivide */
};
static const SI_RR ii_rr48[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname49[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency46[] = {0,0,0,0};
static const mUINT8 latency47[] = {69,69};
static const SI gname41 = {
	"Piped__Rep67__Lat69",
	4              , /* id */
	latency46      , /* operand latency */
	latency47      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req42      , /* resource requirement */
	gname44        , /* res id used set vec */
	66             , /* II info size */
	ii_rr48        , /* II resource requirement vec */
	gname49        , /* II res id used set vec */
	{{0xffffffffffffffff,0x3}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname43        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipee__Rep01__Lat01 */
static const SI_RRW res_req51[] = {
  1,
  0x9
};
static const SI_RESOURCE_ID_SET gname53[] = {
	0x3
};
static SI_RESOURCE_TOTAL gname52[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */
};
static const mUINT8 latency55[] = {0,0,0,0};
static const mUINT8 latency56[] = {1,1};
static const SI gname50 = {
	"Pipee__Rep01__Lat01",
	5              , /* id */
	latency55      , /* operand latency */
	latency56      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req51      , /* resource requirement */
	gname53        , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname52        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipee__Rep01__Lat01_branch */
static const SI_RRW res_req60[] = {
  2,
  0xa,
  0x1
};
static const SI_RESOURCE_ID_SET gname62[] = {
	0x3,
	0x1
};
static SI_RESOURCE_TOTAL gname61[] = {
	{&resource9,3} /* Issue */,
	{&resource10,1} /* Execution */
};
static const SI_RR ii_rr66[] = {
  0
};
static const SI_RESOURCE_ID_SET * const gname67[] = {
  0
};
static const mUINT8 latency64[] = {0,0,0,0};
static const mUINT8 latency65[] = {1,1};
static const SI gname59 = {
	"Pipee__Rep01__Lat01_branch",
	6              , /* id */
	latency64      , /* operand latency */
	latency65      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req60      , /* resource requirement */
	gname62        , /* res id used set vec */
	1              , /* II info size */
	ii_rr66        , /* II resource requirement vec */
	gname67        , /* II res id used set vec */
	{{0x1,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname61        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeef__Rep01__Lat01 */
static const SI_RRW res_req69[] = {
  1,
  0x89
};
static const SI_RESOURCE_ID_SET gname71[] = {
	0xb
};
static SI_RESOURCE_TOTAL gname70[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency73[] = {0,0,0,0};
static const mUINT8 latency74[] = {1,1};
static const SI gname68 = {
	"Pipeef__Rep01__Lat01",
	7              , /* id */
	latency73      , /* operand latency */
	latency74      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req69      , /* resource requirement */
	gname71        , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname70        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeef__Rep01__Lat02 */
static const SI_RRW res_req78[] = {
  1,
  0x89
};
static const SI_RESOURCE_ID_SET gname80[] = {
	0xb
};
static SI_RESOURCE_TOTAL gname79[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency82[] = {0,0,0,0};
static const mUINT8 latency83[] = {2,2};
static const SI gname77 = {
	"Pipeef__Rep01__Lat02",
	8              , /* id */
	latency82      , /* operand latency */
	latency83      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req78      , /* resource requirement */
	gname80        , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname79        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeef__Rep01__Lat04 */
static const SI_RRW res_req87[] = {
  1,
  0x89
};
static const SI_RESOURCE_ID_SET gname89[] = {
	0xb
};
static SI_RESOURCE_TOTAL gname88[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency91[] = {0,0,0,0};
static const mUINT8 latency92[] = {4,4};
static const SI gname86 = {
	"Pipeef__Rep01__Lat04",
	9              , /* id */
	latency91      , /* operand latency */
	latency92      , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req87      , /* resource requirement */
	gname89        , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname88        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeem__Rep01__Lat01 */
static const SI_RRW res_req96[] = {
  1,
  0x9
};
static const SI_RESOURCE_ID_SET gname98[] = {
	0x3
};
static SI_RESOURCE_TOTAL gname97[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */
};
static const mUINT8 latency100[] = {0,0,0,0};
static const mUINT8 latency101[] = {1,1};
static const SI gname95 = {
	"Pipeem__Rep01__Lat01",
	10             , /* id */
	latency100     , /* operand latency */
	latency101     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req96      , /* resource requirement */
	gname98        , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname97        , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeem__Rep01__Lat02 */
static const SI_RRW res_req105[] = {
  1,
  0x9
};
static const SI_RESOURCE_ID_SET gname107[] = {
	0x3
};
static SI_RESOURCE_TOTAL gname106[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */
};
static const mUINT8 latency109[] = {0,0,0,0};
static const mUINT8 latency110[] = {2,2};
static const SI gname104 = {
	"Pipeem__Rep01__Lat02",
	11             , /* id */
	latency109     , /* operand latency */
	latency110     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req105     , /* resource requirement */
	gname107       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname106       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeem__Rep01__Lat03 */
static const SI_RRW res_req114[] = {
  1,
  0x9
};
static const SI_RESOURCE_ID_SET gname116[] = {
	0x3
};
static SI_RESOURCE_TOTAL gname115[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */
};
static const mUINT8 latency118[] = {0,0,0,0};
static const mUINT8 latency119[] = {3,3};
static const SI gname113 = {
	"Pipeem__Rep01__Lat03",
	12             , /* id */
	latency118     , /* operand latency */
	latency119     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req114     , /* resource requirement */
	gname116       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname115       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep01__Lat02 */
static const SI_RRW res_req123[] = {
  1,
  0x81
};
static const SI_RESOURCE_ID_SET gname125[] = {
	0x9
};
static SI_RESOURCE_TOTAL gname124[] = {
	{&resource9,1} /* Issue */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency127[] = {0,0,0,0};
static const mUINT8 latency128[] = {2,2};
static const SI gname122 = {
	"Pipef__Rep01__Lat02",
	13             , /* id */
	latency127     , /* operand latency */
	latency128     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req123     , /* resource requirement */
	gname125       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname124       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep01__Lat04 */
static const SI_RRW res_req132[] = {
  1,
  0x81
};
static const SI_RESOURCE_ID_SET gname134[] = {
	0x9
};
static SI_RESOURCE_TOTAL gname133[] = {
	{&resource9,1} /* Issue */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency136[] = {0,0,0,0};
static const mUINT8 latency137[] = {4,4};
static const SI gname131 = {
	"Pipef__Rep01__Lat04",
	14             , /* id */
	latency136     , /* operand latency */
	latency137     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req132     , /* resource requirement */
	gname134       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname133       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep01__Lat05 */
static const SI_RRW res_req141[] = {
  1,
  0x81
};
static const SI_RESOURCE_ID_SET gname143[] = {
	0x9
};
static SI_RESOURCE_TOTAL gname142[] = {
	{&resource9,1} /* Issue */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency145[] = {0,0,0,0};
static const mUINT8 latency146[] = {5,5};
static const SI gname140 = {
	"Pipef__Rep01__Lat05",
	15             , /* id */
	latency145     , /* operand latency */
	latency146     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req141     , /* resource requirement */
	gname143       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname142       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep01__Lat06 */
static const SI_RRW res_req150[] = {
  1,
  0x81
};
static const SI_RESOURCE_ID_SET gname152[] = {
	0x9
};
static SI_RESOURCE_TOTAL gname151[] = {
	{&resource9,1} /* Issue */,
	{&resource12,1} /* Float */
};
static const mUINT8 latency154[] = {0,0,0,0};
static const mUINT8 latency155[] = {6,6};
static const SI gname149 = {
	"Pipef__Rep01__Lat06",
	16             , /* id */
	latency154     , /* operand latency */
	latency155     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req150     , /* resource requirement */
	gname152       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname151       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep10__Lat15 */
static const SI_RRW res_req159[] = {
  10,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname161[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname160[] = {
	{&resource9,1} /* Issue */,
	{&resource12,10} /* Float */
};
static const SI_RR ii_rr165[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname166[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency163[] = {0,0,0,0};
static const mUINT8 latency164[] = {15,15};
static const SI gname158 = {
	"Pipef__Rep10__Lat15",
	17             , /* id */
	latency163     , /* operand latency */
	latency164     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req159     , /* resource requirement */
	gname161       , /* res id used set vec */
	9              , /* II info size */
	ii_rr165       , /* II resource requirement vec */
	gname166       , /* II res id used set vec */
	{{0x1ff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname160       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep14__Lat17 */
static const SI_RRW res_req168[] = {
  14,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname170[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname169[] = {
	{&resource9,1} /* Issue */,
	{&resource12,14} /* Float */
};
static const SI_RR ii_rr174[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname175[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency172[] = {0,0,0,0};
static const mUINT8 latency173[] = {17,17};
static const SI gname167 = {
	"Pipef__Rep14__Lat17",
	18             , /* id */
	latency172     , /* operand latency */
	latency173     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req168     , /* resource requirement */
	gname170       , /* res id used set vec */
	13             , /* II info size */
	ii_rr174       , /* II resource requirement vec */
	gname175       , /* II res id used set vec */
	{{0x1fff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname169       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep14__Lat19 */
static const SI_RRW res_req177[] = {
  14,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname179[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname178[] = {
	{&resource9,1} /* Issue */,
	{&resource12,14} /* Float */
};
static const SI_RR ii_rr183[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname184[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency181[] = {0,0,0,0};
static const mUINT8 latency182[] = {19,19};
static const SI gname176 = {
	"Pipef__Rep14__Lat19",
	19             , /* id */
	latency181     , /* operand latency */
	latency182     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req177     , /* resource requirement */
	gname179       , /* res id used set vec */
	13             , /* II info size */
	ii_rr183       , /* II resource requirement vec */
	gname184       , /* II res id used set vec */
	{{0x1fff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname178       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep18__Lat23 */
static const SI_RRW res_req186[] = {
  18,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname188[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname187[] = {
	{&resource9,1} /* Issue */,
	{&resource12,18} /* Float */
};
static const SI_RR ii_rr192[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname193[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency190[] = {0,0,0,0};
static const mUINT8 latency191[] = {23,23};
static const SI gname185 = {
	"Pipef__Rep18__Lat23",
	20             , /* id */
	latency190     , /* operand latency */
	latency191     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req186     , /* resource requirement */
	gname188       , /* res id used set vec */
	17             , /* II info size */
	ii_rr192       , /* II resource requirement vec */
	gname193       , /* II res id used set vec */
	{{0x1ffff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname187       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep26__Lat31 */
static const SI_RRW res_req195[] = {
  26,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname197[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname196[] = {
	{&resource9,1} /* Issue */,
	{&resource12,26} /* Float */
};
static const SI_RR ii_rr201[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname202[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency199[] = {0,0,0,0};
static const mUINT8 latency200[] = {31,31};
static const SI gname194 = {
	"Pipef__Rep26__Lat31",
	21             , /* id */
	latency199     , /* operand latency */
	latency200     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req195     , /* resource requirement */
	gname197       , /* res id used set vec */
	25             , /* II info size */
	ii_rr201       , /* II resource requirement vec */
	gname202       , /* II res id used set vec */
	{{0x1ffffff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname196       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipef__Rep29__Lat32 */
static const SI_RRW res_req204[] = {
  29,
  0x81,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80,
  0x80
};
static const SI_RESOURCE_ID_SET gname206[] = {
	0x9,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8,
	0x8
};
static SI_RESOURCE_TOTAL gname205[] = {
	{&resource9,1} /* Issue */,
	{&resource12,29} /* Float */
};
static const SI_RR ii_rr210[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname211[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency208[] = {0,0,0,0};
static const mUINT8 latency209[] = {32,32};
static const SI gname203 = {
	"Pipef__Rep29__Lat32",
	22             , /* id */
	latency208     , /* operand latency */
	latency209     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req204     , /* resource requirement */
	gname206       , /* res id used set vec */
	28             , /* II info size */
	ii_rr210       , /* II resource requirement vec */
	gname211       , /* II res id used set vec */
	{{0xfffffff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname205       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Dummy */
static const SI_RRW res_req213[] = {
  1,
  0x1
};
static const SI_RESOURCE_ID_SET gname215[] = {
	0x1
};
static SI_RESOURCE_TOTAL gname214[] = {
	{&resource9,1} /* Issue */
};
static const mUINT8 latency217[] = {0,0,0,0};
static const mUINT8 latency218[] = {1,1};
static const SI gname212 = {
	"Dummy",
	23             , /* id */
	latency217     , /* operand latency */
	latency218     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req213     , /* resource requirement */
	gname215       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	1              , /* resource count vec size */
	gname214       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Dummy_no_res */
static const SI_RRW res_req222[] = {
  0
};
static const mUINT8 latency226[] = {0,0,0,0};
static const mUINT8 latency227[] = {0,0};
static const SI gname221 = {
	"Dummy_no_res",
	24             , /* id */
	latency226     , /* operand latency */
	latency227     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req222     , /* resource requirement */
	0              , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	0              , /* resource count vec size */
	0              , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Non-exist */
static const SI_RRW res_req231[] = {
  1,
  0x9
};
static const SI_RESOURCE_ID_SET gname233[] = {
	0x3
};
static SI_RESOURCE_TOTAL gname232[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */
};
static const mUINT8 latency235[] = {0,0,0,0};
static const mUINT8 latency236[] = {1,1};
static const SI gname230 = {
	"Non-exist",
	25             , /* id */
	latency235     , /* operand latency */
	latency236     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req231     , /* resource requirement */
	gname233       , /* res id used set vec */
	0              , /* II info size */
	0              , /* II resource requirement vec */
	0              , /* II res id used set vec */
	{{0x0,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	2              , /* resource count vec size */
	gname232       , /* resource count vec */
	0                /* write-write interlock */
};

/* Instruction group Pipeem__Rep01__Lat01_pref */
static const SI_RRW res_req240[] = {
  16,
  0x209,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200,
  0x200
};
static const SI_RESOURCE_ID_SET gname242[] = {
	0x13,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10
};
static SI_RESOURCE_TOTAL gname241[] = {
	{&resource9,1} /* Issue */,
	{&resource10,1} /* Execution */,
	{&resource13,16} /* Prefetch */
};
static const SI_RR ii_rr246[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const SI_RESOURCE_ID_SET * const gname247[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};
static const mUINT8 latency244[] = {0,0,0,0};
static const mUINT8 latency245[] = {16,16};
static const SI gname239 = {
	"Pipeem__Rep01__Lat01_pref",
	26             , /* id */
	latency244     , /* operand latency */
	latency245     , /* result latency */
	0              , /* load access time */
	0              , /* last issue cycle */
	0              , /* store available time */
	res_req240     , /* resource requirement */
	gname242       , /* res id used set vec */
	15             , /* II info size */
	ii_rr246       , /* II resource requirement vec */
	gname247       , /* II res id used set vec */
	{{0x7fff,0x0}}	 , /* Bad IIs */
	0              , /* valid issue slots vec size */
	0              , /* valid issue slots vec */
	3              , /* resource count vec size */
	gname241       , /* resource count vec */
	0                /* write-write interlock */
};
static const SI * const SI_ID_si[] = {
	&gname0,
	&gname14,
	&gname23,
	&gname32,
	&gname41,
	&gname50,
	&gname59,
	&gname68,
	&gname77,
	&gname86,
	&gname95,
	&gname104,
	&gname113,
	&gname122,
	&gname131,
	&gname140,
	&gname149,
	&gname158,
	&gname167,
	&gname176,
	&gname185,
	&gname194,
	&gname203,
	&gname212,
	&gname221,
	&gname230,
	&gname239
};

#define SI_ID_count  27


static const SI * const SI_top_si[390] = {
	&gname104   /* lb */,
	&gname104   /* lbu */,
	&gname104   /* lh */,
	&gname104   /* lhu */,
	&gname104   /* lw */,
	&gname104   /* lwl */,
	&gname104   /* lwr */,
	&gname95    /* sb */,
	&gname95    /* sh */,
	&gname95    /* sw */,
	&gname95    /* swl */,
	&gname95    /* swr */,
	&gname104   /* ll */,
	&gname95    /* sc */,
	&gname95    /* sync */,
	&gname104   /* lwu */,
	&gname104   /* ld */,
	&gname104   /* ldl */,
	&gname104   /* ldr */,
	&gname104   /* lld */,
	&gname95    /* sd */,
	&gname95    /* sdl */,
	&gname95    /* sdr */,
	&gname95    /* scd */,
	&gname239   /* pref */,
	&gname239   /* prefx */,
	&gname50    /* add */,
	&gname50    /* addi */,
	&gname50    /* addiu */,
	&gname50    /* addu */,
	&gname32    /* div */,
	&gname32    /* divu */,
	&gname14    /* mul */,
	&gname14    /* mult */,
	&gname14    /* multu */,
	&gname50    /* slt */,
	&gname50    /* slti */,
	&gname50    /* sltiu */,
	&gname50    /* sltu */,
	&gname50    /* sub */,
	&gname50    /* subu */,
	&gname50    /* dadd */,
	&gname50    /* daddi */,
	&gname50    /* daddiu */,
	&gname50    /* daddu */,
	&gname41    /* ddiv */,
	&gname41    /* ddivu */,
	&gname23    /* dmult */,
	&gname23    /* dmultu */,
	&gname50    /* dsub */,
	&gname50    /* dsubu */,
	&gname50    /* and */,
	&gname50    /* andi */,
	&gname50    /* lui */,
	&gname50    /* nor */,
	&gname50    /* or */,
	&gname50    /* ori */,
	&gname50    /* xor */,
	&gname50    /* xori */,
	&gname50    /* clo */,
	&gname50    /* clz */,
	&gname50    /* dclo */,
	&gname50    /* dclz */,
	&gname50    /* mfhi */,
	&gname50    /* mflo */,
	&gname50    /* mthi */,
	&gname50    /* mtlo */,
	&gname68    /* movf */,
	&gname50    /* movn */,
	&gname68    /* movt */,
	&gname50    /* movz */,
	&gname50    /* sll */,
	&gname50    /* sllv */,
	&gname50    /* sra */,
	&gname50    /* srav */,
	&gname50    /* srl */,
	&gname50    /* srlv */,
	&gname50    /* dsll */,
	&gname50    /* dsll32 */,
	&gname50    /* dsllv */,
	&gname50    /* dsra */,
	&gname50    /* dsra32 */,
	&gname50    /* dsrav */,
	&gname50    /* dsrl */,
	&gname50    /* dsrl32 */,
	&gname50    /* dsrlv */,
	&gname59    /* beq */,
	&gname59    /* bgez */,
	&gname59    /* bgezal */,
	&gname59    /* bgtz */,
	&gname59    /* blez */,
	&gname59    /* bltz */,
	&gname59    /* bltzal */,
	&gname59    /* bne */,
	&gname59    /* j */,
	&gname59    /* jal */,
	&gname59    /* jalr */,
	&gname59    /* jr */,
	&gname50    /* break */,
	&gname50    /* syscall */,
	&gname50    /* teq */,
	&gname50    /* teqi */,
	&gname50    /* tge */,
	&gname50    /* tgei */,
	&gname50    /* tgeiu */,
	&gname50    /* tgeu */,
	&gname50    /* tlt */,
	&gname50    /* tlti */,
	&gname50    /* tltiu */,
	&gname50    /* tltu */,
	&gname50    /* tne */,
	&gname50    /* tnei */,
	&gname113   /* lwc1 */,
	&gname113   /* ldc1 */,
	&gname113   /* lwxc1 */,
	&gname113   /* ldxc1 */,
	&gname95    /* swc1 */,
	&gname95    /* sdc1 */,
	&gname95    /* swxc1 */,
	&gname95    /* sdxc1 */,
	&gname131   /* abs.s */,
	&gname131   /* abs.d */,
	&gname131   /* add.s */,
	&gname131   /* add.d */,
	&gname122   /* c.f.s */,
	&gname122   /* c.f.d */,
	&gname122   /* c.t.s */,
	&gname122   /* c.t.d */,
	&gname122   /* c.un.s */,
	&gname122   /* c.un.d */,
	&gname122   /* c.or.s */,
	&gname122   /* c.or.d */,
	&gname122   /* c.eq.s */,
	&gname122   /* c.eq.d */,
	&gname122   /* c.neq.s */,
	&gname122   /* c.neq.d */,
	&gname122   /* c.ueq.s */,
	&gname122   /* c.ueq.d */,
	&gname122   /* c.ogl.s */,
	&gname122   /* c.ogl.d */,
	&gname122   /* c.olt.s */,
	&gname122   /* c.olt.d */,
	&gname122   /* c.uge.s */,
	&gname122   /* c.uge.d */,
	&gname122   /* c.ult.s */,
	&gname122   /* c.ult.d */,
	&gname122   /* c.oge.s */,
	&gname122   /* c.oge.d */,
	&gname122   /* c.ole.s */,
	&gname122   /* c.ole.d */,
	&gname122   /* c.ugt.s */,
	&gname122   /* c.ugt.d */,
	&gname122   /* c.ule.s */,
	&gname122   /* c.ule.d */,
	&gname122   /* c.ogt.s */,
	&gname122   /* c.ogt.d */,
	&gname122   /* c.sf.s */,
	&gname122   /* c.sf.d */,
	&gname122   /* c.st.s */,
	&gname122   /* c.st.d */,
	&gname122   /* c.ngle.s */,
	&gname122   /* c.ngle.d */,
	&gname122   /* c.gle.s */,
	&gname122   /* c.gle.d */,
	&gname122   /* c.seq.s */,
	&gname122   /* c.seq.d */,
	&gname122   /* c.sne.s */,
	&gname122   /* c.sne.d */,
	&gname122   /* c.ngl.s */,
	&gname122   /* c.ngl.d */,
	&gname122   /* c.gl.s */,
	&gname122   /* c.gl.d */,
	&gname122   /* c.lt.s */,
	&gname122   /* c.lt.d */,
	&gname122   /* c.nlt.s */,
	&gname122   /* c.nlt.d */,
	&gname122   /* c.nge.s */,
	&gname122   /* c.nge.d */,
	&gname122   /* c.ge.s */,
	&gname122   /* c.ge.d */,
	&gname122   /* c.le.s */,
	&gname122   /* c.le.d */,
	&gname122   /* c.nle.s */,
	&gname122   /* c.nle.d */,
	&gname122   /* c.ngt.s */,
	&gname122   /* c.ngt.d */,
	&gname122   /* c.gt.s */,
	&gname122   /* c.gt.d */,
	&gname167   /* div.s */,
	&gname203   /* div.d */,
	&gname131   /* mul.s */,
	&gname131   /* mul.d */,
	&gname131   /* neg.s */,
	&gname131   /* neg.d */,
	&gname131   /* sub.s */,
	&gname131   /* sub.d */,
	&gname167   /* sqrt.s */,
	&gname203   /* sqrt.d */,
	&gname131   /* madd.s */,
	&gname131   /* madd.d */,
	&gname131   /* msub.s */,
	&gname131   /* msub.d */,
	&gname131   /* nmadd.s */,
	&gname131   /* nmadd.d */,
	&gname131   /* nmsub.s */,
	&gname131   /* nmsub.d */,
	&gname158   /* recip.s */,
	&gname185   /* recip.d */,
	&gname176   /* rsqrt.s */,
	&gname194   /* rsqrt.d */,
	&gname86    /* cfc1 */,
	&gname86    /* ctc1 */,
	&gname77    /* mfc1 */,
	&gname77    /* mtc1 */,
	&gname77    /* dmfc1 */,
	&gname77    /* dmtc1 */,
	&gname131   /* mov.s */,
	&gname131   /* mov.d */,
	&gname131   /* movf.s */,
	&gname131   /* movf.d */,
	&gname86    /* movn.s */,
	&gname86    /* movn.d */,
	&gname131   /* movt.s */,
	&gname131   /* movt.d */,
	&gname86    /* movz.s */,
	&gname86    /* movz.d */,
	&gname131   /* cvt.d.s */,
	&gname131   /* cvt.d.w */,
	&gname131   /* cvt.d.l */,
	&gname140   /* cvt.l.s */,
	&gname140   /* cvt.l.d */,
	&gname149   /* cvt.s.d */,
	&gname131   /* cvt.s.w */,
	&gname131   /* cvt.s.l */,
	&gname140   /* cvt.w.s */,
	&gname140   /* cvt.w.d */,
	&gname140   /* ceil.w.s */,
	&gname140   /* ceil.w.d */,
	&gname140   /* ceil.l.s */,
	&gname140   /* ceil.l.d */,
	&gname140   /* floor.w.s */,
	&gname140   /* floor.w.d */,
	&gname140   /* floor.l.s */,
	&gname140   /* floor.l.d */,
	&gname140   /* round.w.s */,
	&gname140   /* round.w.d */,
	&gname140   /* round.l.s */,
	&gname140   /* round.l.d */,
	&gname140   /* trunc.w.s */,
	&gname140   /* trunc.w.d */,
	&gname140   /* trunc.l.s */,
	&gname140   /* trunc.l.d */,
	&gname59    /* bc1f */,
	&gname59    /* bc1t */,
	&gname230   /* dsbh */,
	&gname230   /* dshd */,
	&gname230   /* seb */,
	&gname230   /* seh */,
	&gname230   /* wsbh */,
	&gname230   /* dext */,
	&gname230   /* dextm */,
	&gname230   /* dextu */,
	&gname230   /* dins */,
	&gname230   /* dinsm */,
	&gname230   /* dinsu */,
	&gname230   /* drotr */,
	&gname230   /* drotr32 */,
	&gname230   /* drotrv */,
	&gname230   /* ext */,
	&gname230   /* ins */,
	&gname230   /* rotr */,
	&gname230   /* rotrv */,
	&gname230   /* alnv.ps */,
	&gname230   /* movn.ps */,
	&gname230   /* movz.ps */,
	&gname230   /* abs.ps */,
	&gname230   /* c.eq.ps */,
	&gname230   /* c.f.ps */,
	&gname230   /* c.ge.ps */,
	&gname230   /* c.gl.ps */,
	&gname230   /* c.gle.ps */,
	&gname230   /* c.gt.ps */,
	&gname230   /* c.le.ps */,
	&gname230   /* c.lt.ps */,
	&gname230   /* c.neq.ps */,
	&gname230   /* c.nge.ps */,
	&gname230   /* c.ngl.ps */,
	&gname230   /* c.ngle.ps */,
	&gname230   /* c.ngt.ps */,
	&gname230   /* c.nle.ps */,
	&gname230   /* c.nlt.ps */,
	&gname230   /* c.oge.ps */,
	&gname230   /* c.ogl.ps */,
	&gname230   /* c.ogt.ps */,
	&gname230   /* c.ole.ps */,
	&gname230   /* c.olt.ps */,
	&gname230   /* c.or.ps */,
	&gname230   /* c.seq.ps */,
	&gname230   /* c.sf.ps */,
	&gname230   /* c.sne.ps */,
	&gname230   /* c.st.ps */,
	&gname230   /* c.t.ps */,
	&gname230   /* c.ueq.ps */,
	&gname230   /* c.uge.ps */,
	&gname230   /* c.ugt.ps */,
	&gname230   /* c.ule.ps */,
	&gname230   /* c.ult.ps */,
	&gname230   /* c.un.ps */,
	&gname230   /* cvt.ps.s */,
	&gname230   /* cvt.s.pl */,
	&gname230   /* cvt.s.pu */,
	&gname230   /* mov.ps */,
	&gname230   /* movf.ps */,
	&gname230   /* movt.ps */,
	&gname230   /* neg.ps */,
	&gname230   /* pll.ps */,
	&gname230   /* plu.ps */,
	&gname230   /* pul.ps */,
	&gname230   /* puu.ps */,
	&gname230   /* add.ps */,
	&gname230   /* madd.ps */,
	&gname230   /* msub.ps */,
	&gname230   /* mul.ps */,
	&gname230   /* nmadd.ps */,
	&gname230   /* nmsub.ps */,
	&gname230   /* sub.ps */,
	&gname230   /* lbx */,
	&gname230   /* ldx */,
	&gname230   /* lhx */,
	&gname230   /* lwx */,
	&gname230   /* madd */,
	&gname230   /* maddu */,
	&gname230   /* msub */,
	&gname230   /* msubu */,
	&gname230   /* dmadd */,
	&gname230   /* dmaddu */,
	&gname230   /* dmsub */,
	&gname230   /* dmsubu */,
	&gname230   /* dmulg */,
	&gname230   /* dmulgu */,
	&gname230   /* mfacx */,
	&gname230   /* mtacx */,
	&gname230   /* dperm */,
	&gname230   /* pop */,
	&gname230   /* dpop */,
	&gname230   /* luxc1 */,
	&gname230   /* suxc1 */,
	&gname230   /* addred.ps */,
	&gname230   /* mulred.ps */,
	&gname230   /* ma.nlupuu.ps */,
	&gname230   /* ma.plunuu.ps */,
	&gname230   /* ma.plupll.ps */,
	&gname230   /* ma.puupul.ps */,
	&gname230   /* recipit1.d */,
	&gname230   /* recipit1.s */,
	&gname230   /* recipit1.ps */,
	&gname230   /* recipit2.d */,
	&gname230   /* recipit2.s */,
	&gname230   /* recipit2.ps */,
	&gname230   /* rsqrtit1.d */,
	&gname230   /* rsqrtit1.s */,
	&gname230   /* rsqrtit1.ps */,
	&gname230   /* rsqrtit2.d */,
	&gname230   /* rsqrtit2.s */,
	&gname230   /* rsqrtit2.ps */,
	&gname230   /* mfhc1 */,
	&gname230   /* mthc1 */,
	&gname230   /* bc2any2f */,
	&gname230   /* bc2any2t */,
	&gname230   /* perfctl */,
	&gname230   /* tlbwir */,
	&gname230   /* tlbwrr */,
	&gname50    /* sext */,
	&gname212   /* asm */,
	&gname212   /* intrncall */,
	&gname212   /* spadjust */,
	&gname221   /* mov_hilo */,
	&gname221   /* mov_fcc */,
	&gname0     /* begin_pregtn */,
	&gname0     /* end_pregtn */,
	&gname0     /* bwd_bar */,
	&gname0     /* fwd_bar */,
	&gname0     /* dfixup */,
	&gname0     /* ffixup */,
	&gname0     /* ifixup */,
	&gname0     /* label */,
	&gname212   /* nop */,
	&gname0     /* noop */,
	&gname221   /* swp_start */,
	&gname221   /* swp_stop */
};

static const SI_SUMMARY SI_summary = {
  SI_top_si,
  SI_ID_si,
  SI_ID_count,
  SI_issue_slots,
  SI_issue_slot_count,
  SI_resources,
  SI_resource_count,
  SI_RRW_initializer,
  SI_RRW_overuse_mask,
  "mips5kf"
};

const SI_SUMMARY *SI_Get_Summary(void)
{
  return &SI_summary;
}
