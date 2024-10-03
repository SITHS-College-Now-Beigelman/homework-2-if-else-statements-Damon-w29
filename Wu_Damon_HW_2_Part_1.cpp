// Damon Wu 
// 10/2/2024
// Hw 2 part 1 

#include<iostream>
#include<string>

using namespace std;

int main(){
    int month;
    int day;

    // user inputs month and day when prompted to 
    cout << "To determine the current season, please input a month and date in numerical format, (for example, march first is 3, 1)  \n";
    cin >> month;
    cin >> day;
    
    // in case the user inputs a month over 12 or day over 31, outputs text that tells the user that something is wrong.
    if(day > 31 || day < 1 || month > 13 || month < 1 ){
        cout << "Invalid date. Remember, there are 12 months in a year and up to 31 days in a month, if you put a negative, why?";
        return 0;
    }

    if(month == 1) {                             // if the month inputed is 1, it tells that its currently winter since there is no date of transition in the month of January. 
        cout << "It is currently Winter.";
    }
    if(month == 2){                              // if the month inputed is 2, it tells that its currently winter since there is no date of transition in the month of Febuary.
        cout << "It is currently Winter.";
    }
    if(month == 3){                              // if the month inputed is 3, and the day 20 or below, it prints winter, however if the day is at least 21 it prints spring due to 3/21 being the transition to spring. 
       if(day <= 20){
       cout << "It is currently Winter.";
       }
        else {
        cout << "It is currently Spring.";
        }
    }
    if(month == 4){                             // if the month inputed is 4, it tells that its currently Spring since there is no date of transition in the month of April.
        cout << "It is currently Spring.";
    }
    if(month == 5){                             // if the month inputed is 5, it tells that its currently Spring since there is no date of transition in the month of May. 
        cout << "It is currently Spring.";
    }
    if(month == 6){                             // if the month inputed is 6, and the day 20 or below, it prints Spring, however if the day is at least 21 it prints Summer due to 6/21 being the transition to Summer.
        if(day <= 20){
        cout << "It is currently Spring.";
        }
        else {
            cout << "it is currently Summer.";
        }
    }
    if(month == 7){                             // if the month inputed is 7, it tells that its currently Summer since there is no date of transition in the month of July.
        cout << "It is currently Summer.";
    }
    if(month == 8){                             // if the month inputed is 8, it tells that its currently Summer since there is no date of transition in the month of August.
        cout << "It is currently Summer.";
    }
    if(month == 9){                             // if the month inputed is 9, and the day 22 or below, it prints Summer, however if the day is at least 23 it prints Fall, due to 9/23 being the transition to Fall.
        if(day <=22){
        cout << "It is currently Summer.";
        }
        else {
            cout << "It is currently Fall.";
        }
    }
    if(month == 10){                            // if the month inputed is 10, it tells that its currently Fall since there is no date of transition in the month of October.
        cout << "It is currently Fall.";
    }
    if(month == 11){                            // if the month inputed is 11, it tells that its currently Fall since there is no date of transition in the month of November.
        cout << "It is currently Fall.";
    }
    if(month == 12){                            // if the month inputed is 12, and the day 21 or below, it prints Fall, however if the day is at least 22 it prints Winter, due to 12/22 being the transition to Winter.
        if(day <= 21){
        cout << "It is currently Fall.";
        }
        else {
            cout << "it is currently Winter.";
        }
    return 0;   // ends the code 
    }
}