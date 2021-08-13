#ifndef Z_BG_DKJAIL_IVY_H
#define Z_BG_DKJAIL_IVY_H

#include "global.h"

struct BgDkjailIvy;

typedef void (*BgDkjailIvyActionFunc)(struct BgDkjailIvy*, GlobalContext*);

typedef struct BgDkjailIvy {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char unk_144[0x64];
    /* 0x01A8 */ BgDkjailIvyActionFunc actionFunc;
    /* 0x01AC */ char unk_1AC[0x4];
} BgDkjailIvy; // size = 0x1B0

extern const ActorInit Bg_Dkjail_Ivy_InitVars;

#endif // Z_BG_DKJAIL_IVY_H
