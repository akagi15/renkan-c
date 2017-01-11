//連関構造推計用プログラム

#include <stdio.h>
#include <stdlib.h>

//macros
#define CSV_ROW 1000

int main(void){

    FILE *fp;
    char *fname = "./20161006data/test.csv"
    double value[CSV_ROW] ;
    char goods[CSV_ROW],hCity[CSV_ROW],zCity[CSV_ROW],hCd[CSV_ROW],zCd[CSV_ROW],hInd[CSV_ROW],zInd[CSV_ROW];

    fp = fopen(fname, "r");
    if(fp == NULL ){
        printf("Error:can't open file.\n");
        return -1;
    }
    
    while((ret = fscanf(fp,"%[^,],%f,%f",))

    fscanf()


}
