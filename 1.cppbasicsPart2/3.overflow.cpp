#include <bits/stdc++.h>
using namespace std;

int main(){
	// int, char, long int, long long int, float, double

	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    // int a = 100000;
    // int b = 100000;
    // int c = a*b;
    // above ones won't give the correct value becaus of overflow

    // long int a = 100000;
    // long int b = 100000;
    // long int c = a*b;
    // ok way

    int a = 100000;
    int b = 100000;
    long int c = a * 1LL * b; // works as long long int
    cout << c << endl;
    // best way

    // double a = 100000;
    // double b = 100000;
    // double c = a*b;
    // cout << fixed << setprecision(0) << c << endl;
    // this will give you the same correct ans
    // but you have to avoid double and float unless it's mentioned or really needed
    // because double and float have precision errors for big numbers

	
    // check
    int mx = INT_MAX;
    cout << mx + 1;
}