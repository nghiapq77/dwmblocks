//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	/*Update Interval*/	/*Update Signal*/
	{"",     "internet",	5,	                4},
	{"",     "bluetooth",	10,	                5},
	{"",     "memory",	2,	                14},
	{"",     "cpu",		2,	                13},
        {"",	 "mailbox",	180,	                12},
	{"",     "lang",	0,	                11},
	{"",     "volume",	0,	                10},
	{"",     "battery",	30,	                3},
	{"",     "clock",	60,	                1},
	{"",     "help-icon",	0,	                15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
