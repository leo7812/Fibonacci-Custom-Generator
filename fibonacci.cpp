#include<iostream>
using namespace std;

//Made by leonardo Flores Gonzalez 7/26/22

int main(){
    int num,prev,nextNum,temp;
    cout<<"Fibonnacci Generator:"<<endl;
    cout<<"Enter amount of numbers to generate: ";
    cin>>num;
    
    for(int i=0; i<num; i++){
        if (i==0){
            prev = 0;
            cout<<"0"<<endl;
        }
        else if(i==1){
            nextNum = 1;
            cout<<"1"<<endl;
        }
        else{
            cout<<nextNum+prev<<endl;
            temp = nextNum;
            nextNum = nextNum + prev;
            prev = temp;
        }
    }

    return 0;
}