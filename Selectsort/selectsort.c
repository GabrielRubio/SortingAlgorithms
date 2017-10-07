#include<stdio.h>

selectsort(int x[], int n){
    int i,indx,j,large;
    for(i=n-1;i>0;i--){
        large=x[0];
        indx = 0;
        for(j=1;j<=i;j++)
            if(x[j]>large){
                large = x[j];
                indx = j;
            }
        x[indx]=x[i];
        x[i] = large;
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
    selectsort(x,8);
    print_vetor(x,8);
}
