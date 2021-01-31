#include <iostream> 
using namespace std;

int N = 6; /* S? ph?n t? c?a heap */
void max_heap(int A[], int i, int heap_size) {
    int largest; /* Ch? s? c?a ph?n t? l?n nh?t trong b? ba: node hi?n t?i
                         con bên trái, và con bên ph?i c?a nó */
    int left = 2 * i; /* V? trí c?a con bên trái */
    int right = 2 * i + 1; /* V? trí c?a con bên ph?i */
    if (left <= heap_size and A[left] > A[i]) /* heap_size là s? ph?n t? trong m?ng*/
        largest = left;
    else
        largest = i;
    if (right <= heap_size and A[right] > A[largest])
        largest = right;
    if (largest != i) {
        swap(A[i], A[largest]); /* Th?c hi?n d?i ch? hai ph?n t? n?u 
                                              giá tr? c?a node cha nh? hon node con */
        max_heap(A, largest, heap_size); /* G?i d? quy node t?i v? trí m?i */
    }
}

void run_maxheap(int A[]) { /* Áp d?ng hàm max_heap cho t?t c? các node
                                               tr? node lá */
    for (int i = N / 2; i >= 1; i--) {
        max_heap(A, i, N);
    }
}

void max_heap_sort(int A[ ])
{
    int heap_size = N;
    run_maxheap(A);
    for(int i = N; i>=2 ; i-- )
    {
        swap(A[ 1 ], A[ i ]);
        max_heap(A, 1, --heap_size);
    }
}

int main() {
    int A[N+1] = {-1,8,4,7,1,3,5}; /* M?ng ch?a 7 ph?n t?, v?i ph?n t? 
                                      c?a heap b?t d?u t? v? trí 1 t?i N
                                      ph?n t? d?u tiên c?a m?ng ch? có tác
                                      d?ng làm l?p d?y m?ng, giá tr? b?t k? */
    max_heap_sort(A);
    printf("\n\tGiá tr? c?a m?ng sau khi áp d?ng hàm max_heap_sort\n");
    printf("\t");
    for (int i = 0; i < N+1; i++) { /* In ra giá tr? c?a m?ng sau khi s?p x?p v?i 
                                                 hàm max_heap_sort */
        printf("%d    ", A[i]);
    }
}
