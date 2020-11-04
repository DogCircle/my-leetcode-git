#define STR_LEN         50

extern void func50(void);

struct ListFunc {
    int id;
    char name[STR_LEN];
    void (*func)(void);
    struct ListFunc *next;
};
