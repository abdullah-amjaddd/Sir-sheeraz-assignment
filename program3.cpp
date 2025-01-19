#include<iostream>
using namespace std;
int main() {
int num,Positivecount=0,Negativecount=0;
do{
cout<<"Enter a number:";
cin>>num;
if(num>0) {
Positivecount++;
} else if(num<0) {
Negativecount++;
}
}while(num!=0);
cout<<"Positive numbers are:"<<Positivecount<<endl;
cout<<"Negative numbers are:"<<Negativecount<<endl;
return 0;
}