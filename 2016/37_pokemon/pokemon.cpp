#include <stdio.h>
#include <stdlib.h>

	int main(int argc, const char **argv){
          char comando[200];

        for(int i = 1; i<10; i++){
            sprintf(comando, "wget http://guidesmedia.ign.com/guides/059687/images/blackwhite/pokemans_00%d.gif", i);
            system(comando);
        }

        for(int i = 10; i<99; i++){
            sprintf(comando, "wget http://guidesmedia.ign.com/guides/059687/images/blackwhite/pokemans_0%d.gif", i);
            system(comando);
        }

        for(int i = 100; i<152; i++){
            sprintf(comando, "wget http://guidesmedia.ign.com/guides/059687/images/blackwhite/pokemans_%d.gif", i);
            system(comando);
        }



	return EXIT_SUCCESS;


}
