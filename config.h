
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 50;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 500;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */
    { XK_Shift_L,    2000 },
    { XK_Control_L,  100  },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_w,         0,    -1 },
    { XK_a,        -1,     0 },
    { XK_s,         0,     1 },
    { XK_d,         1,     0 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */
    { XK_space,    1 },
    { XK_c,        1 },
    { XK_m,        2 },
    { XK_r,        3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_n,        0 ,    25 },
    { XK_p,        0 ,   -25 },
    { XK_f,        0 ,    80 },
    { XK_b,        0 ,   -80 },
    { XK_l,        25,    0  },
    { XK_h,       -25,    0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */
    { XK_1,        "xdotool mousemove 0 0" },
    { XK_2,        "xdotool mousemove --polar 0 9999" },
    { XK_3,        "xdotool mousemove 9999 0" },
    { XK_4,        "xdotool mousemove --polar 270 9999" },
    { XK_5,        "xdotool mousemove --polar 0 0" },
    { XK_6,        "xdotool mousemove --polar 90 9999" },
    { XK_7,        "xdotool mousemove 0 9999" },
    { XK_8,        "xdotool mousemove --polar 180 9999" },
    { XK_9,        "xdotool mousemove 9999 9999" },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape,
    XK_q,
};
