#include <iostream>
using namespace std;

void insertionSort(int b[], int counter) {
    for (int i = 1; i < counter; i++) {
        int key = b[i];
        int j = i - 1;

        while (j >= 0 && b[j] > key) {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = key;
    }
}

int main(){
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int counter[n]={0};
    int b[n][n]={0};
    for(int i=0;i<n;i++){
        int index;
        index=(n*a[i])/(max+1);
        b[index][counter[index]]=a[i];
        counter[index]++;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        insertionSort(b[i],counter[i]);
    }

    int k = 0;
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < counter[i]; j++) {
        a[k] = b[i][j];
        k++;
    }
}
cout<<"Sorted array:\n";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    
    
}