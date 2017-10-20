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
        
        FILE *file_input;
        file_input = fopen("number.txt","r");
        double res_number;
        if(file_input)
        {
          fscanf(file_input, "%lf" , &res_number );
          fclose(file_input);
        }

    	x = sin( res_number * (PI/180)  );
    	filename = "sin_result2.txt";
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf", (x*x) );
    	fclose(fd);
}

