#include<iostream>
using namespace std;
int main() {
int i,n,sum=0;
cout<<"Enter the value of the nth term:";
cin>>n;
cout<<"Series terms:"<<endl;
while(i<=n) {
int square=i*i;
cout<<i<<"*"<<i<<"="<<square<<endl;
sum+=square;
i++;
}
cout<<"The sum of the series is:"<<sum<<endl;
return 0;
}
