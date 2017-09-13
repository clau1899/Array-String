#include <iostream>
#include<string>

using namespace std;
int matriz[3][3];//en este array bidimensional almacenaremos los datos ingresados por el usuario

int main()
{
    int i,j;//enteros iteradores para los fors
    for(i=0;i<3;i++){//dos fors para recorrer con uno filas y otro columnas
        for(j=0;j<3;j++){
            cout<<"ingrese un numero para llenar la matriz"<<endl;
            cin>>matriz[i][j];//almacenamos cadda numero en la posicion correspondiente
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"  "<<matriz[i][j]; //damos espacio entre cada elemento para que no se amontonen
        }
        cout<<"\n"; //salto de linea al terminar cada fila para poder dar aspecto de una matriz
    }
    int maximo=matriz[0][0];//igualamos la var minimo y maximo al primer elemento de la matriz
    int minimo=matriz[0][0];
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (matriz[i][j]>maximo){//comparamos cada elemento con el siguiente, si es mayor entonces tenemos nuevo maximo
                maximo=matriz[i][j];
            }
            if (matriz[i][j]<minimo){//comparamos cada elemento con el siguiente, si es menor entonces tenemos nuevo minimo
                minimo=matriz[i][j];
            }
        }
    }
    cout<<"\n" "el min es: "<<minimo<<endl;//imprimimos el maximo y minimo
    cout<<"el max es: "<<maximo<<endl;
    float promedio; //variable promedio tipo float para que nos de un valor preciso al dividir
    float suma; //variable suma que es igual a 0
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){//recorremos toda la matriz
            suma=suma+matriz[i][j];//vamos sumando elemento a elemento y lo guardamos en la varibale suma
        }
    }
    promedio=suma/9;//para sacar el promedio se divide la suma total entre el numero de datos (9)
    cout<<"el promedio es: "<<promedio<<endl;

    int mediana;//mediana que sea un elemento de la matriz, solo uno porque tiene cantidad impar de elementos
    int lista[9];//creamos un array nuevo de tamaño 9 para almacenar la matriz ordenada
    int r=0;//iterador para agregar elementos al array
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){//dos fors para recorrer filas y columnas
            lista[r]=matriz[i][j];//pasamos los elemntos de la amtriz al array
            r++;//incrementamos en 1 para que avance la pasicion que ocupara
        }
    }//AHORA DEBEMOS ORDENAR EL ARRAY
    int temp;//auxiliar para hacer el intercambio
    for (i=0;i<9;i++){//algoritmo de la burbuja
        for(j=i+1;j<9;j++){
            if(lista[j]<lista[i]){
                temp=lista[j];/*usamos un auxiliar para guardar los valores en la variable temp*/
                lista[j]=lista[i];
                lista[i]=lista[j];/*si el elemento [1]es menor que [0]los intercambiamos, para ordenar de manera ascendente*/
                lista[i]=temp;
            }
        }
    }
    cout<<"la matriz en un array ordenado es: "<<endl;
    for (i=0;i<9;i++){
        cout<<lista[i]<<" ";/*aqui mostramos la lista ordenada*/
        cout<<endl;
    }
    cout<<"la mediana de la matriz es: "<<lista[4]<<endl; //siempre la mediana sera el dato central, como el tamaño es 9, el dato en la posicion 4 porque empezamos de 0
    cout<<"Resultados Finales :"<<maximo<<" "<<minimo<<" "<<promedio<<" "<<lista[4]<<endl;//mostramos los datos finales

    string p;

    p="E5s=$t7e-E{+s#U'?n&Ej/(em=p215lo<";
    /*for (i=0;i<34;i++){
        if (p[i]>= 65 & p[i]<=122){// Comparamos con los equivalentes ASCII
            nuevo[14]={p[i]};
        }*/
    for (i=0;i<34;i++){//recorremos la cadena p
        if (isalpha(p[i])==1 || isalpha(p[i])==2){//retorna 2 si es un caracter minusculo, y 1 si es una letra mayuscula, 0 en caso contrario
            if (isupper(p[i])==1){//si el caracter esta en mayuscula se añade un espacio con subguion antes
                cout<<"__"<<p[i];
            }
            else{
                cout<<p[i];//si no es mayuscula se imprime seguido normal
            }
        }
    }
    return 0;
}
