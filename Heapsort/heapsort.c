#include<stio.h>

void HEAPIFY(int A[], int heapsize, int i)
{
    int l,r,largest;

    l = left(i); r = right(i);
    if((l<=heapsize)&&(A[l]>A[i]))
        largest = l;
    else
        largest = i;
    if((r<=heapsize)&&(A[r]>A[largest]))
        largest = r;
    if(largest!=i)
    {
        swap(A[i],A[largest]);//troca a posiçao
        HEAPIFY(A,heapsize,largest);
    }
    return;
}

