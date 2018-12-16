#include<iostream>
#include<vector>

using namespace std;

class combination{
  private:
    double ele1;
    double ele2;
    double total;
  public:

    combination(double e1, double e2){
      ele1=e1;
      ele2=e2;
      total=e1+e2;
    }
    double returnt(){
      return total;
    }
    bool operator > (combination t){
      return total > t.total;
    }

    combination & operator =( const combination & other ) {
     this->ele1   = other.ele1;
     this->ele2   = other.ele2;
     this->total  = other.total ;
     return *this ;
    }

    bool check_max(int limit){
      if(total > limit){
        return false;
      }
      else{
        return true;
      }
    }

    virtual std::ostream& print(std::ostream& os){
      cout<<"the best fitted combination would be "<<ele1<<" together with "<<ele2<<endl;
      cout<<"the total weight of them is "<<total<<" smaller than the maximum limit 23.5kg"<<endl;
    }

    friend std::ostream& operator<<(std::ostream& os , combination& combination);

};

  std::ostream& operator<<(std::ostream& os , combination& combination){
    return combination.print (os);
  }

int main(){
double max =23.5;
// +++++++++++ inputs ++++++++++++
vector<double> nums;
nums.push_back(1);
nums.push_back(5);
nums.push_back(5.5);
nums.push_back(10);
nums.push_back(10.5);
nums.push_back(15);
nums.push_back(8);

cout<<"the numbers in array are: "<<endl;
vector<double>::iterator it;

for(it = nums.begin();it!=nums.end();++it){
  cout<<*it<<" ";

}
cout<<endl;
cout<< "the limit is "<<max<<", and the expectation value is 23, addition by 15 and 8"<<endl;
//++++++++++++ algorithm implementation ++++++++++++++++


vector<combination> ap;
for(int i=0;i<nums.size();i++){
  for(int j=i;j<nums.size();j++){
    combination a(nums[i],nums[j]);
    ap.push_back(a);
  }
}

vector<combination>::iterator it1;

combination maxt(0,0);
for(it1 = ap.begin();it1!=ap.end();++it1){
  if(it1->check_max(max)){
    if(*it1>maxt){
      maxt=*it1;// !!!!!!!! overloading operator =  !!!!!!!!!!!!!!!
    }
  }
}

cout<<maxt<<endl;// overloading operator << ;


  exit(0);
}
