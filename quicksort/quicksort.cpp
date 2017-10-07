#include<stdio.h>
#include<parallel/balanced_quicksort.h>

/*void quicksort(int x[], int lb, int ub){
    int j = lb;
    if(lb>=ub) return;
    partition(x,lb,ub);
    quicksort(x,lb,j-1);
    quicksort(x,x+1,ub);
}*/
void quicksort(int x[], int lb, int ub){
    int j;

    if(lb>ub) return;
    j = partition(x,lb,ub);
    quicksort(x,lb,j-1);
    quicksort(x,j+1,ub);
}

void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

int main(){
    int x[8] = {25,57,48,37,12,92,86,33};
    int w[8] = {25,57,48,37,12,92,86,33};
    quicksort(x,0,8);
    print_vetor(w,8);
}
