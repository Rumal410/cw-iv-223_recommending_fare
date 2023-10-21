#pragma once
#include<stdlib.h>
#include<stdio.h>

struct tarif {
    int cost;
    int web;
    int min;
    int sms;
};

struct tarif meg(int m1);
 
struct tarif mts(int m1);


struct tarif tel(int m1);


struct tarif bil(int m1);
