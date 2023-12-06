#include <iostream>

using namespace std;


class Data
{
protected:
    int dia;
    int mes;
    int ano;

public:
    Data(void) {     
        dia = 01;
        mes = 01;
        ano = 0001;
    }

    Data(int dia, int mes, int ano){ 
        this->dia=dia;
        this->mes=mes;
        this->ano=ano;
    }

    int getDia(){  
        return (dia);
    }

     int getMes(){  
        return (mes);
    }

    int getAno(){  
        return (ano);
    }

    void somarDias(int dia){  
        this->dia = this->dia+dia;
    }

    Data operator+(int dia){  
        this->dia = this->dia + dia;
    }

         friend std::ostream& operator<<(std::ostream& os, const Data& data) {  
        os << data.dia << '/' << data.mes << '/' << data.ano;
        return os;
    }


    void diferencaDias(Data b){  
        this->dia = this->dia - b.dia;
    }

    Data operator-(int dia){   
        this->dia = this->dia-dia;
    }
};