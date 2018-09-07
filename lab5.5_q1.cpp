#include<iostream>
using namespace std;
int main() {
int n;
//ask for size of pattern
cout <<"enter no. of stars for size of square pattern:";
cin >> n;
//print stars and spaces
for(int i=1;i<=n;++i){
for(int j=1;j<=n;++j){
cout << "* ";
}
//go to next line and repeat
cout << endl;
}
return 0;
}


