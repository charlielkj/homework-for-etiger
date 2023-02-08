/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct hero{
	string name;
	int power;
};
hero h[10];
bool cmp(const hero&a,const hero&b){
	if(a.power>b.power) return true;//如果a的战斗力大于b的战斗力,那a是排在b前面
	if(a.power<b.power) return false;//如果a的战斗力小于b的战斗力,那a不排在b前面
	if(a.name<b.name) return true;//如果a的名字小于b的名字,那a是排在b前面
	return false;//返回：a不排在b前面
}//王闻天
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) 
		cin>>h[i].name>>h[i].power;
	sort(h,h+n,cmp);
	for(int i=0;i<n;i++) 
		cout<<h[i].name<<": "<<h[i].power<<endl;
	return 0;
}


*/
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct student{
    int id,score;
};
student ran[100009];
bool cmp(const student&a,const student&b){
    if(a.score>b.score) return true;
    if(a.score<b.score) return false;
    if(a.id<b.id) return true;
    return false;
}//王闻天
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ran[i].score;
        ran[i].id=i+1;
    }
    sort(ran,ran+n,cmp);
    for(int i=0;i<n;i++){
        cout<<ran[i].id<<" ";
        cout<<ran[i].score<<endl;
    }
    return 0;
}
*//*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct treasure{
    int id,value,weight;
};
treasure escape[100009];
bool cmp(const treasure&a,const treasure&b){
    if(a.value>b.value) return true;
    if(a.value<b.value) return false;
    if(a.weight<b.weight) return true;
    if(a.weight>b.weight) return false;
    if(a.id<b.id) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>escape[i].id>>escape[i].value>>escape[i].weight;
    }
    sort(escape,escape+n,cmp);
    for(int i=0;i<n;i++){
        cout<<escape[i].id<<endl;
    }
    return 0;
}
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct hero{
    string name;
    int ATK,DEF,mq,sum;//mq=moral quality
};
hero match[100009];
bool cmp(const hero&a,const hero&b){
    if(a.sum>b.sum) return true;
    if(a.sum<b.sum) return false;
    if(a.ATK>b.ATK) return true;
    if(a.ATK<b.ATK) return false;
    if(a.mq>b.mq) return true;
    if(a.mq<b.mq) return false;
    if(a.DEF>b.DEF) return true;
    if(a.DEF<b.DEF) return false;
    if(a.name<b.name) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>match[i].name>>match[i].ATK>>match[i].DEF>>match[i].mq;
        match[i].sum=match[i].ATK+match[i].DEF+match[i].mq;
    }
    sort(match,match+n,cmp);
    for(int i=0;i<n;i++){
        cout<<match[i].name<<endl;
    }
    return 0;
}
