#ifndef SPLASH_H
#define SPLASH_H

#include <stdio.h>
#include<unistd.h> //standard symbolic constants and types
#include<dos.h>

void recursive_loading(int progress)
{
    //Loading bar
    if(progress > 100)
    {
        return;
    }

    //Code to be executed
    printf("\t\t\t\t\t\t Project Loading in [%d%%] \t\t\t\t\t\t", progress);
    fflush(stdout);
    usleep(10000);
    printf("\r");

    //Recursion call to the function
    recursive_loading(progress + 1);
}
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
