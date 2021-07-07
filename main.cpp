#include <iostream>

using namespace std;
//1.Una funcion recibe 3 numeros.
//La funcion debe devolver el mayor de ellos.
//No debe utilizar condiciones compuestas(AND, ni OR)

int mayor(int num1, int num2, int num3) {
    //num = 10, num2 =8, num3=6
    int may;
    if (num1 > num2)   //  num3< num1 >num2
        if (num1 > num3)
            may = num1;
        else                //num3 > num1 > num2
            may = num3;
    else   //num2 > num1
    if (num2 > num3)      //  num3 > num2 > num1
        may = num2;
    else                  //  num3 > num2 > num1
        may = num3;
    return may;

}
//2.Una funcion recibe como parametro un numero entero
// que representa en el mes de año. La funcion debe devolver el numero del mes
// por ejemplo si el mes es 2 debe devolverse "Febrero"

string nombre_mes(int mes){
    string aux= "";
    if (mes == 1)
        aux = "Enero";
    else if (mes == 2)
    aux = "Febrero";
    else if (mes == 3)
        aux = "Marzo";
    else if (mes == 4)
        aux = "Abril";
    else if (mes == 5)
        aux = "Mayo";
    else if (mes == 6)
        aux = "Junio";
    else if (mes == 7)
        aux = "Julio";
    else if (mes == 8)
        aux = "Agosto";
    else if (mes == 9)
        aux = "Septiembre";
    else if (mes == 10)
        aux = "Octubre";
    else if (mes == 11)
        aux = "Novienbre";
    else if (mes == 12)
        aux = "Diciembre";
    else
        aux = "Mes fuera de rango";

    return aux;

}

//3.Diseñe la funcion que genere un rectangulo.
//la funcion debe recibir un entero que indica el numero de filas de rectangulo;
// y un caracter que judica el relleno  del  rectangulo.
// ********
//********
string cuadrado(int fila, char relleno)
{
    string aux = "";
    for (int i = 1; i <= fila; i++) {
        for (int j= 1; j <= 10; j++)
            aux += relleno;
            aux = aux + "\n";
    }
    return aux;
}

//4. las funciones de tipo void , no retornan valores. se las conoce como
// procedimientos
void  cuadrado2 (int fila, char relleno)
{
    for (int i = 1; i <= fila; i++)
    {
        for (int j= 1; j <= 10; j++)
            cout << relleno;
        cout<<endl;
    }
}
//5. Diseñe una funcion que imprima los primeros n numeros primos.
//El parametro  n indica el total de primos a imprimir.
bool esPrimo(int num)
{
    int cont=2;
    bool flat=true;
    while(cont <= num /2 && flat==true ){
        if(num % cont== 0 )
            flat = false;
        cont++;
    }
    return flat;
}

void imprimePrimos(int n)
{
    int i=1;   int j=0;
    while(i<=n)
    {
        j++;
        if(esPrimo(i)==true)
        {
          cout<<" " << j;
          i++;
        }
    }
}
//6.Diseñe la funcion que decuelva la sumatoria en los n
//primeros numeros primos.El parametro n indica el total de primos a sumar.
int sumatoriaPrimos(int n )
{
    int i=1;   int j=1; int suma=0;
    while(i<=n)
    {
        j++;
        if (esPrimo(j))
        {
            suma+=j;    i++;
        }
    }
    return suma;
}

//7. Diseñe la funcion que recibe un entero que representa el mes del año
//la funcion debe retornar el dia maxima que trae ese mes. por ejemplo:
//7 debe devolver 31. ojo el mes de febrero.
int diaMaximoDelMes(int mes, int anio)
{
    int limite=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        limite=31;
    else if(mes== 2)
        if(anio%4 == 0)
            limite=29;
        else
            limite=28;
     else
         limite=30;

     return limite;

}





int main() {
    cout << endl << " El mayor de 20,10,8 es " << mayor(20, 10, 8);
    cout << endl << " El mayor de 20,30,21 es " << mayor(20, 30, 21);
    cout << endl << " El mayor de 20,30,210 es " << mayor(20, 30, 210);

    cout << endl << " El mes 5 correspondiente a " << nombre_mes(5);
    cout << endl << " El mes 5 correspondiente a " << nombre_mes(1);
    cout << endl << " El mes 5 correspondiente a " << nombre_mes(12);
    cout << endl << " El mes 5 correspondiente a " << nombre_mes(15);

    cout<<endl;
    cout<<"Imprimiendo figuras"<<endl;
    cout<<cuadrado(5,'a');
    cout<<endl;
    cout<<cuadrado(3,'+');
    cout<<endl;
    cuadrado2(6, '-');

    cout<<endl<<"impresion de primos";
    imprimePrimos(10);

    cout<<endl<<"La sumatoria de los 5 primeros primos es";
    int suma=sumatoriaPrimos(5);
    cout<<suma;
    cout<<sumatoriaPrimos( 5);
    //cout<<sumatoriaPrimos(5);

    cout<<endl<<"Enero trae" <<diaMaximoDelMes(1,2021)<<" DIAS";
    cout<<endl<<"Diciembre trae" <<diaMaximoDelMes(12,2021)<<" DIAS";
    cout<<endl<<"Junio trae" <<diaMaximoDelMes(6,2021)<<" DIAS";
    cout<<endl<<"Febrero de 2016 trae" <<diaMaximoDelMes(2,2016)<<" DIAS";
    return 0;
}
