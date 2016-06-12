#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char *argv[]){
	// Get the options (-c, -d, -u, some combinations of them, or none at all)
	// ... ...

	// Figure out whether the input is comng from a file 
	// whose name is provided as a command line argument like
	// 	myuniq -c -d sorteddepts.lst
	// or from the stdin like
	// 	mycut .... | mysort ... | myuniq -c -d
	// ... ...
	char filename[] = "emp.lst";
	FILE *file = fopen(filename, "r");
	char line[60];
	char array[20][60];
	int k = 0;
	if(file != NULL)
	{
		while(fgets(line, sizeof line, file) != NULL)
		{
			//fputs(line,stdout);
			strcpy(array[k], line);
			k++;
		}//end of while loop
		fclose(file);
	}//end of if statements	
	int l;
	char curr[60];
	char prev[60];
	for(l = 1; l < k; l++)
	{
		strncpy(curr,array[l],10);
		strncpy(prev,array[l-1],10);
		if(strcmp(curr,prev) == -1)
		{
			printf("%s", array[l]);
		}//end of for loop
	}//end of for loop
	// You may assume the input data are all sorted.
	// Read and record two lines (if any) from input and compare them.
	// Let's call them prev and curr.
	// If they are the same, update the number of repeats;
	// If they are different, output the prev according the options (-c, -d, or -u)
	// Keey doing this until hitting the end of the input. 
	// ... ...

	return 0;
}
