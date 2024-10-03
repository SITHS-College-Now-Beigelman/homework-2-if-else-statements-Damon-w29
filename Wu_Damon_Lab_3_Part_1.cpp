// Damon Wu 
// 10/2/2024
// Hw 2 part 1 

#include<iostream>
#include<string>

using namespace std;

int main(){
    int month;
    int day;

    cout << "To determine the current season, please input a month and date in numerical format, (for example, march first is 3, 1)  \n";
    cin >> month;
    cin >> day;
    
    if(day > 31 || month > 13)
        cout << "Invalid date, please be sensible remember that months have a max of 31 days/ there are 12 months in a year \n";

    if(month == 1) {
        cout << "It is currently Winter.";
    }

    if(month == 2){
        cout << "It is currently Winter";
    }
    if(month == 3){
       if(day <= 20){
       cout << "It is currently Winter";
       }
        else {
        cout << "It is currently Spring";
        }
    }
    if(month == 4){
        cout << "It is currently Spring";
    }
    if(month == 5){
        cout << "It is currently Spring";
    }
    if(month == 6){
        if(day <= 20){
        cout << "It is currently Spring";
        }
        else {
            cout << "it is currently Summer";
        }
    }
    if(month == 7){
        cout << "It is currently Summer";
    }
    if(month == 8){
        cout << "It is currently Summer";
    }
    if(month == 9){
        if(day <=22){
        cout << "It is currently Summer";
        }
        else {
            cout << "It is currently Fall";
        }
    }
    if(month == 10){
        cout << "It is currently Fall";
    }
    if(month == 11){
        cout << "It is currently Fall";
    }
    if(month == 12){
        if(day <= 21){
        cout << "It is currently Fall ";
        }
        else {
            cout << "it is currently winter";
        }
    return 0;
}
}