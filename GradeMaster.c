/***
	SYSTEM TYPE: Gradebook System
	SYSTEM NAME: GradeMaster
	UI TYPE    : CLI
	CODED BY   : Hunter
***/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>

#define MAX_INPUT_LENGTH 300

// Different Grading System based on Educational Level
double elmntry_grdsystm();
double hghschl_grdsystm();
double cllg_grdsystm();

void header_logo(void){
   	// Get the console output handle
   	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   	// Save the original console color settings
   	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
   	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
   	WORD originalColor = consoleInfo.wAttributes;
   	/*------------------ DESIGNING THE HEADER & LOGO ------------------------*/
   	system("color 0b");	
   	printf("   _____ _____            _____  ______ __  __           _____ _______ ______ _____            \n");
   	printf("  / ____|  __ \\     /\\   |  __ \\|  ____|  \\/  |   /\\    / ____|__   __|  ____|  __ \\     \n");
   	printf(" | |  __| |__) |   /  \\  | |  | | |__  | \\  / |  /  \\  | (___    | |  | |__  | |__) |       \n");
   	printf(" | | |_ |  _  /   / /\\ \\ | |  | |  __| | |\\/| | / /\\ \\  \\___ \\   | |  |  __| |  _  /    \n");
   	printf(" | |__| | | \\ \\  / ____ \\| |__| | |____| |  | |/ ____ \\ ____) |  | |  | |____| | \\ \\     \n");
   	printf("  \\_____|_|  \\_\\/_/    \\_\\_____/|______|_|  |_/_/    \\_\\_____/   |_|  |______|_|  \\_\\ \n");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("                                        V1.0-BETA\n");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	// Set the console color to red
   	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);	
   	printf("\n");
   	printf("            ===============================================================\n");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	// Set the console color to green
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("         |");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	// Set the console background color to grey
   	SetConsoleTextAttribute(hConsole, BACKGROUND_INTENSITY);
   	printf("                 The CLI-Based School Grading System               ");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	// Set the console color to green
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("|\n");
   	 // Set the console color to red
   	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);	
   	printf("            ===============================================================\n");
   	SetConsoleTextAttribute(hConsole, originalColor);
}
void main_options(void){
		// Get the console output handle
   	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   	// Save the original console color settings
   	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
   	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
   	WORD originalColor = consoleInfo.wAttributes;
  	 
   	/*------------------ DESIGNING THE OPTIONS ------------------------*/
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("\n                                    [1]   ");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	printf("ELEMENTARY\n\n");
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("                                    [2]   ");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	printf("HIGH SCHOOL\n\n");
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
   	printf("                                    [3]   ");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	printf("COLLEGE\n");
  	 
   	// Set the console color to red
   	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);	
   	printf("            _______________________________________________________________\n");
   	printf("            ===============================================================\n");
   	SetConsoleTextAttribute(hConsole, originalColor);
   	printf("            ");
	
}
int main(){
	char chsn_educlvl[MAX_INPUT_LENGTH];
		// Get the console output handle
   	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   	// Save the original console color settings
   	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
   	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
   	WORD originalColor = consoleInfo.wAttributes;
    system("cls");
   	header_logo();
   	main_options();
   	printf("Choose the education level: ");
   	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	fgets(chsn_educlvl,sizeof(chsn_educlvl),stdin);
	getch();
	return 0;
}
