#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	// Gather the command line arguments (options included), 
	// combine them in one string,i
	char mysortStr[25] = "";
	int j;
	for(j = 0; j < argc; j++)
	{
		if(j == 0)
			strcat(mysortStr, "sort");
		else
		{
			strcat(mysortStr, " ");
			strcat(mysortStr, argv[j]);
		}//end of else statement
	}//end of for loop
 
	// and replace the hardwired "sort ...." in the following system call with it.  
	//system("sort");
	system(mysortStr);
	return 0;
}
