#include <stdio.h>


void Counting_Sort(int A[],int B[], int k, int n){
    int C[k],i,j;

    for(i=1;i<=k;i++)
        C[i] = 0;
    for(j = 1; j<=n;j++)
        C[A[j]] = C[A[j]] + 1;

    for(i=2;i<=k;i++)
        C[i] = C[i] + C[i-1];

    for(j=n;j>=1;j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

}



void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

int main(){
    int A[8] = {25,57,48,37,12,92,86,33};
    int B[8];
    Counting_Sort(A,B,92,7);
    print_vetor(A,8);
    print_vetor(B,8);
}
