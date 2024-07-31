#include<iostream>
using namespace std;
int main(){
    char w;
    cout<<"enter to check vowels:";
    cin>>w;
    if(w == 'A'||w == 'a'||w == 'e'||w == 'E'||w == 'I'||w == 'i'||w == 'O'||w == 'o'||w == 'u'||w == 'U' )
    {
      cout<<"The letter "<<w<<" is vowel";}
    else
     { cout<<"The letter "<<w<<" is consonent";}
    
}