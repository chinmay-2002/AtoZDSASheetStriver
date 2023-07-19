class Count{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int n = N;
        while(n!=0){
            int rem = n % 10;
            n = n / 10;
            if(rem ==0){
                continue;
            }
            if(N % rem ==0){
                count++;
            }
            
        }
        return count;
        
        
        // int n = N;
        // int count = 0;
        // while(n!=0){
        //     int rem = n%10;
        //     n = n/10;
        //     if(rem==0){
        //         continue;
        //     }
        //     if(N%rem==0){
        //         count++;
        //     }
            
        // }
        // return count;
        




        
    }
};














#include <bits/stdc++.h>
using namespace std;


map<int,int> finalAmount(vector<string> &str, map<int,int>&m){

  for(int i=0; i<str.size(); i++){
    string a = str[i];

    size_t delimiterPos = a.find("->");

    string number1String = a.substr(0, delimiterPos);
    int number1 = std::stoi(number1String);

    string number2String = a.substr(delimiterPos + 2);
    int number2 = std::stoi(number2String);

    if (m.find(number1)==m.end()) 
    {
      m[number1] = number2;
    }
    else{
      m[number1] = m[number1] + number2;
    }

  }
  return m;

}



int main() {
     map<int, int> m = {
        {123, 4000},
        {234, 1000},
        {345, -500}
    };
    vector<string> strings = { "123->+5000", "234->+1000", "123->+2000", "345->-500", "123->+1000" };

    map<int, int> ans = finalAmount(strings,m);
    cout<<"---------------------------------------------------------"<<endl;
    cout << "Final Amounts after doing transactions :" << endl;
    for(auto ans : m){
      cout << ans.first << " Has Availaible amount " << ans.second << endl;
    }
    cout<<"---------------------------------------------------------"<<endl;


    return 0;
}




