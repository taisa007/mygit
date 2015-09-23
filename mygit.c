//
// Created by SatoMasaki on 9/13/15 AD.
//
#include "cache.h"
#include "builtin.h"

#define RUN_SETUP (1<<0)
#define RUN_SETUP_GENTLY (1<<1)
#define USE_PAGER (1<<2)
#define NEED_WORK_TREE (1<<3)
#define NO_SETUP (1<<4)

struct cmd_struct {
    const char *cmd;
    int (*fn)(int, const char **, const char *);
    int option;
};

static struct cmd_struct commands[] = {
        {"init", cmd_init_db, NO_SETUP},
};

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc != 2) {
        fprintf(stderr, "引数を一つ指定してください。");
        exit(1);
    }

    const char *arg = argv[1];

    // コマンドが struct の cmd と一致してたら fn を呼ぶ
    // commandの数の取得は別途実装
    for (i; i < 1; i++) {
        struct cmd_struct *p = commands + i;
        if (!strcmp(arg, p->cmd)) {
            p->fn(argc, argv, 'test');
        }
    }

    return 0;
}
