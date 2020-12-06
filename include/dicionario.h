#ifndef DICT_HPP
#define DICT_HPP
#include <unordered_map>
#include <string>
#include <levenshtein.h>
#include <fstream>
#include <iostream>
#include <cstdio>

struct dicionario{
    std::unordered_map<std::string,std::string> palavrasDicionario; 

    //Adicionar as palavras ao dicionario
    void lerArquivo(std::string nome){
        std::string line;
        std::ifstream input(nome);
        while(std::getline(input,line)){
            palavrasDicionario.insert({line,line}); 
        }
        input.close();

    }

    bool verificarExistencia(std::string palavra){
        if (palavrasDicionario.count(palavra)){
            std::cout << "Palavra achada" << std::endl;
            return true;
        }

        std::cout << "Palavra não achada" << std::endl;
        return false;
    }

    void sugerirPalavras(std::string palavra){


    }

};

#endif
