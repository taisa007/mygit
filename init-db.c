//
// Created by SatoMasaki on 9/23/15 AD.
//
#include "cache.h"

int cmd_init_db(int argc, const char **argv, const char *prefix)
{
    //const char arg = argv[1];

    if (mkdir(".mygit", 0755) < 0) {
        perror("unable to create .mygit directory");
        exit(1);
    }

    return 0;
}
