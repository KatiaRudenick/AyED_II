#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//prototipado
int suma(int a,int b);
int resta(int a,int b);
float division(int a,int b);
int multiplicacion(int a,int b);

int main (){
    int op;
    int a,b;
    system("color 50");
    do{
        cout<<"ingrese el primer numero: ";
        cin>>a;
        cout<<"ingrese el segundo numero: ";
        cin>>b;
        cout<<"ingrese que operacion desea realizar \n 1-suma\n 2-resta\n 3-division\n 4-multiplicacion\n 0- salir \n";
        cin>>op;
        switch (op)
        {
        case 1:
            suma(a,b);
            break;
        case 2:
            resta(a,b);
            break;
        case 3:
            division(a,b);
            break;
        case 4:
            multiplicacion(a,b);
            break;
        default:
            break;
        }
    }while(op!=0);
    system("cls");
    return 0;
}

int suma(int a,int b){
    cout << "la suma de "<<a<<"+"<<b<<" es igual a "<<(a+b)<<"\n";
    cout << "enter para continuar";
    system("pause");
    return a+b;
}

int resta(int a,int b){
    cout << "la suma de "<<a<<"-"<<b<<" es igual a "<<(a-b)<<"\n";
    cout << "enter para continuar";
    system("pause");
    return a-b;
}

float division(int a,int b){
    cout << "la suma de "<<a<<"/"<<b<<" es igual a "<<(a/b)<<"\n";
    cout << "enter para continuar";
    system("pause");
    return a/b;
}

int multiplicacion(int a,int b){
    cout << "la suma de "<<a<<"*"<<b<<" es igual a "<<(a*b)<<"\n";
    cout << "enter para continuar";
    system("pause");
    return a*b;
}