#include <iostream>
using namespace std;

int main() {

int calls=0;
float bill=0,remain=0;

cout<<"***** Program that calculate the monthly telephone bills as per the following rule****\n\n";

cout<<"Please introduce the numbers of calls monthly: ";   
cin>>calls;cout<<"\n";

if (calls <100){
  cout<<"Your bill montly is under $200 \n"; 
}
  else bill=200;

  if (calls >=100 && calls <=150)
  {
  remain = calls - 100;   
  bill = bill + (remain * 0.60); 
  cout<<"Your bill monthly are $: " <<bill; cout<<"\n";
  } 
  else if ( calls >150 && calls <=200 ){
    remain = calls - 150;  
    bill = bill + (50 * 0.60) + (remain * 0.50); 
    cout<<"Your bill monthly are $: " <<bill; cout<<"\n";
    }
    else if ( calls > 200 ) {
      remain = calls - 200;
      bill = bill + (50 * 0.60) + (50 * 0.50) + (remain * 0.40);
      cout<<"Your bill monthly are $: " <<bill; cout<<"\n";
    }

  return 0;
} 