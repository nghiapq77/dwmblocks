//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/	/*Update Interval*/	/*Update Signal*/
	/* {"music",	0,	11}, */
	//{"pacpackages",	0,	8},
	/* {"crypto",	0,	13}, */
	/* {"torrent",	20,	7}, */
	//{"news",	0,	6},
	//{"weather",	18000,	                5},
	{"internet",	6,	                4},
	{"memory",	3,	                14},
	{"cpu",		3,	                13},
	{"bluetooth",	0,	                5},
	{"lang",	0,	                11},
	{"volume",	0,	                10},
	{"battery",	30,	                3},
	{"clock",	60,	                1},
	{"help-icon",	0,	                15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost */dwmblocks/config.h !sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
