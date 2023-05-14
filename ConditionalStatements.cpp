/*
Input Format

A single integer, n.

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9
Explanation 2

n is greater than , so we print Greater than 9.*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cin >> n;
    if(n==1){
        cout << "one";
    }
    else  if(n==2){
        cout << "two";
    }
    else  if(n==3){
        cout << "three";
    }
    else  if(n==4){
        cout << "four";
    }
    else  if(n==5){
        cout << "five";
    }
    else  if(n==6){
        cout << "six";
    }
    else  if(n==7){
        cout << "seven";
    }
    else  if(n==8){
        cout << "eight";
    }
    else  if(n==9){
        cout << "nine";
    }
    else{
        cout << "Greater than 9";
    }


    // Write your code here

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
