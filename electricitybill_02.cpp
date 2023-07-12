/*This is a c++ program for displaying the amount of the electricity bill as per
user enters the unit of the electricity that they have consumed*/

#include<iostream>
using namespace std;
int main(){
    
    int mw;
    float total;

cout<<"Enter the Kilowatt per hour"<<'\n';
cin>>mw;

if(mw>=0 && mw<=10){
    cout<<"The minumum demand is: Rs.30"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}
else if(mw>10 && mw<=20){
    total=30+(float)(mw)*3;
    cout<<"The minumum demand is: Rs.30"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}
else if(mw>20 && mw<=30){
    total=50+(float)(mw)*6.50;
    cout<<"The minumum demand is: Rs.50"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>30 && mw<=50){
    total=50+(float)(mw)*8;
    cout<<"The minumum demand is: Rs.50"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>50 && mw<=100){
    total=50+(float)(mw)*9.50;
    cout<<"The minumum demand is: Rs.75"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>100 && mw<=150){
    total=100+(float)(mw)*9.50;
    cout<<"The minumum demand is: Rs.100"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>150 && mw<=250){
    total=125+(float)(mw)*10;
    cout<<"The minumum demand is: Rs.125"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>250 && mw<=400){
    total=150+(float)(mw)*11;
    cout<<"The minumum demand is: Rs.150"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else if(mw>400){
    total=175+(float)(mw)*12;
    cout<<"The minumum demand is: Rs.175"<<'\n';
    cout<<"The energy charge per hour is:"<<total;
}

else{
    cout<<("Please enter the valid unit\n");
}

return 0;

}

