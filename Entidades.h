#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario
{
private:
    Nome nome; // Declarar cada atributo da classe.
    Matricula matricula;
    Senha senha;

public:
    void setNome(const Nome &); // Declarar m�todo set para cada atributo.
    Nome getNome() const;     // Declarar m�todo get para cada atributo.
    void setMatricula(const Matricula &); // Declarar m�todo set para cada atributo.
    Matricula getMatricula() const;   // Declarar m�todo get para cada atributo.
    void setSenha(const Senha &); // Declarar m�todo set para cada atributo.
    Senha getSenha() const;       // Declarar m�todo get para cada atributo.
};

inline void Usuario::setNome(const Nome &nome)
{
    this->nome = nome;
}

inline Nome Usuario::getNome() const
{
    return nome;
}

inline void Usuario::setMatricula(const Matricula &matricula)
{
    this->matricula = matricula;
}

inline Matricula Usuario::getMatricula() const
{
    return matricula;
}

inline void Usuario::setSenha(const Senha &senha)
{
    this->senha = senha;
}

inline Senha Usuario::getSenha() const
{
    return senha;
}

//==========================================================================

class Projeto
{
private:
    Texto nome;
    Codigo codigo;
    Texto descricao;

public:
    void setNome(const Texto &);
    Texto getNome() const;

    void setCodigo(const Codigo &);
    Codigo getCodigo() const;

    void setTexto(const Texto &);
    Texto getTexto() const;
};

inline void Projeto::setNome(const Texto &nome)
{
    this->nome = nome;
}

inline Texto Projeto::getNome() const
{
    return nome;
}

inline void Projeto::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
}

inline Codigo Projeto::getCodigo() const
{
    return codigo;
}

inline void Projeto::setTexto(const Texto &descricao)
{
    this->descricao = descricao;
}

inline Texto Projeto::getTexto() const
{
    return descricao;
}

//==================================================================================

class Tarefa
{
private:
    Texto nome;
    Codigo codigo;
    Data inicio;
    Data termino;
    Disciplina disciplina;

public:
    void setNome(const Texto &);
    Texto getNome() const;

    void setCodigo(const Codigo &);
    Codigo getCodigo() const;

    void setInicio(const Data &);
    Data getInicio() const;

    void setTermino(const Data &);
    Data getTermino() const;

    void setDisciplina(const Disciplina &);
    Disciplina getDisciplina() const;
};

inline void Tarefa::setNome(const Texto &nome)
{
    this->nome = nome;
}

inline Texto Tarefa::getNome() const
{
    return nome;
}

inline void Tarefa::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
}

inline Codigo Tarefa::getCodigo() const
{
    return codigo;
}

inline void Tarefa::setInicio(const Data &inicio)
{
    this->inicio = inicio;
}

inline Data Tarefa::getInicio() const
{
    return inicio;
}

inline void Tarefa::setTermino(const Data &termino)
{
    this->termino = termino;
}

inline Data Tarefa::getTermino() const
{
    return termino;
}

inline void Tarefa::setDisciplina(const Disciplina &disciplina)
{
    this->disciplina = disciplina;
}

inline Disciplina Tarefa::getDisciplina() const
{
    return disciplina;
}


#endif // ENTIDADES_H_INCLUDED
