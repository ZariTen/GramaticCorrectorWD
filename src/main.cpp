#include <iostream>
#include <string>
#include <dicionario.h>

int main(int argc, char* argv[]){
        //argv[1] = dicionario
        //argv[2] = texto
        std::string dicFile = argv[1];
        dicionario d;

        d.lerArquivo(dicFile);
        return 0;
}
