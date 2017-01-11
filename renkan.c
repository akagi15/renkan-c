//連関構造推計用プログラム

#include <stdio.h>
#include <stdlib.h>

//macros
#define CSV_ROW 10000

int main(void){
    int ret;
    FILE *fp;
    char *fname = "../../20161006data/test.csv";
    float value[CSV_ROW], goods[CSV_ROW],hCity[CSV_ROW],zCity[CSV_ROW],hCd[CSV_ROW],zCd[CSV_ROW],hInd[CSV_ROW],zInd[CSV_ROW];
    char header[8][20];

    fp = fopen(fname, "r");
    if(fp == NULL ){
        printf("Error:can't open file.\n");
        return -1;
    }

    fscanf(fp,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s",header[0],header[1],header[2],header[3],header[4],header[5],header[6],header[7]);
    for(int i = 0; i < 8 ; i++){
        printf("%s\n",header[i]);
    }
    
    int i = 0; 
        
    while((ret = fscanf(fp,"%f,%f,%f,%f,%f,%f,%f,%f",&hCd[i],&zCd[i],&hInd[i],&zInd[i],&goods[i],&hCity[i],&zCity[i],&value[i])) != EOF){
            printf("%f \n",hCd[i]);
            i ++;
    }

    printf("Number Of data is ");

    fclose(fp);

    return 0;

}
