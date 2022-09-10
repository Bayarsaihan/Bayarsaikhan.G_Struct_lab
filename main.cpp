#include <stdio.h>
// Хүснэгтээс хамгийн их бүхэл тоог буцаах функц
int max(int A[], int n)
{
        int i;
        for( i = 1; i < n; i++){
                if(A[0] < A[i])
                A[0] = A[i];
        }
        return A[0];  
}
// Хүснэгтээс хамгийн бага бүхэл тоог буцаах функц
int min(int A[], int n)
{
        int i;
        for( i = 1; i < n; i++){
                if(A[0] > A[i])
                A[0] = A[i];
        }
        return A[0];     
}
// A хүснэгтэд байгаа тоонуудыг B хүснэгтэд хуулах функц
void copy(int A[], int n, int B[]){
        for(int i = 0; i < n; i++){
                A[i] = B[i];
        }
}
//find функц нь n ширхэг бүхэл тоо агуулсан A хүснэгтээс x утгыг хайж, хамгийн эхэнд олдсон индексийг буцаана. Олдохгүй бол -1 утгыг буцаана.
int find(int A[], int n, int x){
        for(int i = 0; i < n; i++ ){
                if(x = A[i]) return i+1;
        }
        return -1;
}
//make_set функц нь A хүснэгтэд байгаа тоонуудын олонлогийг B хүснэгтэд хадгалаад, B хүснэгтэд хадгалсан олонлогийнхоо хэмжээг буцаана.
int make_set(int A[], int n, int B[]){
        int  elementinToo = 1; 
        B[0] = A[0];
        for(int i = 0; i < n; i++){
            for (int j = 0; j < elementinToo; j++){ 
                if(A[i] != B[j]){
                    B[elementinToo] = A[i];
                    elementinToo = elementinToo + 1;
                    break;
                }else break;
                
            } 
        }  
        return elementinToo-1;
}
// union_set функц нь A-д хадгалагдсан хүснэгтийг олонлог гэж үзээд B хүснэгтэд байрлах тоонуудыг A-д нэмж хадгалах ба A хүснэгтийн шинэ хэмжээг буцаана. B хүснэгт олонлог байх албагүй (Тоонууд давхардсан байж болно). Харин шинэ A бол олонлог байх ёстой. n, m нь харилцан A, B хүснэгтийн хэмжээнүүд. A хүснэгтийг хангалттай том гэж үзнэ.

int union_set(int A[], int n, int B[], int m){
    int nemelt = 0, dawh = 0, i, j;
    for( i = 0; i < m; i++){
        dawh = 0;
        for( j = 0; j < n; j++)
            if(B[i] == A[j]) 
                dawh++;
        
        if(dawh == 0){
            A[nemelt+n] = B[i];
            nemelt++;
        }
    }
    return nemelt + n;
}
// intersection_set функц нь A, B хоёр олонлогийн огтлолцол буюу хоёуланд нь байгаа элементүүдийг C хүснэгтэд хадгална. C хүснэгтэд хадгалсан элементүүдийн тоог буцаана. C хүснэгтийг хангалттай том гэж үзнэ. C хүснэгт нь олонлог байх ёстой ба элементүүдийн хадгалагдсан дараалал чухал биш.
 
int intersection_set(int A[], int n, int B[], int m, int C[]){
    int x = 0, dawh, i, j;
    for( i = 0; i < m; i++){
        dawh = 0;
        for( j = 0; j < n; j++)
            if(B[i] == A[j]) 
                dawh++;
        
        if(dawh != 0){
            C[x] = B[i];
            x++;
        }
    }
    return x;
}