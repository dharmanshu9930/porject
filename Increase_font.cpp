#include <iostream>
#include <string>
using namespace std;

void Magnify_string(string str){
    string arr[5] = {"","","","",""};
    for(int i=0;i<str.length();i++){
        arr[0]+="  ";
        arr[1]+="  ";
        arr[2]+="  ";
        arr[3]+="  ";
        arr[4]+="  ";
        if(str[i]=='A'){
            arr[0]+=" ***  ";
            arr[1]+="*    *";
            arr[2]+="******";
            arr[3]+="*    *";
            arr[4]+="*    *";
            }
        else if(str[i]=='B'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*   *";
            arr[4]+="**** ";
            }
        else if(str[i]=='C'){
            arr[0]+=" ****";
            arr[1]+="*    ";
            arr[2]+="*    ";
            arr[3]+="*    ";
            arr[4]+=" ****";
            }
        else if (str[i]=='D'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+="**** ";
            }
        else if(str[i]=='E'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*****";
            }
        else if(str[i]=='F'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*    ";
            }
        else if(str[i]=='G'){
            arr[0]+=" ****";
            arr[1]+="*    ";
            arr[2]+="* ***";
            arr[3]+="*   *";
            arr[4]+=" ****";
            }
        else if(str[i]=='H'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*****";
            arr[3]+="*   *";
            arr[4]+="*   *";
            }
        else if(str[i]=='I'){
            arr[0]+="*****";
            arr[1]+="  *  ";
            arr[2]+="  *  ";
            arr[3]+="  *  ";
            arr[4]+="*****";
        }
        else if(str[i]=='J'){
            arr[0]+="*****";
            arr[1]+="    *";
            arr[2]+="    *";
            arr[3]+="    *";
            arr[4]+="**** ";
        }
        else if(str[i]=='K'){
            arr[0]+="*   *";
            arr[1]+="*  * ";
            arr[2]+="**   ";
            arr[3]+="*  * ";
            arr[4]+="*   *";
        }
        else if(str[i]=='L'){
            arr[0]+="*    ";
            arr[1]+="*    ";
            arr[2]+="*    ";
            arr[3]+="*    ";
            arr[4]+="*****";
        }
        else if(str[i]=='M'){
            arr[0]+="*   *";
            arr[1]+="** **";
            arr[2]+="* * *";
            arr[3]+="*   *";
            arr[4]+="*   *";
        }
        else if(str[i]=='N'){
            arr[0]+="*   *";
            arr[1]+="**  *";
            arr[2]+="* * *";
            arr[3]+="*  **";
            arr[4]+="*   *";
        }
        else if(str[i]=='O'){
            arr[0]+=" *** ";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+=" *** ";
        }
        else if(str[i]=='P'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*    ";
        }
        else if(str[i]=='Q'){
            arr[0]+=" **  ";
            arr[1]+="*  * ";
            arr[2]+="** * ";
            arr[3]+="* ** ";
            arr[4]+=" ****";
        }
        else if(str[i]=='R'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*  * ";
            arr[4]+="*   *";
        }
        else if(str[i]=='S'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="*****";
            arr[3]+="    *";
            arr[4]+="*****";
        }
        else if(str[i]=='T'){
            arr[0]+="*****";
            arr[1]+="  *  ";
            arr[2]+="  *  ";
            arr[3]+="  *  ";
            arr[4]+="  *  ";
        }
        else if(str[i]=='U'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+=" *** ";
        }
        else if(str[i]=='V'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+=" * * ";
            arr[4]+="  *  ";
        }
        else if(str[i]=='W'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="* * *";
            arr[3]+="** **";
            arr[4]+="*   *";
        }
        else if(str[i]=='X'){
            arr[0]+="*   *";
            arr[1]+=" * * ";
            arr[2]+="  *  ";
            arr[3]+=" * * ";
            arr[4]+="*   *";
        }
        else if(str[i]=='Y'){
            arr[0]+="*   *";
            arr[1]+=" * * ";
            arr[2]+="  *  ";
            arr[3]+=" *   ";
            arr[4]+="*    ";
        }
        else if(str[i]=='Z'){
            arr[0]+="*****";
            arr[1]+="   * ";
            arr[2]+="  *  ";
            arr[3]+="*    ";
            arr[4]+="*****";
        }
    }
    
    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3]<< endl << arr[4]<< endl << arr[5]<< endl;
}
int main(){
    cout << "-->";
    string str;
    cin >> str;
    Magnify_string(str);
}