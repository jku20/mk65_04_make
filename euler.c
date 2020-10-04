int one(int lim) {
    int ans = 0;
    int i;
    for(i = 3; i < lim; i++) {
        if(!((i % 3) && (i % 5))) {
            ans += i;
        }
    }

    return ans;
}

int two(int lim) {
    long ans = 0;
    int a = 0;
    int b = 1;
    int tmp;
    while(b < lim) {
        if(!(b&1)) {
            ans += b;
        }
        tmp = a;
        a = b;
        b += tmp;
    }

    return ans;
}

//could be made more efficient with lcm but this is good enough 
int five(int lim) {
    int ans = 1;
    int works = 0;
    int i;
    for(ans = 1;!works; ans++) {
        works = 1;
        for(i = 2; i <= lim; i++) {
            if(ans%i != 0) {
                works = 0;
            }
        }
    }
    ans--;

    return ans;
}

int six(int lim) {
    int square_of_sums = lim*lim*(lim+1)*(lim+1)/4;
    int sum_of_square = lim*(lim+1)*(2*lim+1)/6;
    int ans = square_of_sums-sum_of_square;

    return ans;
}
