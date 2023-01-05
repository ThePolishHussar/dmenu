/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};
static char normfgcolor[] = "#ebdbb2";
static char normbgcolor[] = "#1d2021";
static char selfgcolor[]  = "#ebdbb2";
static char selbgcolor[]  = "#458488";
static char *colors[SchemeLast][2] = {
		     /*	    fg		    bg     */
	[SchemeNorm] = { normfgcolor,	normbgcolor },
	[SchemeSel]  = { selfgcolor,	selbgcolor  },
	[SchemeOut]  = { selfgcolor,	"#83a598" },
};
static const unsigned int alpha = 0xf0;
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

static int topbar = 1;
static int centered = 1;
static int min_width = 500;
static int restrict_return = 0;
static int fuzzy = 1;
static char *prompt      = NULL;
static unsigned int lines      = 10;
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;
static unsigned int preselected = 0;

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
	{ "font",		STRING,		&font },
	{ "foreground",		STRING,		&normfgcolor },
	{ "background",		STRING,		&normbgcolor },
	{ "selforeground",	STRING,		&selfgcolor },
	{ "selbackground",	STRING,		&selbgcolor },
	{ "lines",		INTEGER,	&lines },
	{ "lineheight",		INTEGER,	&lineheight },
	{ "centered",		INTEGER,	&centered },
	{ "topbar",		INTEGER,	&topbar },
};

/* Characters not considered part of a word while deleting words
 * for example: " /?\"&[]" */
static const char worddelimiters[] = " ";
