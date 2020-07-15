#include "producto.h"
#include <string.h>
#include <iostream>

using namespace std;

Producto::Producto(const char *nombre, int cod){

    m_codigo = cod;
    m_nombre = new char[strlen(nombre)+1];
    strcpy(m_nombre, nombre);
}

Producto::Producto(const Producto &prodcpy){

    m_codigo = prodcpy.m_codigo;
    m_nombre = new char[strlen(prodcpy.m_nombre)+1];
    strcpy(m_nombre, prodcpy.m_nombre);
}


void Producto::Set_Datos(char *nombre, int cod){

    m_codigo = cod;
    m_nombre = new char[strlen(nombre)+1];
    strcpy(m_nombre, nombre);

}

void Producto::Set_Nombre (char*nombre){

    m_nombre = new char[strlen(nombre)+1];
    strcpy(m_nombre, nombre);
}

char* Producto::Get_Nombre(void){

    cout << "El nombre es: " << m_nombre << endl;
    return m_nombre;
}
