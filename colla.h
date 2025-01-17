#pragma once
#ifndef _COLLA_H
# define _COLLA_H

#include <cstdio>
#include <concepts>

#define RG register
#define IL inline
#define TD typedef
#define TN typename
#define TP(...) template <__VA_ARGS__>
#define COLLA(T) RG i main(RG s f) { return collatzm<T>(f); }

TD int i;
TD char c;
TD c* s;


static const c r[2] = "r";

TP(TN T) concept uint = std::is_unsigned<T>;


TP(uint T, T L) union streamt { T ret; c buf[L]; };

TP(uint T, T L = sizeof(T), TN G = streamt<T, L>) IL RG T TFG(RG s f) {
    FILE* fp = fopen(f, r);
    if (fp == NULL) { return (T) NULL; }; //file must be L B.
    
    RG G fv;
    fgets(fv.buf, L, fp); //file must be L B.
    
    fclose(fp);
    return fv.ret;
}

TP(uint T) IL RG T pp(RG T x) {
    x++;
    return x;
}

TP(uint T) IL RG T collatz(RG T x) { return x-1?collatz(x&1?pp(x + x<<1):x>>1):0; }

TP(uint T) IL RG i collatzm(RG s f) { return (i) collatz<T>(TFG<T>(f)); }

#endif