#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char** argv) {
    	double res;
	//double valor;
    	char *filename;
    	FILE *fd;
	//valor = atof(argv[1]);
    	//x = cos( valor * (PI/180)  );
	
	FILE *file_sin;
	file_sin = fopen("sin_result.txt","r");
	double res_sin;
	if(file_sin)
	{
	  //while(( res_sin = getc(file_sin)) != EOF)
	  fscanf(file_sin, "%lf" , &res_sin );
	  fclose(file_sin);
	}

        FILE *file_cos;
        file_cos = fopen("cos_result.txt","r");
        double res_cos;
        if(file_cos)
        {
          //while(( res_cos = getc(file_cos)) != EOF)
          fscanf(file_cos, "%lf" , &res_cos );
          fclose(file_cos);
        }


	res = res_sin + res_cos;
	//cos= atof();
	//res = cos + sin;

    	filename = "collect_result.txt";
    	fd = fopen(filename,"w");
    	if (fd == NULL) {
            	printf("File can not be created\n");
            	exit(-1);
    	}
    	fprintf(fd,"%lf",res);
    	fclose(fd);
}

