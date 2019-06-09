// Tutorial 1.3:basis program structures: Loop,branch

#include <iostream>
using namespace std;
int main(){
    int a=0, i=0;
    bool Marker=true;
    // For Loop
    for(i=0;i<20;i++){
        // Branching 
        if(i<5){
           cout << "Goodbye Fortran!"<< endl;   
        }
        else{
           cout << "Hello CPP"<< endl;   
        }
    }
    // While Loop
    while(Marker){
        a++;
        if(a>100) Marker = false;
    }
} 
