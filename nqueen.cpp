#include <iostream>
#include <cmath>

using namespace std;

bool ok(int q[], int c){
    for(int i = 1;i <= c; i ++){
        if(q[c] == q[i-1] || q[c-i] == q[c]-i || q[c-i] == q[c]+i)
            return false;
    }
    return true;
}

int nqueens(int n) {

    int* q = new int[n];
    q[0] = 0;
  
    int r = 0, c = 0, solutions = 0;

    while (c >= 0){
        c++;  
    
        if(c > n){              
            solutions++;           
            c--;
            r = q[c];           
        }
    
        else
            r = -1;
    
        while (c >= 0) {
            r++;
            q[c] = r;             
            if(r > n){
                c--;
                r = q[c];        
            }

            else if(ok(q,c)){   
                break;
    
            }
         
        }
      
    }
    
    delete []q;
    return solutions;
}


int main() {

    int n=0;
   
    while(n!=-1){

        cout << "input how big you want the board! ";
        cin >> n;
   
        cout << "There are " << nqueens(n-1) << " solutions to " << n << " queens problem.\n";
    }

    return 0;
}