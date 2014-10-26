// ChangeColorOnCMD.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
/*
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
*/
#include "stdafx.h"
#include <conio.h>
#include <windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
		  /*printf( "\x1b[31m"     "This text is RED!"     "\x1b[0m" "\n");
		  printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
		  printf(ANSI_COLOR_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
		  printf(ANSI_COLOR_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
		  printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
		  printf(ANSI_COLOR_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");*/
 /*   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;


    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	SetConsoleTextAttribute(hConsole, BACKGROUND_WHITE);
    printf("This is some nice COLORFUL text, isn't it?");

    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("Back to normal");

		  getch();
		  			return 0;

*/
     int count;
     HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      
     for (count=0; count<257; count++)
     {   SetConsoleTextAttribute(hConsole, count);
          printf ("This color combination has the number of %i\n",count); 
     }
      
     SetConsoleTextAttribute(hConsole, 7);
     system ("pause");
     return 0;
}
