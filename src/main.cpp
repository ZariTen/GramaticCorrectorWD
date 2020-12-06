#include <iostream>
#include <string>
#include <dicionario.h>
#include <fstream>

int main(int argc, char* argv[]){
        //argv[1] = dicionario
        //argv[2] = texto
        if (argc < 3) {
            std::cout << "Uso: ./programa <local do dicionario> <local do texto>" << std::endl;
            return 1;
        }

        std::string dicFile = argv[1];
        std::string txtFile = argv[2];
        dicionario d;

        d.lerArquivo(dicFile);

        std::ifstream file(txtFile);
        std::string temp;

        while(std::getline(file,temp,' ')){
            temp.erase(std::remove(temp.begin(),temp.end(),','),temp.end()); 
            temp.erase(std::remove(temp.begin(),temp.end(),'.'),temp.end()); 
            temp.erase(std::remove(temp.begin(),temp.end(),'\n'),temp.end()); 
            d.verificarExistencia(temp);
        }

        return 0;
}
