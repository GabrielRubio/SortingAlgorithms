#include <stdio.h>


void Merge(int *x, int m1, int m2, int m3){
    int y[m3];
    int apoint,bpoint,cpoint,i;

    apoint = m1; bpoint = m2+1;
    for(cpoint=m1;apoint<=m2 && bpoint<=m3;cpoint++)
        if(x[apoint] < x[bpoint])
            y[cpoint] = x[apoint++];
        else
            y[cpoint] = x[bpoint++];
    while (apoint<=m2)
        y[cpoint++] = x[apoint++];
    while (bpoint<=m3)
        y[cpoint++] = x[bpoint++];

    for(i=m1;i<=m3;i++)
        x[i] = y[i];

}

void MergeSort(int *A, int e, int d){
    int q;

    if(e<d){
        q = (e+d)/2;
        MergeSort(A,e,q);
        MergeSort(A,q+1,d);
        Merge(A,e,q,d);
    }
}

void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

int main(){
    int x[8] = {25,57,48,37,12,92,86,33};

    MergeSort(x,0,7);
    print_vetor(x,8);
}
