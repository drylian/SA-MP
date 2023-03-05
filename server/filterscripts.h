/*

	SA:MP Multiplayer Modification
	Copyright 2004-2006 SA:MP Team

	file:
		filterscripts.h
	desc:
		FilterScript functions and management header file. 
*/

#ifndef SAMPSRV_FILTERSCRIPTS_H
#define SAMPSRV_FILTERSCRIPTS_H

//----------------------------------------------------------------------------------

class CFilterScripts
{
private:
	AMX* m_pFilterScripts[MAX_FILTER_SCRIPTS];
	char m_szFilterScriptName[MAX_FILTER_SCRIPTS][255];
	int m_iFilterScriptCount;
	//CScriptTimers* m_pScriptTimers;
public:
	CFilterScripts();
	~CFilterScripts();

	//CScriptTimers* GetTimers() { return m_pScriptTimers; };

	bool LoadFilterScript(char* pFileName);
	bool LoadFilterScriptFromMemory(char* pFileName, char* pFileData);
	bool UnloadOneFilterScript(char* pFilterScript);
	void RemoveFilterScript(int iIndex);
	void UnloadFilterScripts();
	void Frame(float fElapsedTime);
	
	AMX* GetFilterScript(DWORD dwIndex) { return m_pFilterScripts[dwIndex]; };

	int CallPublic(char* szFuncName);

	int OnGameModeInit();
	int OnGameModeExit();
	int OnPlayerConnect(cell playerid);
	int OnPlayerDisconnect(cell playerid, cell reason);
	int OnPlayerSpawn(cell playerid);
	int OnPlayerDeath(cell playerid, cell killerid, cell reason);
	int OnVehicleSpawn(cell vehicleid);
	int OnVehicleDeath(cell vehicleid, cell killerid);
	int OnPlayerText(cell playerid, unsigned char * szText);
	//int OnPlayerPrivmsg(cell playerid, cell toplayerid, unsigned char * szText);
	//int OnPlayerTeamPrivmsg(cell playerid, unsigned char * szText);
	int OnPlayerCommandText(cell playerid, unsigned char * szCommandText);
	int OnPlayerInfoChange(cell playerid); // unused
	int OnPlayerRequestClass(cell playerid, cell classid);
	int OnPlayerRequestSpawn(cell playerid);
	int OnPlayerEnterVehicle(cell playerid, cell vehicleid, cell ispassenger);
	int OnPlayerExitVehicle(cell playerid, cell vehicleid);
	int OnPlayerStateChange(cell playerid, cell newstate, cell oldstate);
	int OnPlayerEnterCheckpoint(cell playerid);
	int OnPlayerLeaveCheckpoint(cell playerid);
	int OnPlayerEnterRaceCheckpoint(cell playerid);
	int OnPlayerLeaveRaceCheckpoint(cell playerid);
	int OnRconCommand(char* szCommand);
	int OnObjectMoved(cell objectid);
	int OnPlayerObjectMoved(cell playerid, cell objectid);
	int OnPlayerPickedUpPickup(cell playerid, cell pickupid);
	int OnPlayerExitedMenu(cell playerid);
	int OnPlayerSelectedMenuRow(cell playerid, cell row);
	int OnVehicleRespray(cell playerid, cell vehicleid, cell color1, cell color2);
	int OnVehicleMod(cell playerid, cell vehicleid, cell componentid);
	int OnEnterExitModShop(cell playerid, cell enterexit, cell interiorid);
	int OnVehiclePaintjob(cell playerid, cell vehicleid, cell paintjobid);
	int OnPlayerInteriorChange(cell playerid, cell newid, cell oldid);
	int OnPlayerKeyStateChange(cell playerid, cell newkeys, cell oldkeys);
	int OnScriptCash(cell playerid, cell amount, cell type);
	int OnRconLoginAttempt(char* ip, char* password, cell success);
	int OnPlayerUpdate(cell playerid);
	int OnPlayerStreamIn(cell playerid, cell forplayerid);
	int OnPlayerStreamOut(cell playerid, cell forplayerid);
	int OnVehicleStreamIn(cell vehicleid, cell forplayerid);
	int OnVehicleStreamOut(cell vehicleid, cell forplayerid);
	int OnActorStreamIn(cell actorid, cell forplayerid);
	int OnActorStreamOut(cell actorid, cell forplayerid);
	int OnDialogResponse(cell playerid, cell dialogid, cell response, cell listitem, char* inputtext);
	int OnPlayerClickPlayer(cell playerid, cell clickedplayerid, cell source);
	int OnPlayerTakeDamage(cell playerid, cell issuerid, float amount, cell weaponid, cell bodypart);
	int OnPlayerGiveDamage(cell playerid, cell damagedid, float amount, cell weaponid, cell bodypart);
	int OnPlayerGiveDamageActor(cell playerid, cell damaged_actorid, float amount, cell weaponid, cell bodypart);
	int OnVehicleDamageStatusUpdate(cell vehicleid, cell playerid);
	int OnUnoccupiedVehicleUpdate(cell vehicleid, cell playerid, cell passenger_seat, VECTOR* vecPos, VECTOR* vecVelocity);
	int OnPlayerClickMap(cell playerid, float fX, float fY, float fZ);
	int OnPlayerEditAttachedObject(cell playerid, cell index, cell response, OBJECT_EDIT_DATA* pEditData);
	int OnPlayerEditObject(cell playerid, cell playerobject, cell objectid, cell response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ);
	int OnPlayerSelectObject(cell playerid, cell type, cell objectid, cell modelid, float fX, float fY, float fZ);
	int OnPlayerClickTextDraw(cell playerid, cell clickedid);
	int OnPlayerClickPlayerTextDraw(cell playerid, cell playertextid);
	int OnClientCheckResponse(cell playerid, cell type, cell addr, cell result);
	int OnPlayerWeaponShot(cell playerid, cell weaponid, cell hittype, cell hitid, VECTOR* vecPos);
	int OnIncomingConnection(cell playerid, char* ip_address, cell port);
	int OnTrailerUpdate(cell playerid, cell vehicleid);
	int OnVehicleSirenStateChange(cell playerid, cell vehicleid, cell newstate);
};

//----------------------------------------------------------------------------------

#endif

