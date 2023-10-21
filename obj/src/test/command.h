#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void meg(int m){
 struct tarif{
int cost;
int web;
int min;
int sms;
};

struct tarif meg1; meg1.cost =550;  meg1.web =50; meg1.min =600; meg1.sms =250;
struct tarif meg2; meg2.cost =720;  meg2.web =30; meg2.min =900; meg2.sms =600;
struct tarif meg3; meg3.cost =1000;  meg3.web =30; meg3.min =1500; meg3.sms =0;
struct tarif meg4; meg4.cost =2000;  meg4.web =60; meg4.min =9999; meg4.sms =250;
struct tarif meg5; meg5.cost =200;  meg5.web =0; meg5.min =300; meg5.sms =100;
if(m==11){
system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =МЕГАТАРИФ=                  |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", meg1.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", meg1.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", meg1.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", meg1.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==12){
system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =МАКСИМУМ=                   |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", meg2.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", meg2.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", meg2.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", meg2.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==13){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =VIP=                        |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", meg3.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                          |\n", meg3.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                             |\n", meg3.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                            |\n", meg3.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==14){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПРЕМИУМ=                    |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", meg4.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                          |\n", meg4.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", meg4.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", meg2.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==15){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПЕНСИЯ=                     |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                           |\n", meg5.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", meg5.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", meg5.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", meg5.cost);
   printf("|_______________|_________________________________________|\n");
}}

void mts(int m){
 struct tarif{
int cost;
int web;
int min;
int sms;
};

struct tarif mts1; mts1.cost=950; mts1.web=50; mts1.min=500; mts1.sms=500;
struct tarif mts2; mts2.cost=717; mts2.web=30; mts2.min=900; mts2.sms=100;
struct tarif mts3; mts3.cost=600; mts3.web=30; mts3.min=600; mts3.sms=1000;
struct tarif mts4; mts4.cost=1900; mts4.web=100; mts4.min=3500; mts4.sms=2000;
struct tarif mts5; mts5.cost=225; mts5.web=1; mts5.min=500; mts5.sms=100;
if(m==21){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =МЫ МТС=                     |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", mts1.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", mts1.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", mts1.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", mts1.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==22){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =НЕТАРИФ=                    |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", mts2.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", mts2.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", mts2.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", mts2.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==23){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ТАРИФИЩЕ=                   |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", mts3.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", mts3.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                          |\n", mts3.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", mts3.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==24){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ULTRA=                      |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                         |\n", mts4.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                          |\n", mts4.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                          |\n", mts4.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                            |\n", mts4.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==25){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПЕНСИЯ=                     |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                           |\n", mts5.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", mts5.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", mts5.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", mts5.cost);
   printf("|_______________|_________________________________________|\n");
}}

void tel(int m){
 struct tarif{
int cost;
int web;
int min;
int sms;
};

struct tarif tel1; tel1.cost=800; tel1.web=50; tel1.min=200; tel1.sms=250;
struct tarif tel2; tel2.cost=600; tel2.web=30; tel2.min=700; tel2.sms=100;
struct tarif tel3; tel3.cost=500; tel3.web=20; tel3.min=400; tel3.sms=500;
struct tarif tel4; tel4.cost=900; tel4.web=60; tel4.min=1000; tel4.sms=999;
struct tarif tel5; tel5.cost=250; tel5.web=10; tel5.min=500; tel5.sms=500; 

if(m==31){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =BLACK=                      |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", tel1.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", tel1.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", tel1.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", tel1.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==32){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =МОЙ ОНЛАЙН=                 |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", tel2.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", tel2.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", tel2.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", tel2.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==33){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =МОЙ РАЗГОВОР=               |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", tel3.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", tel3.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", tel3.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", tel3.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==34){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ИГРОВОЙ=                    |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", tel4.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                          |\n", tel4.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", tel4.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", tel4.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==35){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПЕНСИЯ=                     |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", tel5.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", tel5.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", tel5.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", tel5.cost);
   printf("|_______________|_________________________________________|\n");
}}

void bil(int m){
 struct tarif{
int cost;
int web;
int min;
int sms;
};

struct tarif bil1; bil1.cost=650; bil1.web=60; bil1.min=500; bil1.sms=250;
struct tarif bil2; bil2.cost=580; bil2.web=30; bil2.min=600; bil2.sms=100;
struct tarif bil3; bil3.cost=730; bil3.web=40; bil3.min=900; bil3.sms=999;
struct tarif bil4; bil4.cost=1800; bil4.web=100; bil4.min=999; bil4.sms=1999;
struct tarif bil5; bil5.cost=240; bil5.web=5; bil5.min=500; bil5.sms=100;
if(m==41){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =БЯЗЯ=                       |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", bil1.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", bil1.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", bil1.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", bil1.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==42){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ЮНГ=                        |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", bil2.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", bil2.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", bil2.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", bil2.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==43){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПУШ=                        |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                          |\n", bil3.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", bil3.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", bil3.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", bil3.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==44){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =НА МАКСИМУМ=                |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                         |\n", bil4.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", bil4.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                          |\n", bil4.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                            |\n", bil4.cost);
   printf("|_______________|_________________________________________|\n");
}
if(m==45){system("clear\n");
   printf("___________________________________________________________\n");
   printf("|  ▄▄█▀▀▀▀▀█▄▄  |                                         |\n");
   printf("|▄█▀  ▄▄     ▀█▄|имя тарифа: =ПЕНСИЯ=                     |\n");
   printf("|█   ███       █|                                         |\n");
   printf("|█   ██▄       █|Трфик:  %dГбайт                           |\n", bil5.web);
   printf("|█    ▀██▄ ██  █|                                         |\n");
   printf("|█      ▀███▀  █|Минуты: %dмин                           |\n", bil5.min);
   printf("|▀█▄         ▄█▀|                                         |\n");
   printf("| ▄█   ▄▄▄▄█▀▀  |СМС:    %dsms                           |\n", bil5.sms);
   printf("| █  ▄█▀        |                                         |\n");
   printf("| ▀▀▀▀          |Цена:   %dp                             |\n", bil5.cost);
   printf("|_______________|_________________________________________|\n");
}}
     
       
