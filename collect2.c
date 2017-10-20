#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char** argv) {
    	double res;
	char *filename;
    	FILE *fd;
	
	FILE *file_sin;
	file_sin = fopen("sin_result2.txt","r");
	double res_sin;
	if(file_sin)
	{
	  fscanf(file_sin, "%lf" , &res_sin );
	  fclose(file_sin);
	}

        FILE *file_cos;
        file_cos = fopen("cos_result2.txt","r");
        double res_cos;
        if(file_cos)
        {
          fscanf(file_cos, "%lf" , &res_cos );
          fclose(file_cos);
        }


	res = res_sin + res_cos;

    	filename = "collect_result2.txt";
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",res);
    	fclose(fd);
}

