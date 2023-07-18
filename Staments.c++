//program for prime no.//
  #include<iostream>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }



//Program for Finding fahrenheit to celsius//

#include<iostream>
using namespace std;
int main(){
    double F,C;
    cout<<"Enter the value of F"<<endl;
    cin >> F;
    C=5*(F-32)/9;
    cout<<C;
    
}


//program for fahrenheit to celsius table//
#include<iostream>
using namespace std;
int main(){
    double C;
    cout<<"Enter the value of n"<<endl;
    int n;
    cin >>n;
    double F=200;
    while(F<=n){
    C=5*(F-32)/9;
    cout<<C<<endl;
    F=F+1;
    
}
}


