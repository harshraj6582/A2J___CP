#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int size = 5;
    int array[size][size];
 
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> array[i][j];
        }
    }
 
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array[i][j] == 1){
                cout << abs(2 - i) + abs(2 - j) << endl;
            }
        }
    }
 
    return 0;
}