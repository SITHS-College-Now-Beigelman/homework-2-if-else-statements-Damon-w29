// Damon Wu 
// 10/2/2024
// Hw 2 part 2

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

// Lotta doubles to mark down each persons score. I use a low and high to eliminate the outliers whilst scores 1-6 are used to take in inputs, I will then organize the scores. scores 1 - 4 will be used for calculations 
// if im being honest I really think that int should be used for scores.
    double high;
    double low;
// takes in the inputs
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double score6;
// will be used to determine the total score 
    double total;

    //these first segments will take in the points from all the judges
    cout <<"Judge 1 please put your score in, remember, the max score is 10 and the lowest is 0, put your scores in whole numbers! \n";
    cin >> score1;
    
    cout <<"Judge 2 please put your score in. \n";
    cin >> score2;
    
    cout <<"Judge 3 please put your score in. \n";
    cin >> score3;
    
    cout << "Judge 4 please put your score in. \n";
    cin >> score4;
    
    cout << "Judge 5 please put your score in. \n";
    cin >> score5; 

    cout << "Judge 6 please put your score in. \n";
    cin >> score6;
    
    /* 
    How this code will work is that the total scores will be tallied up, then an algorithm will sort the remaining scores into the lowest and highest, 
    those lowest and highest numbers will be subtracted from the total score then divided by 4, finding the average of the 4 median scores.
    */
    total = (score1 + score2 + score3 + score4 + score5 +score6);

    if(score1 < score2 && score3 && score4 && score5 && score6){
        score1 = low;
    }
        else if (score2 < score3 && score4 && score5 && score6){
            score2 = low;
        }
        else if (score3 < score4 && score5 && score6) {
            score3 = low;
        }
        else if (score4 < score5 && score6){
            score4 = low;
        }
        else if (score5 < score6){
            score5 = low; 
        }
        else {
            score6 = low;
        }

    //this is essentially the same as the code before, however, this is finding the highest number. 
    if(score1 > score2 && score3 && score4 && score5 && score6){
        score1 = high;
    }
        else if (score2 > score3 && score4 && score5 && score6){
            score2 = high;
        }
        else if (score3 > score4 && score5 && score6) {
            score3 = high;
        }
        else if (score4 > score5 && score6){
            score4 = high;
        }
        else if (score5 > score6){
            score5 = high; 
        }
        else {
            score6 = high;
        }


    cout << "The judges have decided, your score is " <<fixed<< setprecision(1) << (total - (low + high))/4 << " good job! \n";
    
    return 0; // ends code

    /*
    
    */
}