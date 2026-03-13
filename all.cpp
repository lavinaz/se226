#include <bits/stdc++.h>
using namespace std;

 //1.
    void swapValues(int* p1, int* p2)
    {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;  }

    //2.

    void printArray(int* arr,int size)
    {
    for (int i = 0; i <size; i++) {
        cout << *(arr + i);
    }
    cout << endl;  }

    //3.
    
    int findMax(int* arr,int size) {
        int maxVal=*arr;
        for(int i=0; i<size; i++){
            
        if (*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
        return maxVal; 
 }
 
     //4.
     void reverseArray(int* arr,int size)
     {
    int left=0;
    int right= size - 1;
    
    while(left<right){
        swapValues((arr+left), (arr+right));
      left++;
      right--;
       }
    }
    
    
    //5. for the adress use type* !! important dont forget!!
    
    int* createArray(int size) {
        int *p;
        p=new int [size];
        
            return p;
            
}

    //6.THE LAST ONE!!!

    void deleteArray(int* arr){
         delete[] arr;
    cout << "Memory released successfully." << endl;  }
        
    
    





   int main() {
  
    cout << "Creating dynamic array..." << endl; 
    
    
      int size;
       cout <<"Enter array size: "<<endl;
        cin >>size;
        
        
    int *arr = createArray(size);
    cout << "Enter values: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    
    
    cout << "Array elements:" << endl;
    printArray(arr, size);
    cout << "Maximum element: " << findMax(arr, size) << endl;
    cout << "-------------------------------------" << endl;
    
    
    
    //swapping them
    int a = 5, b = 8;
    
    
    
    cout << "Swapping two numbers"<<endl;
    cout<< "Before swap" <<endl; 
    cout<<"a= " << a << "b = " << b << endl;
    swapValues(&a, &b);
    cout << "After swap"<<endl;
    cout<< "a = " << a << " b = " << b << endl;
    cout << "--------------------------------------" << endl;
    
    
    
    //reverse
    cout << "Reversing array ..." << endl;
    reverseArray(arr, size);
    
    
    
    cout << "Array after reverse Array:" << endl;
    printArray(arr, size);
    
    
    
    
    //d3l3ting
    cout << "--------------------------------------" << endl;
    cout << "Deleting array..." << endl;
    deleteArray(arr);
    return 0;
}

       
       
     
    
   

 





