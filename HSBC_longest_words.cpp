#include<string>
#include<vector>
#include<iostream>

using namespace std;

struct maxx{
  int length;
  string name;
};

bool lastchar(int i, string input){
  if(i==input.size()-1){
    return true;
  }else{
    return false;
  }
}

void add_to_vector(int i, string input, vector<string> &all){
  if(!lastchar(i,input)){
    int j=i+1;
    string new1;
    while (input.at(j)!=' '){
      new1.push_back(input[j]);
      j++;
    }
    all.push_back(new1);
  }

}

int main(int argc, char*argv[]){
  //+++++++++++++++++ INPUT ++++++++++++


  string input="hello stiupid bruce bad zhiyuan1 zhang szymon kobus";

  //+++++++++++++ function implementation +++++++++++++

    vector<string> all_words;

    string par=input;
    par.insert(0," ");
    par.insert(par.size()," ");

    for(int i=0;i<par.size();i++){
      if(par.at(i)==' '){
        add_to_vector(i, par, all_words);

      }
    }

    maxx longest;
    longest.length=0;
    longest.name=" ";

    for(int i=0; i<all_words.size(); i++){
      if(all_words[i].size()>longest.length){
        longest.length=all_words[i].size();
        longest.name=all_words[i];
      }
    }


    input = longest.name;
  //+++++++++++++++ output ++++++++++++++

  cout<<input<<endl;

  exit(0);
}
