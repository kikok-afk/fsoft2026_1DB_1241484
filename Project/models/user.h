//
// Created by kikok on 11/06/2026.
//

#ifndef UTILIZADOR_H
#define UTILIZADOR_H

#include <string>

class Utilizador {
protected:
    std::string username;
    std::string password;

public:
    Utilizador(std::string uname, std::string pass);
    virtual ~Utilizador() = default;

    std::string getUsername() const;
    bool validarPassword(std::string pass) const;
};

class Administrador : public Utilizador {
public:
    Administrador(std::string uname, std::string pass);
};

class Cliente : public Utilizador {
private:
    std::string email;

public:
    Cliente(std::string uname, std::string pass, std::string mail);
    std::string getEmail() const;
};

