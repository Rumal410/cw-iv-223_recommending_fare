#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct tarif{
int cost;
int web;
int min;
int sms;
};


void tabl(){
struct tarif meg1; meg1.cost =550;  meg1.web =50; meg1.min =600; meg1.sms =250;
struct tarif meg2; meg2.cost =720;  meg2.web =30; meg2.min =900; meg2.sms =600;
struct tarif meg3; meg3.cost =1000;  meg3.web =30; meg3.min =1500; meg3.sms =0;
struct tarif meg4; meg4.cost =2000;  meg4.web =60; meg4.min =9999; meg4.sms =250;
struct tarif meg5; meg5.cost =200;  meg5.web =0; meg5.min =300; meg5.sms =100;

struct tarif mts1; mts1.cost=950; mts1.web=50; mts1.min=500; mts1.sms=500;
struct tarif mts1; mts1.cost=717; mts1.web=30; mts1.min=900; mts1.sms=100;
struct tarif mts1; mts1.cost=600; mts1.web=30; mts1.min=600; mts1.sms=1000;
struct tarif mts1; mts1.cost=1900; mts1.web=100; mts1.min=3500; mts1.sms=2000;
struct tarif mts1; mts1.cost=225; mts1.web=1; mts1.min=500; mts1.sms=100;

struct tarif bil1; bil1.cost=650; bil1.web=60; bil1.min=500; bil1.sms=250;
struct tarif bil2; bil2.cost=580; bil2.web=30; bil2.min=600; bil2.sms=100;
struct tarif bil3; bil3.cost=730; bil3.web=40; bil3.min=900; bil3.sms=999;
struct tarif bil4; bil4.cost=1800; bil4.web=100; bil4.min=999; bil4.sms=1999;
struct tarif bil5; bil5.cost=240; bil5.web=5; bil5.min=500; bil5.sms=100;

struct tarif tel; tel1.cost=800; tel1.web=50; tel1.min=200; tel1.sms=250;
struct tarif tel; tel2.cost=600; tel2.web=30; tel2.min=700; tel2.sms=100;
struct tarif tel; tel3.cost=500; tel3.web=20; tel3.min=400; tel3.sms=500;
struct tarif tel; tel4.cost=900; tel4.web=60; tel4.min=1000; tel4.sms=999;
struct tarif tel; tel5.cost=250; tel5.web=10; tel5.min=500; tel5.sms=500;
return 0;
}


void algo(){
pritf("Я готов!\n");
}
