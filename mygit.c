//
// Created by SatoMasaki on 9/13/15 AD.
//
#include "cache.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "引数を一つ指定してください。");
        exit(1);
    }

    const char *arg = argv[1];

    if (!strcmp(arg, "init")) {
        if (mkdir(".mygit", 0755) < 0) {
            perror("unable to create .mygit directory");
            exit(1);
        }
    } else {
        printf("view usage");
    }

    return 0;
}
