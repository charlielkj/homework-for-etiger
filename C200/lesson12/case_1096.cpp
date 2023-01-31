//
//  case_1096.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/31.
//

#include <iostream>
using namespace std;
char ans[13] = {'D','B','C','C','B','C','D','D','A','C','B','C','A'};
int main(){
    int input = 0;
    int isMultiple_choice_questions = false;
    cin >> input;
    switch (input)
    {
        case 14:
        {
            cout << "AD" << endl;
            isMultiple_choice_questions = true;
            
        }
            break;
            
        case 15:
        {
            cout << "CD" << endl;
            isMultiple_choice_questions = true;
        }
            break;
            
        default:
            break;
    }
    if (isMultiple_choice_questions == false)
    {
        cout << ans[input] << endl;

    }
    return 0;
}
