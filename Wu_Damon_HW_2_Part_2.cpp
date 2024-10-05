// Damon Wu 
// 10/2/2024
// Hw 2 part 2

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

// Lotta doubles to mark down each persons score. I use a low and high to eliminate the outliers whilst scores 1-6 are used to take in inputs, I will then organize the scores. points 1 - 4  will be used to find the average.
    double high;
    double low;
// takes in the inputs
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double score6;
//inputs are then sorted into these points used for calculations
    double point1;
    double point2;
    double point3;
    double point4;

    //takes in the first point measurement, since its the first one, it will be nuetral till more inforation is gotten. 
    cout <<"Judge 1 please put your score in, remember, the max score is 10 and the lowest is 0, put your scores in whole numbers! \n";
    cin >> score1;
    score1 = point1;

    // slighty more complex, if score 2 is greater than score 1, then it becomes the new high, if its lower, then point 1 becomes the new high and score 2 becomes the new low. 
    cout <<"Judge 2 please put your score in. \n";
    cin >> score2;
    if(score2 > score1){
        score2 = high;
        score1 = low;
        }
        if (score1 > score2) {
        score2 = low;
        score1 = high;
        }
    
    // yay complexity, if score 3 is greater than the before mentioned high, then that becomes the new high, if its lower than the before mentioned low, it becomes the new low, if its neither, it becomes point1. 
    cout <<"Judge 3 please put your score in. \n";
    cin >> score3;
    if(score3 > high){
        score3 = high;
    }
        if(score3 < low){
            score3 = low;
        }
        else {
            score3 = point1;
        }
    
    cout << "Judge 4 please put your score in. \n";
    cin >> score4;
     if(score4 > high){
        score4 = high;
        if(score1||score2||score3 = high){
            score1||score2||score3 = point1;
        }

    }
        if(score4 < low){
            score4 = low;
        if(score1||score2||score3 = low){
            score1||score2||score3 = point1;
        }
        }
    
    cout << "Judge 5 please put your score in. \n";
    cin >> score5;
     if(score5 > high){
        score5 = high;
    }
        if(score5 < low){
            score5 = low;
        }

    cout << "Judge 6 please put your score in. \n";
    cin >> score6;
     if(score6 > high){
        score6 = high;
    }
        if(score6 < low){
            score6 = low;
        }
    
    cout << "Your score is " << (point1 + point2 + point3 + point4)/4 << " good job! \n";

    return 0; // ends code

    /*
    
    */
}