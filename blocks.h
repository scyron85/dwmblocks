//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"sb-music",		0,			11},
	{"",		"sb-crypto",		100,			6},
	{"",		"sb-forex",		200,			5},
	{"",		"sb-kbselect",		3,			16},
	{"",		"sb-disk",		900,			7},
	{"",		"sb-memory",		10,			14},
	{"",		"sb-cputemp",		4,			20},
	{"",		"sb-cpu",		3,			18},
	/* {"",		"sb-moonphase",		18000,			17}, */
/*	{"",		"sb-mailbox",		180,			12}, */
	{"",		"sb-nettraf",		1,			16},
	{"",		"sb-wifi",		2,			2},
	{"",		"sb-volume",		0,			10},
/*	{"",		"sb-battery",		5,			3}, */
	{"",		"sb-clock",		60,			1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
