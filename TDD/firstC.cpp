#include <iostream>
#include <string>
using namespace std;

    

int Add(string num){

    if(num.length()==0){
            cout << "user string is empty";
            return 0;
        }

    int sum=0;
    int temp;
    for(int i=1;i<num.length()-1;++i){
      
        temp=num[i]-'0';

        if(temp<0){
            cout<<"negative not allowed"<<"\n";
            return 0;
        }
    
        if((temp>=0 && temp <10)){
            sum=sum+temp;
        }
    }


    return sum;  


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
