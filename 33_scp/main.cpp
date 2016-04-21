#include <stdio.h>
#include <stdlib.h>

	int main(int argc, char **argv){
        char comando[0x30];
        if (argc < 2){
          fprintf(stderr, "Utiliza <fichero>.\n");
          exit(1);
        }


        sprintf(comando, "scp %s alastres.ddns.net:~/recibido", argv[1]);
        system(comando);
        printf(" ");






	return EXIT_SUCCESS;


}
