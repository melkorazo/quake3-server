//===========================================================================
//
// Name:			items.c
// Function:		item configuration
// Programmer:		Mr Elusive
// Last update:		1999-12-28
// Tab Size:		4 (real tabs)
//===========================================================================

#include "inv.h"

#define ITEM_NONE					0
#define ITEM_AMMO					1
#define ITEM_WEAPON					2
#define ITEM_HEALTH					3
#define ITEM_ARMOR					4
#define ITEM_POWERUP				5
#define ITEM_KEY					6
#define ITEM_FLAG					7
#define ITEM_ROAM					8

//===================================
// ARMOR
//===================================

iteminfo "item_armor_shard"
{
	name					"Armor Shard"
	model					"models/powerups/armor/shard.md3"
	modelindex				MODELINDEX_ARMORSHARD
	type					ITEM_ARMOR
	index					INVENTORY_ARMOR
	respawntime				20
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_armor_combat"
{
	name					"Armor"
	model					"models/powerups/armor/armor_yel.md3"
	modelindex				MODELINDEX_ARMORCOMBAT
	type					ITEM_ARMOR
	index					INVENTORY_ARMOR
	respawntime				20
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_armor_body"
{
	name					"Heavy Armor"
	model					"models/powerups/armor/armor_red.md3"
	modelindex				MODELINDEX_ARMORBODY
	type					ITEM_ARMOR
	index					INVENTORY_ARMOR
	respawntime				20
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

//===================================
// HEALTH
//===================================

iteminfo "item_health_small"
{
	name					"5 Health"
	model					"models/powerups/health/small_cross.md3"
	modelindex				MODELINDEX_HEALTHSMALL
	type					ITEM_HEALTH
	index					INVENTORY_HEALTH
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_health"
{
	name					"25 Health"
	model					"models/powerups/health/medium_cross.md3"
	modelindex				MODELINDEX_HEALTH
	type					ITEM_HEALTH
	index					INVENTORY_HEALTH
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_health_large"
{
	name					"50 Health"
	model					"models/powerups/health/large_cross.md3"
	modelindex				MODELINDEX_HEALTHLARGE
	type					ITEM_HEALTH
	index					INVENTORY_HEALTH
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_health_mega"
{
	name					"Mega Health"
	model					"models/powerups/health/mega_cross.md3"
	modelindex				MODELINDEX_HEALTHMEGA
	type					ITEM_HEALTH
	index					INVENTORY_HEALTH
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

//===================================
// WEAPONS
//===================================
//*
iteminfo "weapon_gauntlet"
{
	name					"Gauntlet"
	model					"models/weapons2/gauntlet/gauntlet.md3"
	modelindex				MODELINDEX_GAUNTLET
	type					ITEM_WEAPON
	index					INVENTORY_GAUNTLET
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo*/

iteminfo "weapon_shotgun"
{
	name					"Shotgun"
	model					"models/weapons2/shotgun/shotgun.md3"
	modelindex				MODELINDEX_SHOTGUN
	type					ITEM_WEAPON
	index					INVENTORY_SHOTGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_machinegun"
{
	name					"Machinegun"
	model					"models/weapons2/machinegun/machinegun.md3"
	modelindex				MODELINDEX_MACHINEGUN
	type					ITEM_WEAPON
	index					INVENTORY_MACHINEGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_grenadelauncher"
{
	name					"Grenade Launcher"
	model					"models/weapons2/grenadel/grenadel.md2"
	modelindex				MODELINDEX_GRENADELAUNCHER
	type					ITEM_WEAPON
	index					INVENTORY_GRENADELAUNCHER
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_rocketlauncher"
{
	name					"Rocket Launcher"
	model					"models/weapons2/rocketl/rocketl.md3"
	modelindex				MODELINDEX_ROCKETLAUNCHER
	type					ITEM_WEAPON
	index					INVENTORY_ROCKETLAUNCHER
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_lightning"
{
	name					"Lightning Gun"
	model					"models/weapons2/lightning/lightning.md3"
	modelindex				MODELINDEX_LIGHTNING
	type					ITEM_WEAPON
	index					INVENTORY_LIGHTNING
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_railgun"
{
	name					"Railgun"
	model					"models/weapons2/railgun/railgun.md3"
	modelindex				MODELINDEX_RAILGUN
	type					ITEM_WEAPON
	index					INVENTORY_RAILGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_plasmagun"
{
	name					"Plasma Gun"
	model					"models/weapons2/plasma/plasma.md3"
	modelindex				MODELINDEX_PLASMAGUN
	type					ITEM_WEAPON
	index					INVENTORY_PLASMAGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_bfg"
{
	name					"BFG10K"
	model					"models/weapons2/bfg/bfg.md3"
	modelindex				MODELINDEX_BFG10K
	type					ITEM_WEAPON
	index					INVENTORY_BFG10K
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_grapplinghook"
{
	name					"Grappling Hook"
	model					"models/weapons2/grapple/grapple.md3"
	modelindex				MODELINDEX_GRAPPLINGHOOK
	type					ITEM_WEAPON
	index					INVENTORY_GRAPPLINGHOOK
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_nailgun"
{
	name					"Nailgun"
	model					"models/weapons/nailgun/nailgun.md3"
	modelindex				MODELINDEX_NAILGUN
	type					ITEM_WEAPON
	index					INVENTORY_NAILGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_prox_launcher"
{
	name					"Prox Launcher"
	model					"models/weapons/proxmine/proxmine.md3"
	modelindex				MODELINDEX_PROXLAUNCHER
	type					ITEM_WEAPON
	index					INVENTORY_PROXLAUNCHER
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "weapon_chaingun"
{
	name					"Chaingun"
	model					"models/weapons/vulcan/vulcan.md3"
	modelindex				MODELINDEX_CHAINGUN
	type					ITEM_WEAPON
	index					INVENTORY_CHAINGUN
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo


//===================================
// AMMO
//===================================

iteminfo "ammo_shells"
{
	name					"Shells"
	model					"models/powerups/ammo/shotgunam.md3"
	modelindex				MODELINDEX_SHELLS
	type					ITEM_AMMO
	index					INVENTORY_SHELLS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_bullets"
{
	name					"Bullets"
	model					"models/powerups/ammo/machinegunam.md3"
	modelindex				MODELINDEX_BULLETS
	type					ITEM_AMMO
	index					INVENTORY_BULLETS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_grenades"
{
	name					"Grenades"
	model					"models/powerups/ammo/grenadeam.md3"
	modelindex				MODELINDEX_GRENADES
	type					ITEM_AMMO
	index					INVENTORY_GRENADES
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_cells"
{
	name					"Cells"
	model					"models/powerups/ammo/plasmaam.md3"
	modelindex				MODELINDEX_CELLS
	type					ITEM_AMMO
	index					INVENTORY_CELLS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_lightning"
{
	name					"Lightning"
	model					"models/powerups/ammo/lightningam.md3"
	modelindex				MODELINDEX_LIGHTNINGAMMO
	type					ITEM_AMMO
	index					INVENTORY_LIGHTNINGAMMO
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_rockets"
{
	name					"Rockets"
	model					"models/powerups/ammo/rocketam.dm3"
	modelindex				MODELINDEX_ROCKETS
	type					ITEM_AMMO
	index					INVENTORY_ROCKETS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_slugs"
{
	name					"Slugs"
	model					"models/powerups/ammo/railgunam.md3"
	modelindex				MODELINDEX_SLUGS
	type					ITEM_AMMO
	index					INVENTORY_SLUGS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_bfg"
{
	name					"Bfg ammo"
	model					"models/powerups/ammo/bfgam.md3"
	modelindex				MODELINDEX_BFGAMMO
	type					ITEM_AMMO
	index					INVENTORY_BFGAMMO
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_nails"
{
	name					"Nails"
	model					"models/powerups/ammo/nailgunam.md3"
	modelindex				MODELINDEX_NAILS
	type					ITEM_AMMO
	index					INVENTORY_NAILS
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_mines"
{
	name					"Proximity Mines"
	model					"models/powerups/ammo/proxmineam.md3"
	modelindex				MODELINDEX_MINES
	type					ITEM_AMMO
	index					INVENTORY_MINES
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "ammo_belt"
{
	name					"Chaingun Belt"
	model					"models/powerups/ammo/chaingunam.md3"
	modelindex				MODELINDEX_BELT
	type					ITEM_AMMO
	index					INVENTORY_BELT
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

//===================================
// POWERUPS
//===================================

iteminfo "holdable_teleporter"
{
	name					"Personal Teleporter"
	model					"models/powerups/holdable/teleporter.md3"
	modelindex				MODELINDEX_TELEPORTER
	type					ITEM_POWERUP
	index					INVENTORY_TELEPORTER
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "holdable_medkit"
{
	name					"Medkit"
	model					"models/powerups/holdable/medkit.md3"
	modelindex				MODELINDEX_MEDKIT
	type					ITEM_HEALTH
	index					INVENTORY_MEDKIT
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "holdable_kamikaze"
{
	name					"Kamikaze"
	model					"models/powerups/kamikazi.md3"
	modelindex				MODELINDEX_KAMIKAZE
	type					ITEM_POWERUP
	index					INVENTORY_KAMIKAZE
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "holdable_portal"
{
	name					"Portal"
	model					"models/powerups/holdable/teleporter.md3"
	modelindex				MODELINDEX_PORTAL
	type					ITEM_POWERUP
	index					INVENTORY_PORTAL
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "holdable_invulnerability"
{
	name					"Invulnerability"
	model					"models/powerups/holdable/invulnerability.md3"
	modelindex				MODELINDEX_INVULNERABILITY
	type					ITEM_POWERUP
	index					INVENTORY_PORTAL
	respawntime				30
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_quad"
{
	name					"Quad Damage"
	model					"models/powerups/instant/quad.md3"
	modelindex				MODELINDEX_QUAD
	type					ITEM_POWERUP
	index					INVENTORY_QUAD
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_enviro"
{
	name					"Battle Suit"
	model					"models/powerups/instant/enviro.md3"
	modelindex				MODELINDEX_ENVIRONMENTSUIT
	type					ITEM_POWERUP
	index					INVENTORY_ENVIRONMENTSUIT
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_haste"
{
	name					"Speed"
	model					"models/powerups/instant/haste_ring.md3"
	modelindex				MODELINDEX_HASTE
	type					ITEM_POWERUP
	index					INVENTORY_HASTE
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_invisibility"
{
	name					"Invisibility"
	model					"models/powerups/instant/invis.md3"
	modelindex				MODELINDEX_INVISIBILITY
	type					ITEM_POWERUP
	index					INVENTORY_INVISIBILITY
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_regen"
{
	name					"Regeneration"
	model					"models/powerups/instant/regen_ring.md3"
	modelindex				MODELINDEX_REGEN
	type					ITEM_POWERUP
	index					INVENTORY_REGEN
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_flight"
{
	name					"Flight"
	model					"models/powerups/instant/flight_ring.md3"
	modelindex				MODELINDEX_FLIGHT
	type					ITEM_POWERUP
	index					INVENTORY_FLIGHT
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_scout"
{
	name					"Scout"
	model					"models/powerups/scout.md3"
	modelindex				MODELINDEX_SCOUT
	type					ITEM_POWERUP
	index					INVENTORY_SCOUT
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_guard"
{
	name					"Guard"
	model					"models/powerups/guard.md3"
	modelindex				MODELINDEX_GUARD
	type					ITEM_POWERUP
	index					INVENTORY_GUARD
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_doubler"
{
	name					"Doubler"
	model					"models/powerups/doubler.md3"
	modelindex				MODELINDEX_DOUBLER
	type					ITEM_POWERUP
	index					INVENTORY_DOUBLER
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_ammoregen"
{
	name					"Ammo Regen"
	model					"models/powerups/ammo.md3"
	modelindex				MODELINDEX_AMMOREGEN
	type					ITEM_POWERUP
	index					INVENTORY_AMMOREGEN
	respawntime				60
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

//===================================
// CTF flags
//===================================

iteminfo "team_CTF_redflag"
{
	name					"Red Flag"
	model					"models/flags/r_flag.md3"
	modelindex				MODELINDEX_REDFLAG
	type					ITEM_FLAG
	index					INVENTORY_REDFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "team_CTF_blueflag"
{
	name					"Blue Flag"
	model					"models/flags/b_flag.md3"
	modelindex				MODELINDEX_BLUEFLAG
	type					ITEM_FLAG
	index					INVENTORY_BLUEFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "team_CTF_neutralflag"
{
	name					"Neutral Flag"
	model					"models/flags/n_flag.md3"
	modelindex				MODELINDEX_NEUTRALFLAG
	type					ITEM_FLAG
	index					INVENTORY_NEUTRALFLAG
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "team_redobelisk"
{
	name					"Red Obelisk"
	model					"models/powerups/obelisk/obelisk.md3"
	modelindex				0
	type					ITEM_NONE
	index					0
	mins					{-15, -15, 1}
	maxs					{15, 15, 87}
} //end iteminfo

iteminfo "team_blueobelisk"
{
	name					"Blue Obelisk"
	model					"models/powerups/obelisk/obelisk.md3"
	modelindex				0
	type					ITEM_NONE
	index					0
	mins					{-15, -15, 1}
	maxs					{15, 15, 87}
} //end iteminfo

iteminfo "team_neutralobelisk"
{
	name					"Neutral Obelisk"
	model					"models/powerups/obelisk/obelisk.md3"
	modelindex				0
	type					ITEM_NONE
	index					0
	mins					{-15, -15, 1}
	maxs					{15, 15, 87}
} //end iteminfo

iteminfo "item_redcube"
{
	name					"Red Cube"
	model					"models/powerups/orb/r_orb.md3"
	modelindex				MODELINDEX_REDCUBE
	type					ITEM_FLAG
	index					INVENTORY_REDCUBE
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

iteminfo "item_bluecube"
{
	name					"Blue Cube"
	model					"models/powerups/orb/b_orb.md3"
	modelindex				MODELINDEX_BLUECUBE
	type					ITEM_FLAG
	index					INVENTORY_BLUECUBE
	mins					{-15,-15,-15}
	maxs					{15,15,15}
} //end iteminfo

//===================================
// bot roam item
//===================================

iteminfo "item_botroam"
{
	name					"Bot Roam Goal"
	model					""
	modelindex				0
	type					ITEM_ROAM
	index					0
	mins					{-15,-15,-15}
	maxs					{15,15,15}
}


