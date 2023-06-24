#ifndef SPLASH_H
#define SPLASH_H

#include <stdio.h>
#include<unistd.h> //standard symbolic constants and types


void printSplashScreen(void)
{


    FILE *ptr;

    ptr = fopen("splash.txt","r");

    if(ptr == NULL)
	{
        printf("Failed to open the file \n");
        return ;
    	}

    char ch[500];
   
    while(fgets(ch,500,ptr))
	{
        printf("%s",ch);
        usleep(100000);
    	}

	    fclose(ptr);

}

#endif