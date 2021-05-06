#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    //variables for if we are currently in a valley and current pose
    int pose, numValleys=0;
    bool inValley = false;
    
    //for loop to iterate through movements
    for(int i=0;i<steps;i++){
        //if D, pose decreases, else increases
        (path[i]=='D')?pose--:pose++;
        //if pose less than 0 and wasn't already in valley increment numValleys
        if(pose<0 && !inValley){
            numValleys++;
            inValley = true;
        }
        //check to see if we have reached sealevel again
        else if(pose==0){
            inValley = false;
        }
    }
    
    return numValleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

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
