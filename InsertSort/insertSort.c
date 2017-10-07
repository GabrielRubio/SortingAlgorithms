#include<stdio.h>

insertsort(int x[],int n)
{
    /*inicialment4e x[n-1] é considerando um arq ordenado de um elemento
    apos k passagens os elemntos x[k-1] a x[n-1] estão em sequencia*/
    int i,j,temp;
    for (i=n-2;i>=0;i--){
        temp = x[i];
        j = i+1;
        //se trocarmos "x[j]<temp" por "x[j]>temp" mudamos o sentido da ordenação
        while(j<=n-1 && x[j]<temp){
            x[j-1]=x[j];
            j=j+1;
        }//end while
        x[j-1] = temp;
    }//end for
}

void print_vetor(int x[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
}

int main(){
    int x[8] = {25,57,48,37,12,92,86,33};
    insertsort(x,8);
    print_vetor(x,8);
}
