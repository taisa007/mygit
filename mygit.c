//
// Created by SatoMasaki on 9/13/15 AD.
//
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (!strcmp("-t", argv[1])) {
        fprintf(stderr, "引数が不正です\n");
        exit(1);
    }

    if (mkdir(".mygit", 0755) < 0) {
        perror("unable to create .mygit directory");
        exit(1);
    }
    return 0;
}
