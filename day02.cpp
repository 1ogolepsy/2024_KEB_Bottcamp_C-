#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    // //프로그램 3-28
    // double number = 0.0, fractPart = 0.0;
    // int intPart = 0;

    // cout << "부동 소수점 입력: ";
    // cin >> number;

    // intPart = static_cast<int>(number);
    // fractPart = number - intPart;

    // cout << fixed << showpoint << setprecision(2);
    // cout << "원래 값: " << number << endl;
    // cout << "정수 부분: " << intPart << endl;
    // cout << "소수점 아래 부분: " << fractPart;
    
    // // 프로그램 3-29
    // unsigned int givenInt = 0, firstDigit = 0;
    
    // cout << "양의 정수 입력: ";
    // cin >> givenInt;

    // firstDigit = givenInt % 10;
    // cout << "입력한 정수: " << givenInt << endl;
    // cout << "첫 번째 자릿수 추출: " << firstDigit << endl;

    // // 프로그램 3-30
    // unsigned long duration = 0, hours = 0, minutes = 0, seconds = 0;

    // cout << "초 단위 시간을 양의 정수로 입력:";
    // cin >> duration;

    // hours = duration / 3600L;
    // minutes = (duration - (hours * 3600L)) / 60L;
    // seconds = duration - (hours * 3600L) - (minutes * 60);

    // cout << "입력된 초 단위 시간:" << duration << endl;
    // cout << "결과: ";
    // cout << hours << "시 ";
    // cout << minutes << "분 ";
    // cout << seconds << "초 ";

    // // 프로그램 3-31
    // int num1 = 0, num2 = 0, num3 = 0, sum = 0;
    // double average = 0.0, dev1 = 0.0, dev2 = 0.0, dev3 = 0.0;
    // cout << "첫 번째 숫자 입력: ";
    // cin >> num1;
    // cout << "두 번째 숫자 입력: ";
    // cin >> num2;
    // cout << "세 번째 숫자 입력: ";
    // cin >> num3;

    // sum = num1 + num2 + num3;
    // average = static_cast<double>(sum) / 3;
    // dev1 = num1 - average;
    // dev2 = num2 - average;
    // dev3 = num3 - average;
    
    // cout << fixed << setprecision(2);
    // cout << "세 숫자의 합: " << sum << endl;
    // cout << "평균: " << setw(9) << average << endl;
    // cout << "첫 번째 숫자의 분산: " << setw(9) << dev1 << endl;
    // cout << "두 번째 숫자의 분산: " << setw(9) << dev2 << endl;
    // cout << "두 번째 숫자의 분산: " << setw(9) << dev3 << endl;
    
    // // 프로그램 4-15
    // int score1 = 0, score2 = 0, score3 = 0, maxScore = 0, minScore = 0, score;

    // cout << "첫 번째 점수 입력: ";
    // cin >> score1;
    // cout << "두 번째 점수 입력: ";
    // cin >> score2;
    // cout << "세 번째 점수 입력: ";
    // cin >> score3;

    // if(score1 > score2 && score1 > score3)
    // {
    //     maxScore = score1;
    // }
    // else if(score2 > score1 && score2 > score3)
    // {
    //     maxScore = score2;
    // }
    // else{
    //     maxScore = score3;
    // }

    // if(score1 < score2 && score1 < score3)
    // {
    //     minScore = score1;
    // }
    // else if(score2 < score1 && score2 < score3)
    // {
    //     minScore = score2;
    // }
    // else{
    //     minScore = score3;
    // }

    // int temp = maxScore + minScore;
    // if(temp % 2 == 1)
    // {
    //     temp += 1;
    // }

    // score = temp / 2;

    // cout << "입력한 점수 = " << score1 << " " << score2 << " " << score3 << endl;
    // cout << "최소 점수와 최대 점수 = ";
    // cout << minScore << " " << maxScore << endl;
    // cout << "학생 성적 = " << score;
    
    // // 프로그램 4-16
    // double income = 0.0, tax = 0.0;
    // bool bracket1 = true, bracket2 = true, bracket3 = true, bracket4 = true;
    // double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00;
    // double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;

    // cout << "수입을 달러로 입력하세요: ";
    // cin >> income;

    // bracket1 = (income <= limit1) && (income >= 0);
    // bracket2 = (income <= limit2) && (income >= 0);
    // bracket3 = (income <= limit3) && (income >= 0);
    // bracket4 = (income > limit3);

    // if(bracket1)
    // {
    //     tax = income * rate1;
    // }
    // else if(bracket2)
    // {
    //     tax = limit1 * rate1 + (income - limit1) * rate2;
    // }
    // else if(bracket3)
    // {
    //     tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit3) * rate4;
    // }
    // else
    // {
    //     cout << "입력에 문제가 있습니다.";
    //     return 0;
    // }

    // cout << "수입 = " << income << endl;
    // cout << "세금 = " << tax;

    // // 프로그램 4-17
    // int month = 0, day = 0, totalDays = 0;

    // cout << "몇 월인지 입력하세요: ";
    // cin >> month;
    // cout << "며칠인지 입력하세요: ";
    // cin >> day;

    // int m01 = 31, m02 = 28, m03 = 31, m04 = 30, m05 = 31, m06 = 30, m07 = 31, m08 = 31, m09 = 30, m10 = 31, m11 = 30;

    // switch(month)
    // {
    //     case 12 : totalDays += m11;
    //     case 11 : totalDays += m10;
    //     case 10 : totalDays += m09;
    //     case 9 : totalDays += m08;
    //     case 8 : totalDays += m07;
    //     case 7 : totalDays += m06;
    //     case 6 : totalDays += m05;
    //     case 5 : totalDays += m04;
    //     case 4 : totalDays += m03;
    //     case 3 : totalDays += m02;
    //     case 2 : totalDays += m01;
    //     case 1 : totalDays += 0;
    // }

    // totalDays += day;

    // cout << "올해의 " << totalDays << "번째 날입니다. ";

    // 
    return 0;
}