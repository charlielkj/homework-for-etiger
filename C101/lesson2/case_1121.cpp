//
//  case_1121.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/24.
//

#include <iostream>
#include <string>
using namespace std;
struct plans
{
    int start;
    int end;
};
// white = false
// black = true
int main()
{
    string input;
    cin >> input;
    int num_plan = 0;
    cin >> num_plan;
    long size = input.length();
    plans plan[num_plan];
    for (int i = 0; i < num_plan; i++)
    {
        cin >> plan[i].start >> plan[i].end;
    }
    

    
    return 0;
}
/*
    for (int i = 0; i < num_plan; i++)
    {
        int start = plan[i].start;
        int end = plan[i].end;
        int num = end - start + 1;
        int sum = 0;
        for (int j = start - 1; j <= end - 1; j++)
        {
            sum += input[j];
        }
        
        int b_count = (num * 'W' - sum) / ('W' - 'B');
        cout << b_count << " ";
    }
*/
/*
 
 */
