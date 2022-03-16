#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[9];
    for(int i=0; i<9; i++){
        cin >> x[i];
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            for(int k=0; k<9; k++){
                for(int l=0; l<9; l++){
                    for(int m=0; m<9; m++){
                        for(int n=0; n<9; n++){
                            for(int o=0; o<9; o++){
                                else if (x[i]+x[j]+x[k]+x[l]+x[m]+x[n]+x[o]==100){
                                    cout << x[i] << "\n" << x[j] << "\n" << x[k] << "\n" <<  x[l] << "\n" << x[m] << "\n" << x[n] << "\n" << x[o];
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}