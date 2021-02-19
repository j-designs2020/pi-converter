#include<iostream>
#include<math.h>
using namespace std;


double pi = 3.14159265;
double entry = 0;
double result = 0;
double result2 = 0;
double rangeUp = .005;
double rangeDown = -.005;

int i=0;

bool finished = false;


int main(){



cout << "Enter a number using 4 or more decimal places: " ;
cin >> entry ;

result = entry/pi ;
result2 = entry*pi;

while (i<1000){

if ((result*1  == round(result))) {

    cout << "xyz";
    }
else if ( round(result*i)-(result*i) <= rangeUp && round(result*i)-(result*i) >= rangeDown)  {

        if (round(result*i) == 1){

        cout << "Your answer is pi " ;
        i=1000;
        finished = true;

        }
        else if (round(result*i) == 1){
         cout << "Your answer is: " << "pi/" << i ;
         finished = true;
         i=1000;
        }
        else if (round(result*i)>1 && i>1){
        cout << "Your answer is: " << round(result*i) <<  "pi/" << i ;
        i=1000;
        finished = true;
        }
}
else if ( (result2 - round(result2)) <= rangeUp &&  (result2 - round(result2)) >= rangeDown ){

        cout << "Your answer is: " << round(result2) <<  "/pi" ;
        i=1000;
        finished = true;

}
i++;
}
if (i==1000 && finished){

        cout << "Your number cannot be expressed efficiently with pi. " ;

}

}
