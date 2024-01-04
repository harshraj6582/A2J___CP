#include<iostream>
#include<vector>
 
using namespace std ; 
 
int main(){
    int n ; 
    int t ; 
    cin >> n ; 
    cin >> t ;
    
    vector<char>arr;
    // Entering the Intial Queue 
    for(int i  = 0 ; i < n ; i++){
        char s ;
        cin >> s ;
        arr.push_back(s);
    }
    while(t--){
        for(int i = 0 ; i < n - 1    ; i++){
            if(arr[i] == 'B' && arr[i+1] == 'G'){
                swap(arr[i] , arr[i+1]);
                i++;
                
            }
            
        }
    }
    for(const auto &element:arr){
        cout<<element;
    }
    
    return 0 ; 
}