#include <stdio.h>

int main (){

    int ideias, extravaganciaPerfeita;
    int extravagancia [1000];

    scanf("%d %d", &ideias, &extravaganciaPerfeita);

    for (int i = 0; i < ideias; ++i){
        scanf("%d ", &extravagancia[i]);
    }

    for (int i = 0; i < ideias; ++i){
        printf("%d ",extravagancia[i]);
    }

    return 0;
}