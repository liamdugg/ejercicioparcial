#ifndef FECHA_H
#define FECHA_H


class Fecha {

    public:

        Fecha(int d ,int m , int a);
        Fecha(const Fecha& fech);
        friend ostream& operator<<(ostream&, Fecha&);
        ~Fecha();

    private:

        int mes;           // 1-12
        int dia;            // 1-31
        int anio;
};

#endif // FECHA_H
