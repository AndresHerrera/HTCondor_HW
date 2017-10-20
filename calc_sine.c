#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char** argv) {
    	double x;
	double valor;
    	char *filename;
    	FILE *fd;
	valor = atof(argv[1]);
    	x = sin( valor * (PI/180)  );
    	filename = "sin_result.txt";
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",(x*x));
    	fclose(fd);
}

