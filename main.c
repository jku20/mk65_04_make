#include "euler.h"
#include <stdio.h>

int main() {
    int ans_one = one(1000);
    int ans_two = two(4000000);
    int ans_five = five(20);
    int ans_six = six(100);

    printf("one: %d\ntwo: %d\nfive: %d\nsix: %d\n",ans_one,ans_two,ans_five,ans_six);

    return 0;
}
