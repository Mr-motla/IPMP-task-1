#include <iostream>
 using namespace std;
 void insertionSort(int A[],int x){
    for (int i=1;i<6;i++){
        int value = A[i];
        int hole =i;
        while(hole>0 && A[hole-1]> value){
            A[hole]=A[hole-1];
            hole = hole-1;
        }
        A[hole] = value;
    }
 }
 int main () {
     int A[] = {22,65,43,66,32,11};
     insertionSort(A,6);
          for (int i=0;i<6;i++){
        cout << A[i] << " " ;}
 return 0;
}