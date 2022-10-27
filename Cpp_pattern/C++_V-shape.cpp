#include <iostream>
using namespace std;
/*
*       *
 *     *
  *   *
   * *
    *  
*/
main(){
    cout << "--->";
    int a;
    cin >> a;
    for(int i =0;i<a;i++){
        for(int left_space =0;left_space<i;left_space++){
            cout << " ";
        }
        cout << "*";
        for(int mid_space=0;mid_space<2*(a-i-1)-1;mid_space++){
            cout << " ";
        }
        if(i==a-1){
            break;
        }
        cout << "*\n";
    }
}