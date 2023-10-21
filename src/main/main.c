
#include"../libtrpo/opr.h"
#include"../libtrpo/menu.h"
#include"../libtrpo/command.h"



int main(){
int vr, m=0;

system("clear\n");
 printf("_______________________________________________________\n");
 printf("|  ▄███▀▀▀▀▀███▄                                      | \n");
 printf("|  █▀▀▀▀▀▀▀▀▀▀▀█                                      | \n");
 printf("|  █░░█▀▀▀▀▀█░░█                  (Оптимальный)       | \n");
 printf("|  █░░█░░░░░█░░█                     \\(0^0)/          | \n");
 printf("|  █░░█░░░░░█░░█                 (Тарифный план)      | \n");
 printf("|  █░░█░░░░░█░░█                                      | \n");
 printf("|  █░░▀▀▀▀▀▀▀░░█                                      | \n");
 printf("|  █▀▀▀▀▀▀▀▀▀▀▀█                     (1.START)        | \n");
 printf("|  █░░▀░░▀░░▀░░█                                      | \n");
 printf("|  █░░▀░░▀░░▀░░█                      (2.xXx)         | \n");
 printf("|  █░░▀░░▀░░▀░░█                     (3.OLIST)        | \n");
 printf("|  █▄▄▄▄▄▄▄▄▄▄▄█                   (4.DEVELOPERS)     | \n");
 printf("|  ▀███████████▀                      (5.EXIT)        | \n");
 printf("|_____________________________________________________| \n");
 printf("| Пожалуста, выберите нужный пункт меню:              | \n");
 printf("|_____________________________________________________| \n");
  scanf("%d", &vr);

 system("clear\n");

if(vr == 1){
int v=0;
  v =opr1();

if(v==2){
 printf("|____________________________________________________________|\n");
 printf("|Ну и что тогда ты тут делаешь?                              |\n");
 printf("|____________________________________________________________|\n");
return (0);}

  m= opr2(m);
int m1=opr3(m);
if(m1==0){printf("Нет/n");}

    if (m1 > 10 && m1 < 46) {struct tarif result_meg = meg(m1);  printf("Meg: %d , %d , %d , %d\n", result_meg.cost, result_meg.web, result_meg.min, result_meg.sms);}
    if (m1 > 20 && m1 < 46) {struct tarif result_mts = mts(m1);  printf("Meg: %d , %d , %d , %d\n", result_mts.cost, result_mts.web, result_mts.min, result_mts.sms);}
    if (m1 > 30 && m1 < 46) {struct tarif result_tel = tel(m1);  printf("TEL: %d , %d , %d , %d\n", result_tel.cost, result_tel.web, result_tel.min, result_tel.sms);}
    if (m1 > 40 && m1 < 46) {struct tarif result_bil = bil(m1);  printf("BIL: %d , %d , %d , %d\n", result_bil.cost, result_bil.web, result_bil.min, result_bil.sms);}


}


if (vr==2){Non_main_menu2();}
if (vr==3){Non_main_menu3();}
if (vr==4){Non_main_menu4();}
if (vr>4){return 0;}
return 0;}
