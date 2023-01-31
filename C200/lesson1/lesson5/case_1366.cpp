//
//  case_1366.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/16.
//

#include <iostream>
using namespace std;
int main(){
    int nodes,zero_node,one_node,two_nodes;
    freopen("sons.in","w",stdin);
    freopen("sons.out","r",stdout);
    cin>>nodes;
    one_node=~nodes%2;
    one_node*=-1;
    //1==>0,0==>1;
    two_nodes=(nodes-one_node)/2;
    zero_node=two_nodes+1;
    //n0=n2+1;
    cout<<zero_node<<" "<<one_node<<" "<<two_nodes<<endl;
}
