#include<stdio.h>
#include<stdbool.h>

void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

void troca(int *x1, int *x2){
    int t;
    t = *x1;
    *x1 = *x2;
    *x2 = t;
}

void bubblesort0(int *x, int n){
    int j,pass;
    for(pass =0;pass<n-1;pass++){

        for(j=0;j<n-1-pass;j++){
            if(x[j]>x[j+1]){
                troca(&x[j],&x[j+1]);
            }
        }
    }
}

void bubblesort1(int *x, int n){
    int j,pass;
    bool switched = true;
    for(pass =0;pass<n-1 && switched;pass++){
        switched = false;
        for(j=0;j<n-1-pass;j++){
            if(x[j]>x[j+1]){
                switched = true;
                troca(&x[j],&x[j+1]);
            }
        }
    }
}

int main(){
    int x[8] = {25,57,48,37,12,92,86,33};
    int y[8] = {25,57,48,37,12,92,86,33};
    int w[8] = {25,57,48,37,12,92,86,33};
    bubblesort0(x,8);
    bubblesort1(y,8);

    print_vetor(w,8);
    print_vetor(x,8);
    print_vetor(y,8);
}
