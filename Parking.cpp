#include<iostream>
using namespace std;

int main(){

    int u_input; //I/p by the user
    int amount = 0, count = 0;

    
    // Menu of the system
    while(true){
    cout<<"Press 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"Press 3 for Bus"<<endl;
    cout<<"Press 4 to check the record"<<endl;
    cout<<"Press 5 to delete the record"<<endl;



    // I/p entered by the user
    cin>>u_input;



    // For Rickshaw
    if(u_input == 1){
        for(count<=50){
        amount = amount + 100;
        count = count + 1;
        }
        else{
            cout<<"The Parking is full"<<endl;
        }
    }



    // For Car
    else if(u_input == 2){
        for(count<=50){
        amount = amount + 200;
        count = count + 1;
        }
        else{
            cout<<"The Parking is full"<<endl;
        }
    }



    // For Bus
    else if(u_input == 3){
        for(count<=50){
        amount = amount + 200;
        count = count + 1;
        }
        else{
            cout<<"The Parking is full"<<endl;
        }
    }



    //Check the record
    else if(u_input == 4){
        cout<<"The total amount = "<<amount<<endl;
        cout<<"The total number of vehicles parked = "<<count<<endl;
    }

    //Delete the record
    else if(u_input == 5){
        amount = 0;
        count = 0;
    }

    else{
        cout<<"Invalid number"<<endl;
    }

    }
    return 0;
}