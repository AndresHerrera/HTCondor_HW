#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    	double x;
    	char *filename;
    	FILE *fd;
    	x = atof(argv[1]);
    	filename = "number.txt";
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",x);
    	fclose(fd);
}

