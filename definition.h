#ifndef _DEFS__H
#define _DEFS__H

#define WINDOW_TITLE "Hello World!"
#define SCREEN_WIDTH          1280
#define SCREEN_HEIGHT         720

#define PLAYER_SPEED          10
#define PLAYER_BULLET_SPEED   16
#define PLAYER_RELOAD         30
#define MAX_KEYBOARD_KEYS     350

#define SIDE_PLAYER 0
#define SIDE_ALIEN  1

#define FRAME_PER_SECOND      60

#define ENEMY_BULLET_SPEED    8

#define MAX_STARS   500

#define BG_COLOR_R 96
#define BG_COLOR_G 128
#define BG_COLOR_B 255
#define BG_COLOR_A 255

const char*  BLAST_SPRITE_FILE = "blast.png";
const int BLAST_CLIPS[][4] = {
    {0,   0, 75, 90},
    {75,  0, 75, 90},
    {160, 0, 75, 90},
    {240, 0, 75, 90},
    {320, 0, 75, 90},
    {400, 0, 75, 90},

    {0,   80, 75, 75},
    {75,  80, 75, 75},
    {160, 80, 75, 75},
    {240, 80, 75, 75},
    {320, 80, 75, 75},
    {400, 80, 75, 75},

    {0,   160, 75, 75},
    {75,  160, 75, 75},
    {160, 160, 75, 75},
    {240, 160, 75, 75},
    {320, 160, 75, 75},
    {400, 160, 75, 75},

    {0,   243, 75, 75},
    {75,  243, 75, 75},
    {160, 243, 75, 75},
    {240, 243, 75, 75},
    {320, 243, 75, 75},
    {400, 243, 75, 75},

    {0,   320, 75, 75},
    {75,  320, 75, 75},
    {160, 320, 75, 75},
    {240, 320, 75, 75},
    {320, 320, 75, 75},
    {400, 320, 75, 75},

    {0,   400, 75, 75},
    {75,  400, 75, 75},

};
const int BLAST_FRAMES = sizeof(BLAST_CLIPS)/sizeof(int)/4;

#endif
