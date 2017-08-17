
#include<iostream>
using namespace std;


int main(){
  
    int height,height_feet,height_inches; // height inches we do not need to ocnvert we just need to hold and add to
    cout<<"Please enter your height in feet and inches: ";
    cin>>height_feet>>height_inches;
    height=height_feet*12+height_inches; // simple equation taking feet 8 12 and adding tht height inches already given.
    cout<<"Your height of "<<height_feet<<"'"<<height_inches<<"\" equals "<<height<<" inches."<<endl;

}
