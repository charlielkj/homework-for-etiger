//
//  case_308.cpp
//  lesson
//
//  Created by 王斌军 on 2023/1/29.
//

#include <iostream>
#include <string>
#include <set>
using namespace std;
struct dog
{
    string name;
    int year;
    bool operator<(const dog&d)const
    {
        if (year < d.year)
        {
            return true;
        }
        if (year > d.year)
        {
            return false;
        }
        if (name < d.name)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    set<dog> dogs;
    dog info;
    int dogs_,owners;
    cin >> dogs_ >> owners;
    for (int i = 0; i < dogs_; i++)
    {
        cin >> info.name >> info.year;
        dogs.insert(info);
    }
    dog toFind;
    for (int i = 0; i < owners; i++)
    {
        cin >> toFind.year >> toFind.name;
        if (dogs.count(toFind))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    return 0;
}
