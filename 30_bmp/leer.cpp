#include <stdio.h>
#include <stdlib.h>


#define MAX 4294967295

struct BMP {
    char Tipo[2];
    int file_size;
    int res1;
    int img_offset;
    int header_size;
    int width;
    int height;
    short bitplanes;
    short point_size;
    int compression;
    int image_size;
    int horz_size;
    int vert_size;
    int palette_size;
    int important_colors;

};


	int main(int argc, const char **argv){

            FILE *pf = NULL;
            struct BMP cabecera[54];
            //struct Datos Estructura;

            pf = fopen(argv[1], "r+");

            if (!pf){
                printf("No puedo leer el archivo %s\n", argv[1]);
                return EXIT_FAILURE;
            }

            fread(&cabecera, sizeof(struct BMP), 1, pf);
            
            for(int i=0; i<54; i++)
                printf("%x ", &cabecera[i]);

            fclose(pf);
	return EXIT_SUCCESS;


}
