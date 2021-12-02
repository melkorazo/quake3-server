// 0 = bot name
// 1 = random opponent
// 2 = opponent in first place
// 3 = opponent in last place
// 4 = level's title

chat "huntress"
{
	#include "teamplay.h"

	type "game_enter"
	{
		"";
	}

	type "game_exit"
	{
		"";
	}

	type "level_start"
	{
		"";
	}

	type "level_end"
	{
		"gg ", 2;
		"gg";
		"gg ", 2;
		"gg!";
		"gg ", 2;
		"gg";
		"gg ", 2;
		"ggg";
		"lol";
		"gg";
		"gg ", 2;
	}

	type "level_end_victory"
	{
		"HAHA!";
		"LOL!";
		"OMG!!";
	}

	type "level_end_lose"
	{
		"gg";
		"gg ", 2;
		"gg";
		"gg";
		"gg...";
	}

	type "hit_talking"
	{
		"";
	}

	type "hit_nodeath"
	{
		"";
	}

	type "hit_nokill"
	{
		"";
	}

	type "death_telefrag"
	{
		"";
	}

	type "death_cratered"
	{
		"";
	}

	type "death_lava"
	{
		"";
	}

	type "death_slime"
	{
		"";
	}

	type "death_drown"
	{
		"";
	}

	type "death_suicide"
	{
		"";
	}

	type "death_gauntlet"
	{
		"";
	}

	type "death_rail"
	{
		"";
	}

	type "death_bfg"
	{
		"";
	}

	type "death_insult"
	{
		"";
	}

	type "death_praise"
	{
		"";
	}

	type "kill_rail"
	{
		"";
	}

	type "kill_gauntlet"
	{
		"";
	}

	type "kill_telefrag"
	{
		"";
	}

	type "kill_suicide"
	{
		"";
	}

	type "kill_insult"
	{
		"";
	}

	type "kill_praise"
	{
		"";
	}

	type "random_insult"
	{
		"";
	}

	type "random_misc"
	{
		"";
	}
}
