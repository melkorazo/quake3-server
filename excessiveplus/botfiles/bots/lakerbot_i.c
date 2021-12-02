//===========================================================================
//
// Name:			lakerbot_i.c
// Function:		
// Programmer:		Mr Elusive (MrElusive@idsoftware.com)
// Last update:		1999-09-08
// Tab Size:		4 (real tabs)
//===========================================================================

#include "inv.h"

//initial health/armor states
#define FS_HEALTH				3
#define FS_ARMOR				7

//initial weapon weights
#define W_SHOTGUN				150
#define W_MACHINEGUN			70
#define W_GRENADELAUNCHER		40
#define W_ROCKETLAUNCHER		220
#define W_RAILGUN				285
#define W_BFG10K				230
#define W_LIGHTNING				285
#define W_PLASMAGUN				80

//the bot has the weapons, so the weights change a little bit
#define GWW_SHOTGUN				115
#define GWW_MACHINEGUN			50
#define GWW_GRENADELAUNCHER		30
#define GWW_ROCKETLAUNCHER		140
#define GWW_RAILGUN				225
#define GWW_BFG10K				150
#define GWW_LIGHTNING			180
#define GWW_PLASMAGUN			80

//initial powerup weights
#define W_TELEPORTER			40
#define W_MEDKIT				40
#define W_QUAD					160
#define W_ENVIRO				40
#define W_HASTE					40
#define W_INVISIBILITY			80
#define W_REGEN					40
#define W_FLIGHT				40

//flag weight
#define FLAG_WEIGHT				50

//
#include "fw_items.c"

