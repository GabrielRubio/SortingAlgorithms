#include<stdio.h>
void shellsort(int x[],int n,int incrmnts[], int numinc)
{
    int incr, j , k,span,temp;
    for(incr=0;incr<numinc;incr++){
        span = incrmnts[incr];
        for(j=span;j<n;j++){
            temp = x[j];
            for(k=j-span;k>=0 && temp<x[k];k-=span)
                x[k+span] = x[k];
            x[k+span] = temp;

        }
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
    int v[3] = {5,3,1};
    shellsort(x,8,v,3);
    print_vetor(x,8);
}

