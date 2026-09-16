#include <iostream>
using namespace std;

int main(){
    int i, j, k;
    for (i = 0; i <= 4; i++){
        for (j = 6; j >= i; j--){
            cout << " ";
        }
        for (k = 0; k<=i; k++){
            cout << "* ";
        }
    cout << endl;
    }
    for (i = 3; i <= 6; i++){
        for (j = 0; j <= i; j++){
            cout << " ";
        }
        for (k = 6; k >= i; k--){
            cout << "* ";
        }
    cout << endl;
    }
    for (i = 1; i <= 5; i++){
        for (j = 0; j <= i; j++){
            cout << " ";
        }
        cout << "XX";
        for (k = 4; k >= i; k--){
            cout << " ";
        }
        for (k = 3; k >= i; k--){
            cout << " ";
        }
        cout << "XX" << endl;
    }
    return 0;
}

/*xx        xx 7
   xx      xx 5
    xx    xx 3
     xx  xx 1
      xxxx */