#ifndef DICT_HPP
#define DICT_HPP
#include <unordered_set>
#include <string>
#include <levenshtein.h>
#include <fstream>
#include <iostream>
#include <cstdio>

struct dicionario{
    unordered_set<std::string> palavrasDicionario; 

    //Adicionar as palavras ao dicionario
    void lerArquivo(std::string nome){
        std::string line;
        std::ifstream input(nome);
        while(std::getline(input,line)){
            palavrasDicionario.insert(line); 
        }

    }

    bool verificarExistencia(std::string palavra){

        return false;
    }

    void sugerirPalavras(std::string palavra){


    }

};

#endif
