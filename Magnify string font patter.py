'''
Guys if you can please add more character patter as much you can like,
-> Add small letter
-> Add number
-> Symbol like !@#$%^&*()_+-=~`{}[]|\:;"'<,>.?/

  *   *  *****  *      *       ***          *   *   ***   ****   *      **** 
  *   *  *      *      *      *   *         *   *  *   *  *   *  *      *   *
  *****  ****   *      *      *   *         * * *  *   *  ****   *      *   *
  *   *  *      *      *      *   *         ** **  *   *  *  *   *      *   *
  *   *  *****  *****  *****   ***          *   *   ***   *   *  *****  ****
'''
class Magnify_string:
    def __init__(self,data):
        if type(data)==str:
            self.data=data.lower()
        else:
            raise "Enter string data"
    def display(self):
        arr=["","","","",""]
        for i in self.data:
            arr[0]+="  "
            arr[1]+="  "
            arr[2]+="  "
            arr[3]+="  "
            arr[4]+="  "
            if i=="a":
                arr[0]+=" ***  "
                arr[1]+="*    *"
                arr[2]+="******"
                arr[3]+="*    *"
                arr[4]+="*    *"
            elif i=="b":
                arr[0]+="**** "
                arr[1]+="*   *"
                arr[2]+="**** "
                arr[3]+="*   *"
                arr[4]+="**** "
            elif i=="c":
                arr[0]+=" ****"
                arr[1]+="*    "
                arr[2]+="*    "
                arr[3]+="*    "
                arr[4]+=" ****"
            elif i=="d":
                arr[0]+="**** "
                arr[1]+="*   *"
                arr[2]+="*   *"
                arr[3]+="*   *"
                arr[4]+="**** "
            elif i=="e":
                arr[0]+="*****"
                arr[1]+="*    "
                arr[2]+="**** "
                arr[3]+="*    "
                arr[4]+="*****"
            elif i=="f":
                arr[0]+="*****"
                arr[1]+="*    "
                arr[2]+="**** "
                arr[3]+="*    "
                arr[4]+="*    "
            elif i=="g":
                arr[0]+=" ****"
                arr[1]+="*    "
                arr[2]+="* ***"
                arr[3]+="*   *"
                arr[4]+=" ****"
            elif i=="h":
                arr[0]+="*   *"
                arr[1]+="*   *"
                arr[2]+="*****"
                arr[3]+="*   *"
                arr[4]+="*   *"
            elif i=="i":
                arr[0]+="*****"
                arr[1]+="  *  "
                arr[2]+="  *  "
                arr[3]+="  *  "
                arr[4]+="*****"
            elif i=="j":
                arr[0]+="*****"
                arr[1]+="    *"
                arr[2]+="    *"
                arr[3]+="    *"
                arr[4]+="**** "
            elif i=="k":
                arr[0]+="*   *"
                arr[1]+="*  * "
                arr[2]+="**   "
                arr[3]+="*  * "
                arr[4]+="*   *"
            elif i=="l":
                arr[0]+="*    "
                arr[1]+="*    "
                arr[2]+="*    "
                arr[3]+="*    "
                arr[4]+="*****"
            elif i=="m":
                arr[0]+="*   *"
                arr[1]+="** **"
                arr[2]+="* * *"
                arr[3]+="*   *"
                arr[4]+="*   *"
            elif i=="n":
                arr[0]+="*   *"
                arr[1]+="**  *"
                arr[2]+="* * *"
                arr[3]+="*  **"
                arr[4]+="*   *"
            elif i=="o":
                arr[0]+=" *** "
                arr[1]+="*   *"
                arr[2]+="*   *"
                arr[3]+="*   *"
                arr[4]+=" *** "
            elif i=="p":
                arr[0]+="**** "
                arr[1]+="*   *"
                arr[2]+="**** "
                arr[3]+="*    "
                arr[4]+="*    "
            elif i=="q":
                arr[0]+=" **  "
                arr[1]+="*  * "
                arr[2]+="** * "
                arr[3]+="* ** "
                arr[4]+=" ****"
            elif i=="r":
                arr[0]+="**** "
                arr[1]+="*   *"
                arr[2]+="**** "
                arr[3]+="*  * "
                arr[4]+="*   *"
            elif i=="s":
                arr[0]+="*****"
                arr[1]+="*    "
                arr[2]+="*****"
                arr[3]+="    *"
                arr[4]+="*****"
            elif i=="t":
                arr[0]+="*****"
                arr[1]+="  *  "
                arr[2]+="  *  "
                arr[3]+="  *  "
                arr[4]+="  *  "
            elif i=="u":
                arr[0]+="*   *"
                arr[1]+="*   *"
                arr[2]+="*   *"
                arr[3]+="*   *"
                arr[4]+=" *** "
            elif i=="v":
                arr[0]+="*   *"
                arr[1]+="*   *"
                arr[2]+="*   *"
                arr[3]+=" * * "
                arr[4]+="  *  "
            elif i=="w":
                arr[0]+="*   *"
                arr[1]+="*   *"
                arr[2]+="* * *"
                arr[3]+="** **"
                arr[4]+="*   *"
            elif i=="x":
                arr[0]+="*   *"
                arr[1]+=" * * "
                arr[2]+="  *  "
                arr[3]+=" * * "
                arr[4]+="*   *"
            elif i=="y":
                arr[0]+="*   *"
                arr[1]+=" * * "
                arr[2]+="  *  "
                arr[3]+=" *   "
                arr[4]+="*    "
            elif i=="z":
                arr[0]+="*****"
                arr[1]+="   * "
                arr[2]+="  *  "
                arr[3]+="*    "
                arr[4]+="*****"
            elif i==" ":
                arr[0]+="     "
                arr[1]+="     "
                arr[2]+="     "
                arr[3]+="     "
                arr[4]+="     "
        for i in arr:
            print(i)
MyObj = Magnify_string(input("Enter string you want to magnify--> "))
MyObj.display()