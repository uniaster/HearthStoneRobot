#pragma once
enum STATE
{
	STATE_STARTGAME,
	STATE_CHANGECARDSTART,
	STATE_CHANGECARDEND,
	STATE_FIGHTSTART,
	STATE_SELFTURN_PLAY,
	STATE_SELFTURN_FIGHT,
	STATE_OTHERTURN
};
const int OutsideX = 1500;
const int OutsideY = 1000;