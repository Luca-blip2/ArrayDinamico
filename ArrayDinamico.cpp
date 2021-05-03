#include <iostream>
#include "ArrayDinamico.h"

using namespace std;

ArrayDinamico::ArrayDinamico(int n){
     if(n<=0){
       cout << "Errore: size deve essere maggiore di zero" << endl;
       exit (1);
       }
       
       maxSize = n + BUF_SIZE;
       size = n;
       
       ptr = new double[maxSize];
       for (int i=0; i<maxSize; i++)
            ptr[i] = 0.0;
       }
       
       
        explicit ArrayDinamico(int n = 8);
     explicit ArrayDinamico(const ArrayDinamico &a);
     ArrayDinamico(const double a[], int n);
     ~ArrayDinamico();
}
     
     explicit ArrayDinamico(const ArrayDinamico &a);
     ArrayDinamico(const double a[], int n);
     ~ArrayDinamico();

