#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]) {
    struct rtcdate r;
    //printf(1, "SOME TIME = ");
    date(&r);
    printf(1, "%d:%d ", r.hour, r.minute);
    printf(1, " %d-%d-%d\n", r.day, r.month, r.year);
    exit();
}
