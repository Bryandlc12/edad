#include <stdio.h>
#include <time.h>

int main (){
    int edad, año=2003, dia=30, mes = 3;
    clock_t start, end;
    double cpu_time;
    
     edad = 2024 - año;
    int dias = edad * 365;
    dias = dias - 365;
    int dias2= mes - 1 * 30 + mes ;
    dias = dias2 + dias;
    int meses = edad * 12;
    meses = meses - 12 + mes;
    
    printf("años: %d meses: %d dias: %d\n", edad, meses, dias);
    end = clock();
    cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC; 
    printf("El código tomó %f segundos en ejecutarse.\n", cpu_time);
    return 0;
}
