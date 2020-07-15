#ifndef PRODUCTO_H
#define PRODUCTO_H


class Producto
{
  private:
      char *m_nombre;

  protected:
      int m_codigo;

  public:

    /*constructor parametrizado con valores iniciales triviales*/
    Producto(const char *nombre = "SIN NOMBRE", int cod = 0);

    /*constructor de copia*/
    Producto(const Producto &prodcpy);

    /*destructor (inline)*/
    inline ~Producto(){delete []m_nombre;};

    //funciones set y get
    void Set_Datos(char *nombre, int cod);
    void Set_Nombre (char*nombre);
    char* Get_Nombre(void);

    /*sobrecarga del operador << */
};

#endif // PRODUCTO_H
