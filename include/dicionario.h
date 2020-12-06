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
            return true;
        }

        std::cout << palavra << ":" << std::endl;
        sugerirPalavras(palavra);
        return false;
    }

    void sugerirPalavras(const std::string palavra){
        std::string sugestoes[5];
        
        for(auto& it: palavrasDicionario){
            int distWord = levenshtein<std::string>(palavra,std::string(it.first));    

            if(distWord < 4){
                std::cout << "    -" << it.first << std::endl;
            }
        }

    }

};

#endif
