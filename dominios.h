#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

//--------------------------------------------------------------------------------------------

class Codigo
{
private:
    string codigo;
    void validar(string);

public:
    void setCodigo(string n);
    string getCodigo();
};

inline string Codigo::getCodigo()
{
    return codigo;
};

class Data
{
private:
    bool bissexto;
    string data;
    void validar(string);

public:
    bool getBissexto();
    void setData(string n);
    string getData();
};

inline bool Data::getBissexto()
{
    return bissexto;
};

inline string Data::getData()
{
    return data;
};

class Matricula
{
private:
    string matricula;
    void validar(string);

public:
    void setMatricula(string n);
    string getMatricula();
};

inline string Matricula::getMatricula()
{
    return matricula;
};

class Nome
{
private:
    static const long unsigned int LIMITE = 20; // Declara��o para evitar n�meros m�gicos.
    string nome;
    void validar(string);

public:
    void setNome(string n);
    string getNome();
};

///
/// @brief
///
class Senha
{
private:
    static const long unsigned int TAMANHO_MAXIMO = 6;
    string senha;

protected:
    ///
    /// @brief Método para validar se a senha corresponde aos padrões, lança uma exceção em caso contrário.
    /// @param  valor
    ///
    void validar(string);

public:
    void setSenha(string n);
    string getSenha();
};

inline string Senha::getSenha()
{
    return senha;
}

class Texto
{
private:
    string texto;

protected:
    ///
    /// @brief Método para validar se o texto corresponde aos padrões, lança exceção em caso contrário.
    /// @param valor
    ///

    void validar(string);

public:
    void setTexto(string n);
    string getTexto();
};

inline string Texto::getTexto()
{
    return texto;
}

inline string Nome::getNome()
{
    return nome;
}

class Disciplina
{
private:
    string disciplina;
    void validar(string);

public:
    void setDisciplina(string n);
    string getDisciplina();
};

inline string Disciplina::getDisciplina()
{
    return disciplina;
};





#endif // DOMINIOS_H_INCLUDED

