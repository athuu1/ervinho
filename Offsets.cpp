//GameVersion=v3.0.75.30
#pragma once

//Miscellaneous
constexpr long OFF_REGION = 0x140000000; //[Static]->Region
constexpr long OFF_LEVEL = 0x182C554; //[Miscellaneous]->LevelName
constexpr long OFF_LOCAL_PLAYER = 0x2429238; //[Miscellaneous]->LocalPlayer
constexpr long OFF_ENTITY_LIST = 0x1f55fb8; //[Miscellaneous]->cl_entitylist

// Buttons
constexpr long OFF_IN_ATTACK = 0x0769b658; //[Buttons]->in_attack
constexpr long OFF_IN_DUCK = 0x0769b868; //[Buttons]->in_duck

// Players
constexpr long OFF_ZOOMING = 0x1be1; //[RecvTable.DT_Player]->m_bZooming
constexpr long OFF_LOCAL_ORIGIN = 0x017c; //[DataMap.CBaseViewModel]->m_vecAbsOrigin
constexpr long OFF_TEAM_NUMBER = 0x0338; //[RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_CURRENT_HEALTH = 0x0328; //[RecvTable.DT_BaseEntity]->m_iHealth
constexpr long OFF_CURRENT_SHIELDS = 0x01a0; //[RecvTable.DT_BaseEntity]->m_shieldHealth
constexpr long OFF_NAME = 0x0481; //[RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_LIFE_STATE = 0x0690; //[RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x2760; //[RecvTable.DT_Player]->m_bleedoutState
constexpr long OFF_LAST_VISIBLE_TIME = 0x199e + 0x2; //[RecvTable.DT_BaseCombatCharacter]->CPlayer!lastVisibleTime
constexpr long OFF_LAST_AIMEDAT_TIME = 0x199e + 0x8;
constexpr long OFF_VIEW_ANGLES = 0x2534 - 0x14; //[DataMap.C_Player]->m_ammoPoolCapacity - 0x14
constexpr long OFF_PUNCH_ANGLES = 0x2438; //[DataMap.C_Player]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle

// Weapon
constexpr long OFF_WEAPON_HANDLE = 0x1944; //[RecvTable.DT_BaseCombatCharacter]->m_latestPrimaryWeapons
constexpr long OFF_WEAPON_INDEX = 0x1788; //[RecvTable.DT_WeaponX]->m_weaponNameIndex
constexpr long OFF_WEAPON_DISCARDED = 0x15a9; //[RecvTable.DT_WeaponX]->m_discarded

// Glow
constexpr long OFF_GLOW_HIGHLIGHTS = 0xB17E1A0; //[Miscellaneous]->HighlightSettings
constexpr long OFF_GLOW_THROUGH_WALL = 0x26c; //[DT_HighlightSettings].?
constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x29c; //[DT_HighlightSettings].m_highlightServerActiveStates
