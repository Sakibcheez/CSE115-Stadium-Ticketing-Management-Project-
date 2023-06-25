//Sakib Ahmed Shishir Project
//CSE115-4
//Stadium Ticketing Management system

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"splash.h"
#include"login.h"
#include"menu.h"


int main(void)
{
    int choice;
  //  system("COLOR F0");
    recursive_loading(0);
    printSplashScreen();
    system("D:\\agwxa-h4723.jpg");
    sleep(3);
    system("cls");


    LoginProcess();

    sleep(1);
    system("cls");
    system("E:\\CSE115-Stadium-Ticketing-Management-Project-agwxa-h4723.jpg");

    homepage();

    char str[100];
    changecase(str);

    return 0;

}

