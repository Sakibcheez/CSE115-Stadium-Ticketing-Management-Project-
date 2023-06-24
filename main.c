#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"splash.h"
#include"login.h"
#include"menu.h"


int main(void)
{
    int choice;
   //system("COLOR F0");
   printSplashScreen();
   sleep(3);
    system("cls");


   LoginProcess();

    sleep(1);
    system("cls");

    homepage();

    char str[100];
    changecase(str);

    return 0;

}

