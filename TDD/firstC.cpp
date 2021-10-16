#include <iostream>
#include <string>

using namespace std;

int Add(string num){


    if(num.length()==0){
            cout << "user string is empty"<<"\n";
            return 0;
        }

   int strToNum=stoi(num);

   try{
      if(strToNum<0){
        throw strToNum;
      }
   }
   catch(int strToNum){
    cout<<"negative not allowed"<<"\n";
   }	
	 return strToNum;
}

int main()
{
    string input;
    cout<<"input : ";
    cin>>input;

    int res=Add(input);
    cout<<"res :"<<res;

    return 0;

}
