#include<iostream>
#include<time.h>

using namespace std;


int main(){

int n1, n2;
int Max=0;

cout << "Enter n1: "; cin >> n1;
cout << "Enter n2: "; cin >> n2;

int s[n1][n2];

srand(time(0));
for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++){
    s[i][j]=rand()%9+1;
    cout << " " << s[i][j];
      if(Max<s[i][j]){
        Max=s[i][j];
     }
   }
 cout << endl;
}

cout << endl;

for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++){
    if(s[i][j]==Max){
        s[i][j]=0;
      }
     cout << " " << s[i][j];
    }
 cout << endl;
}

}
