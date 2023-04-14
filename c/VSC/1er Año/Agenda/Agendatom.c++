#include<iostream>
#include<conio.h>

using namespace std;

struct Contactos{
    string nombre;
    string direccion;
    int numero;
} contacts[3];

int cont=0;

void Agregar (void){ 
    
    cout<<"Usted quiere agregar un contacto a su agenda\n";
    cout<<"\nIngrese el nombre del contacto: ";
    cin>>contacts[cont].nombre;
    cout<<"\nIngrese la direccion del contacto: ";
    cin>>contacts[cont].direccion;
    cout<<"\nIngrese el numero del contacto: ";
    cin>>contacts[cont].numero;
    cont++;
}


void Buscar (){
    int tel, i;
    int Found=0;

    system("cls");
    cout<<"Usted quiere buscar un contacto de su agenda\n";
    cout<<"Ingrese el contacto que desea buscar: \n";
    cin>>tel;

    for(i=0; i<cont; i++){
        if(tel==contacts[cont].numero){
            cout<<"Se encontro el contacto\n";
            cout<<"\nNombre del contacto: "<<contacts[cont].nombre;
            cout<<"\nDireccion del contacto: "<<contacts[cont].direccion;
            cout<<"\nNumero del contacto: "<<contacts[cont].numero;
            Found=1;
        }
        if(Found==0){
            cout<<"\n No se encontro el contacto";
        }
    }
}

void Borrar(){
    int borrar;
    int i;
    int numero;

    cout<<"\nUsted quiere borrar un contacto";
    cout<<"\nIngrese el numero del contacto que desea eliminar";
    cin>>numero;

    for(i=0; i<cont; i++){
        if(numero==contacts[cont].numero);
        borrar=i;
    }
    
    if(borrar<0)
        cout<<"\n El numero de telefono no se encontro";
        else{
            for(i=borrar; i<cont; i++){
                contacts[i].nombre=contacts[i+1].nombre;
                contacts[i].direccion=contacts[i+1].direccion;
                contacts[i].numero=contacts[i+1].numero;
            }
    
    }

}

int Menu ()
{int eleccion;

do{ 
cout<<"\nBienvenido al menu";
cout<<"\n 1. Agregar Contacto";
cout<<"\n 2. Buscar Contacto";
cout<<"\n 3. Borrar Contacto";
cin>>eleccion;

if(eleccion<1 || eleccion>3)
    cout<<"\n La opcion seleccionada no existe, ingresela de nuevo: ";
}while(eleccion<1 || eleccion>3);
    return eleccion;
}

int main (){
int accion;
    char continuar;
    
    do{ 
        getche();
        system("cls");
        accion=Menu();

        if(accion==1);
        Agregar();
        if(accion==2);
        Buscar();
        if(accion==3);
        Borrar();

        getche();
        system("cls");
        cout<<"\n Presione R para regresar al menu, presione otra tecla para terminar";
        continuar=getche();

    }while(continuar=='r' || continuar=='R');

    return 0;
}