#include<string>
#include<iostream>

using namespace std;

int main(int argc, char*argv[]){
  //+++++++++++++++++ INPUT ++++++++++++

//  string input="10";
//check that how that stoi works, do it later

//simple simulation using int input;

  string input="10";

  //+++++++++++++ function implementation +++++++++++++

  int int_input = atoi(input.c_str());
  int accumulator=0;

  for(int i=1; i<=int_input; i++){
    if(i<5){
      accumulator+=i;
    }else if(i==6){
      accumulator+=i;
    }else if(i>7){
      if(i%5!=0 && i%7!=0){
        accumulator+=i;
      }
    }
  }

  input=to_string(accumulator);

  //+++++++++++++++ output ++++++++++++++

  cout<<input<<endl;

  exit(0);
}
