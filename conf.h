#include "jurt.h"

/* list of tags */
#define TAGS		"xnlhtr01uiva "
#define TAGS_SAVED	""

/* programs mapped to m-c, m-m, m-e */
#define SHELL		{"sh"}
#define EDITOR		{"vi"}
#define MAIL		{"mailx", "-f", "+inbox"}

/* TERM variable for launched programs */
#define TERM		"linux"

/* tinyfont names, specially for fbpads */
#define TFR		ar_tf
#define TFI		ai_tf
#define TFB		ab_tf

# define FR		(&JL_IMPORTF_PREV_START(TFR))
# define FI		(&JL_IMPORTF_PREV_START(TFI))
# define FB		(&JL_IMPORTF_PREV_START(TFB))

/* tinyfont files for regular, italic, and bold fonts */
# define FR_PATH		"./ar.tf"
# define FI_PATH		"./ai.tf"
# define FB_PATH		"./ai.tf"

/* foreground and background colors */
#define FGCOLOR		COLORF
#define BGCOLOR		COLOR0

/* where to write the screen shot */
#define SCRSHOT		"/tmp/scr"

/* lock command password; NULL disables locking */
#define PASS		NULL

/* optimized version of fb_val() */
#define FB_VAL(r, g, b)	fb_val((r), (g), (b))

/* brighten colors 0-7 for bold text */
#define BRIGHTEN	1

/* black */
#define COLOR0		0x000000
#define COLOR8		0x555555
/* red */
#define COLOR1		0xaa0000
#define COLOR9		0xff5555
/* green */
#define COLOR2		0x00aa00
#define COLORA		0x55ff55
/* yellow */
#define COLOR3		0xaa5500
#define COLORB		0xffff55
/* blue */
#define COLOR4		0x0000aa
#define COLORC		0x5555ff
/* magenta */
#define COLOR5		0xaa00aa
#define COLORD		0xff55ff
/* cyan */
#define COLOR6		0x00aaaa
#define COLORE		0x55ffff
/* white */
#define COLOR7		0xaaaaaa
#define COLORF		0xffffff
