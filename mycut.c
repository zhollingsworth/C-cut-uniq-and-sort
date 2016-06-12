#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	// Gather the command line arguments (options included),
	char mycutStr[25] = "";
	// combine them in one string, 
	int i;
	for(i = 0; i < argc; i++)
	{
		if(i == 0)
			strcat(mycutStr, "cut");
		else
		{
			strcat(mycutStr, " ");
			strcat(mycutStr, argv[i]);
		}//end of else statement		
	}//end of for loop to combine arguments

	// and replace the hardwired "cut ...." in the following system call with it.  
	//system("cut -d! -f3 emp.lst");
	system(mycutStr);

	return 0;
}
