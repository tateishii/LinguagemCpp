#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Operacoes{
    public:
        void cadastro(string nome, string senha, string email, string nivel){
            cout<< "Cadastro de usuário realizado\n";
        }
        string login(string, string senha){
            return "Seja bem vindo!\n";
        }
        string trocarSenha(sting nome, string senha){
            return "Senha alterada\n";
        }
};