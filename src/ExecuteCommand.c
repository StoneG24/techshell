#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../lib/cons.h"
#include <errno.h>

void ExecuteCommand(struct CommandInput command) {


	/* build the file path comand for execvp */
	char filepath[10] = "bin/";
	char* runfile = command.command;
	char* runpath = strncat(filepath, runfile, 5);


	/* run the command in a seperate process */
	int status_code = execvp(runpath, command.args);
 
	if (errno == ENOENT){
		printf("Error: %s\n", strerror(errno));
	}
	
	if (errno == EACCES){
		printf("Error: %s\n", sterror(errno));
	}
  
  }
