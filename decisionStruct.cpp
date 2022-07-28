#include<iostream> 
using namespace std;


//WAP to check lowest from two no.

// int main(){
//     int a,b;
//     cout<<endl<<"Enter a no in a:";
//     cin>>a;

//     cout<<endl<<"Enter a no in b:";
//     cin>>b;

//     if (a<b){
//         cout<<endl<<"a is less then b";
//     }
//     else{
//         cout<<endl<<"b is less then a"; 
//     }
//     return 0;
// }


// WAP to check the no to be divisible by 5

// int main(){
//     int a;
//     cout<<endl<<"Enter a no in a:";
//     cin>>a;


//     if (a%5==0){
//         cout<<endl<<"divisible by 5";
//     }
//     else{
//         cout<<endl<<"not divisible by 5"; 
//     }
//     return 0;
// }


//WAP to check if triangle is possible if angles are entered.

int main(){
    int angle1,angle2,angle3;
    cout<<endl<<"Enter a angle 1 value:";
    cin>>angle1;

    cout<<endl<<"Enter a angle 2 value:";
    cin>>angle2;

    cout<<endl<<"Enter a angle 3 value:";
    cin>>angle3;

    if (angle1+angle2+angle3 == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0){
        cout<<endl<<"triangle possible";
    }
    else{
        cout<<endl<<"triangle not possible"; 
    }
    return 0;
}
