#include <iostream>
#include<cstdlib>

using namespace std;

void game(){
 
 int limit =0;
 int score=0;
 int randomnumber;
 int userinput;
 string condition;
 

     
 while(limit < 20){
     
cout<<"Enter The Number 1-9\t\tPlayer Score : "<<score<<endl;
cout<<"\n";
cin>>userinput;
cout<<"\n";

randomnumber=rand() % 10;

if(userinput==randomnumber){
    
cout<<"Your Prediction  Is Correct"<<endl;
cout<<"\n";
cout<<"number is : "<<randomnumber<<endl;
cout<<"\n";
score++;
    
}

else{
    cout<<"Your Prediction is Incorrect "<<endl;
    cout<<"\n";
    
cout<<"number is : "<<randomnumber<<endl;
cout<<"\n";
}

limit++;


 } 
  
  
 
 
 cout<<"Your score is "<<score<<" out of "<<limit<<endl;
 cout<<"\n";
 cout<<"Enter y for play again"<<endl;
 cout<<"\n";
 cin>>condition;
 cout<<"\n";
 if(condition=="y"||condition=="Y"){
     limit=0;
     game();
     cout<<"\n";
 }
 
}

int main(){
    game();
    return 0;
}