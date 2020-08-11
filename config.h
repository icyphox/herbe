static const char *background_color = "#3e3e3e";
static const char *border_color = "#ececec";
static const char *font_color = "#ececec";
static const char *font_pattern = "Inconsolata:style=Medium:size=12";
static const unsigned line_spacing = 5;
static const unsigned int padding = 15;

static const unsigned int width = 450;
static const unsigned int border_size = 2;
static const unsigned int pos_x = 30;
static const unsigned int pos_y = 60;

enum corners { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };
enum corners corner = TOP_RIGHT;

static const unsigned int duration = 5; /* in seconds */

#define KEY "q" // Delete this line to disable dismiss with shortcut
#define MOD Mod1Mask
