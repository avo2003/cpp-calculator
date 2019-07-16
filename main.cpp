#include <iostream>

using namespace std;

int main()
{
  int num1 , num2;
  char op;

  cout<<"number 1"<<endl;
  cin >>num1;
  cout<<"number 2"<<endl;
   cin >>num2;
  cout<<"operation"<<endl;
   cin >>op;

    if (op=='+'){
        cout<< num1+num2<<endl;
    }else if (op=='-'){
        cout<< num1-num2<<endl;
    }else if (op=='*'){
        cout<< num1*num2<<endl;
    }if (op=='e/'){
        cout<< num1/num2<<endl;
    }else{cout<<"not difaind"<<endl;}
    return 0;
}
