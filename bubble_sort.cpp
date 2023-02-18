#include <iostream>
 using namespace std;
 int main () {
     int A[10];
     int n;
     cout << "Enter the number of elements: "<< endl;
     cin >> n;
     cout << "Enter the elements: " << endl;
     for (int k=0;k<n;k++){
        cin >> A[k];
     }
     for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (A[i]>A[j]){
                swap(A[i],A[j]);
            }
        }
     }
     cout << "Sorted array is : " << endl;
     for (int s=0;s<n;s++){
        cout << A[s] << " " ;
     }
 return 0;
}