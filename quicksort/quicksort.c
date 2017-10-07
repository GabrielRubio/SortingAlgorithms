#include<stdio.h>
void troca(int *x1, int *x2){
    int t;
    t = *x1;
    *x1 = *x2;
    *x2 = t;
}

int partition(int x[], int lb, int ub){
    int a, down ,up;

    a = x[lb];
    up = ub;
    down = lb;

    while(down<up){
        while(x[down]<=a && down<up)
            down++;
        while(x[up]>a)
            up--;
        if(down<up)
            troca(&x[down],&x[up]);
    }
    x[lb] = x[up];
    x[up] = a;
    return up;
}

void quicksort(int x[], int lb, int ub){
    int j;

    if(lb>ub) return;
    j = partition(x,lb,ub);
    quicksort(x,lb,j-1);
    quicksort(x,j+1,ub);
}

/*void quicksort(int x[], int lb, int ub){
    int j = lb;

    if(lb>=ub) return;
    partition(x,lb,ub,j);
    quicksort(x,lb,j-1);
    quicksort(x,j+1,ub);
}*/

void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

int main(){
    int x[8] = {25,57,48,37,12,92,86,33};

    quicksort(x,0,7);
    print_vetor(x,8);
}
