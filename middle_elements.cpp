#include<iostream>
#include<time.h>

using namespace std;


int main(){

int n;

cout << "Enter n1: "; cin >> n;
 if(n%2!=0){
  int s[n];

srand(time(0));
  for(int j=0; j<n; j++){
    s[j]=rand()%9+1;
    cout << " " << s[j];
 }

int Array[3];

Array[0]=s[n/2-1];
Array[1]=s[n/2];
Array[2]=s[n/2+1];

cout << endl;

for(int i=0; i<3; i++){
    cout << " " << Array[i];
}

 }else{
 cout << "Error... Toq son kiriting!" << endl;
}
}
