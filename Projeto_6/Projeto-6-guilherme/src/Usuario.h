#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
protected:
    std::string nome;
    std::string email;
    std::string tipo;

public:
    Usuario();
    Usuario(std::string nome, std::string email, std::string tipo);
    virtual ~Usuario() = default;
};

#endif
