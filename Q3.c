#include<stdio.h>

int main() {
    int arr[7] = {20,32,6,7,22,47,21};
    int smallest = arr[0], largest = arr[0];
    
    for(int i = 1; i < 7; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        if(arr[i] > largest)
            largest = arr[i];
    }
    
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
    return 0;
    
}

    
   

