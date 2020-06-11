#include "lib0020.h"

long long height_limit(long long M){
    long long l=1;
    long long r=M+1;
    while (l != r) {
        long long m = (l+r)/2 ;
        if (is_broken(m)) r = m;
        else l = m+1;
    }

    return l-1;
}
