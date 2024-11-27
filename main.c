#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLEAU 9
typedef enum{PION=1,DAME=2,CAVALIER=3,ROI=4, }Pion;

typedef struct{
    Pion pion;
    int Case[MAX_TABLEAU];
}Partie;

int affiche_Partie (Partie *p){

    for (int i=0; i< MAX_TABLEAU;i++){
        for(int j=0; j< MAX_TABLEAU;j++){
            printf("[]");
        }
    }
}

int main(){
    Partie p;
    affiche_Partie(&p);

}