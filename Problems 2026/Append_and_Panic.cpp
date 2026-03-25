//CodeForces
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, res;
    cin >> str;
    res = str;

    sort(str.begin(), str.end());

    //This problem casb be easily resolved within parameters with a brute force approach
    for(int i = 0; i < str.length()-1; i++){
        for(int j = i+1; j < str.length();){
            if(str[i] == str[j])
                str.erase(j, 1);
            else
                j++;
        }
    }

    cout << res.length() - str.length() << endl;

}


/**
 * Problem Description:
 * 
 * Today is Gabriel's first day at his new job, and he has been given his first task.
 * He needs to read a string made up of uppercase letters from a file, sort the letters
 * in the string alphabetically, remove repeated letters, and then write the result
 * back to the original file.
 * 
 * For example:
 *   Original string: "ICPC"
 *   Sorted string: "CCIP"
 *   After removing duplicates: "CIP"
 * 
 * However, Gabriel made a mistake. Instead of overwriting the file with the processed
 * string, he appended it to the end of the original string.
 * 
 * As a result, the file now contains:
 *   S = t + sorted_unique(t)
 * 
 * Given the corrupted string S, your task is to determine the length of the original
 * string t.
 * 
 * Input:
 *   A single line containing a string S of uppercase letters (2 ≤ |S| ≤ 2000).
 *   S is guaranteed to be the concatenation of:
 *     - the original string t
 *     - the sorted string with duplicate letters removed from t
 * 
 * Output:
 *   Print a single integer representing the length of the original string t.
 */