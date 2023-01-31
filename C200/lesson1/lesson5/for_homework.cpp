/*/#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <map>
using namespace std;
void case_315()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"#";
        for(int j=2;j<=i;j++)
            cout<<"#";
        cout<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
            cout<<" ";
        for(int j=1;j<=n+1-i;j++)
            cout<<"#";
        for(int j=n-1;j<=i-1;j++)
            cout<<" ";
        for(int j=2;j<=n+1-i;j++)
            cout<<"#";
        cout<<endl;
        
    }
}

bool isPrime(int x) {
    if(x<=1)
        return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}

bool case_288(){
    freopen("pair.in","r",stdin);
    freopen("pair.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(abs(a-b)==2&&isPrime(a)&&isPrime(b))
        return 1;
    return 0;
}
bool isLeap(int year){
    return year%400==0||year%4==0&&year%100!=0;
}
int case_1780(){
    int starty,endy;
    int year[10000];
    cin>>starty>>endy;
    int cnt=0;
    for(int i=0;i<=endy-starty;i++){
        year[i]=starty+i;
        bool isL=isLeap(year[i]);
        if(isL)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
bool isPalindrome(string s){
    int l=0;
    int r=s.length()-1;
    while (l<r) {
        if(s[l]!=s[r])
            return false;
        l++;
        r--;
    }
    return true;
   }
int case_1781(){
    int num;
    cin>>num;
    string number;
    for(int i=0;i<num;i++){
        cin>>number;
        if (isPalindrome(number))
            cout<<"Yes"<<" ";
        else
            cout<<"No"<<" ";
    }
    return 0;
}
bool isBeside(int a,int b){
    if(abs(a-b)==1)
        return true;
    return false;
}
int case_1371(){
    int num;
    cin>>num;
    int input1,input2;
    for(int i=0;i<num;i++){
        cin>>input1>>input2;
        if (isBeside(input1,input2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
void pyramid(int m,char x){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<char(x);
        for(int j=2;j<=i;j++)
            cout<<char(x);
        cout<<endl;
    }
}
int case_119(){
    int n;char c;
    cin>>n>>c;
    pyramid(n,c);
    pyramid(2*n,c);
    return 0;
}
void case_345(){
    int num;
    cin>>num;
    int input1,input2;
    for (int i=0;i<num;i++){
        int cnt=0;
        cin>>input1>>input2;
        for(int i=0;i<input2-input1;i++)
            if(isPrime(input1+i))
                cnt++;
        cout<<cnt<<" ";
    }
    
}
void case_1797(){
    //freopen("idol.in","r",stdin);
    //freopen("idol.out","w",stdout);
    int n;
    cin>>n;
    int input[n+1];
    for(int i=0;i<n;i++){
        cin>>input[i];
        
    }
    cout<<min_element(input,input+n)-input<<" ";
    cout<<*min_element(input,input+n)<<endl;
}
void case_878(){
    string kind;
    int size;
    int st_addr;
    int toFind;
    cin>>kind;
    cin>>size>>st_addr;
    cin>>toFind;
    if(kind=="char"){
        if(toFind-st_addr>=0&&toFind-st_addr<size)
            cout<<toFind-st_addr<<endl;
        else
            cout<<"Error"<<endl;
    }
    else{
        if(toFind-st_addr>=0&&(toFind-st_addr)/4<size)
            cout<<(toFind-st_addr)/4<<endl;
        else
            cout<<"Error"<<endl;
        
    }
}
void case_1147(){
    int n;
    int k;
    cin>>n>>k;
    int input[n];
    for(int i=0;i<n;i++)
        cin>>input[i];
    int ans=100100;
    for(int i=0;i<n-k+1;i++){
        if(ans>input[i])
            ans=input[i];
        cout<<input[i]<<" ";
        
    }
}
void case_676(){
    int size,numq;
    cin>>size>>numq;
    int rearray[size];
    int st,en;
    int ans;
    for(int i=0;i<size;i++)
        cin>>rearray[i];
    for(int i=0;i<numq;i++){
        cin>>st>>en;
        ans=*max_element(rearray+st-1,rearray+en);
        cout<<ans<<endl;
    }
}
    
void case_1447(){
    string input;
    cin>>input;
    map<char,int> bits;
    bits['c'] = 1;
    bits['b'] = 1;
    bits['l'] = 8;
    bits['i'] = 4;
    map<char,int> chToin;
    chToin['0'] = 0;
    chToin['1'] = 1;
    chToin['2'] = 2;
    chToin['3'] = 3;
    chToin['4'] = 4;
    chToin['5'] = 5;
    chToin['6'] = 6;
    chToin['7'] = 7;
    chToin['8'] = 8;
    chToin['9'] = 9;
    int bit=0;
    int ans=0;
    bit=bits[input[0]];
    for(int i=input.size();i>0;i--){
        if(input[i]<='9'&&input[i]>='0'){
            ans*=10;
            ans+=chToin[input[i]];
        }
    }
    ans*=bit;
    cout<<bit;
}
void case_99(){
    int ans1=0;
    int ans2=0;
    int ans=0;
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    int input[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>input[i][j];
    ans1=input[0][0]+input[1][1]+input[2][2]+input[3][3];
    ans2=input[0][3]+input[1][2]+input[2][1]+input[3][0];
    ans=ans1+ans2;
    cout<<ans;
}
void case_326(){
    char input[7][7];
    freopen("ear.in","r",stdin);
    freopen("ear.out","w",stdout);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>input[i][j];
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(input[i][j]=='*'){
                if(i-1>=1) input[i-1][j]='#';
                if(i+1<=5) input[i+1][j]='#';
                if(j-1>=1) input[i][j-1]='#';
                if(j+1<=5) input[i][j+1]='#';
                if(i-1>=1&&j-1<=5) input[i-1][j-1]='#';
                if(i-1>=1&&j+1<=5) input[i-1][j+1]='#';
                if(i+1>=1&&j-1<=5) input[i+1][j-1]='#';
                if(i+1>=1&&j+1<=5) input[i+1][j+1]='#';
            }
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            cout<<input[i][j];
        cout<<endl;
    }
}
void case_1482(){
    int input;
    int tri[21][21]={0};
    cin>>input;
    tri[1][1]={1};
    for (int i=2;i<=input;i++){
        for(int j=1;j<=i;j++){
            tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
        }
    }
    for (int i=1;i<=input;i++){
        for(int j=1;j<=i-1;j++){
            cout<<tri[i][j]<<" ";
        }
        cout<<tri[i][i]<<endl;
    }
    
}
void case_6(){
    char input[7][7];
    //freopen("ear.in","r",stdin);
    //freopen("ear.out","w",stdout);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>input[i][j];
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(input[i][j]=='A'){
                if(i-1>=1) input[i-1][j]='E';
                if(i+1<=5) input[i+1][j]='E';
                if(j-1>=1) input[i][j-1]='E';
                if(j+1<=5) input[i][j+1]='E';
            }
        }
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            cout<<input[i][j];
        cout<<endl;
    }
}
void bre(){
    int n,m;
    cin>>n>>m;
    char input[n][m];
    for (int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            cin>>input[i][j];
    }
    for (int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            cout<<input[i][j];
        cout<<endl;
    }
}

void case_969(){
    int input;
    cin>>input;
    int toSort[500001];
    for(int i=0;i<input;i++)
        cin>>toSort[i];
    for(int i=input-1;i>=1;i--){
        for (int j=0;j<=i-1;j++) {
            if(toSort[j]>toSort[j+1])
                swap(toSort[j],toSort[j+1]);
        }
    }
    for(int i=0;i<input;i++)
        cout<<toSort[i]<<" ";
}
void case_1467(){
    //freopen("intelligence.in","r",stdin);
    //freopen("intelligence.in","w",stdout);
    int input;
    cin>>input;
    int toSort[200001];
    for(int i=0;i<input;i++)
        cin>>toSort[i];
    for(int i=input-1;i>=1;i--){
        for (int j=0;j<=i-1;j++) {
            if(toSort[j]>toSort[j+1])
                swap(toSort[j],toSort[j+1]);
        }
    }
    for(int i=0;i<input;i++)
        cout<<toSort[i]<<" ";
}
void case_137(){
    int pl,pl_win;
    cin>>pl>>pl_win;
    int toSort[10001];
    for(int i=0;i<pl;i++)
        cin>>toSort[i];
    for(int i=pl-pl_win-1;i>=1;i--){
        for (int j=0;j<=i-1;j++) {
            if(toSort[j]<toSort[j+1])
                swap(toSort[j],toSort[j+1]);
        }
    }
    for(int i=0;i<pl-pl_win;i++)
        cout<<toSort[pl-pl_win]<<" ";

}
void ch_sort(){
    const int N=11;
    int a[N];
    for(int i=0;i<N;i++) cin>>a[i];
    for(int i=0;i<N-1;i++){
        int k=i;
        for(int j=i+1;j<N;j++){
            if(a[j]<a[k]) k=j;
            swap(a[k],a[i]);
        }
    }
    for(int i=N-1;i>=0;i--)
        cout<<a[i]<<" ";
}
void case_612(){
    int num;
    int number[100009]={0};
    freopen("median.in","r",stdin);
    freopen("median.out","w",stdout);
    cin>>num;
    for (int i=0;i<num;i++){
        cin>>number[1];
    }
    sort(number,number+num);
    cout<<number[num/2]<<endl;
}
void case_147(){
    int zomb[10009];
    int num;
    int aim;
    freopen("range.in","r",stdin);
    freopen("range.out","w",stdout);
    cin>>num>>aim;
    for(int i=0;i<num;i++){
        cin>>zomb[i];
        if(zomb[i]<0)
            zomb[i]*=-1;
    }
    sort(zomb,zomb+num);
    cout<<zomb[aim-1]<<endl;
}
void case_148(){
    double girls[10009],boys[10009];
    //freopen("photo.in","r",stdin);
    //freopen("photo.out","w",stdout);
    int n,nGirls=0,nBoys=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string sex;
        double height;
        cin>>sex>>height;
        if(sex[0]=='m')
            boys[nBoys++]=height;
        else
            girls[nGirls++]=height;
    }
    sort(boys,boys+nBoys);
    sort(girls,girls+nGirls);
    for(int i=0;i<nBoys;i++)
        cout<<fixed<<setprecision(2)<<boys[i]<<" ";
    for(int i=nGirls-1;i>=0;i--)
        cout<<fixed<<setprecision(2)<<girls[i]<<" ";
    
}
void random_number(){
    int start,number,end;
    cin>>start>>end;
    int temp=end-start;
    srand((unsigned)time(NULL));
    number=rand()%temp;
    number+=start;
    cout<<number<<endl;
}
void asc(){
    for(int i=0;i<128;i++)
        cout<<i+1<<char(i)<<endl;
    
}
void case_1497(){
    struct student{
        int id,score;
    };
    student rank[100009];
    
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>
    }
}
int main()
{
    random_number();
    return 0;
}
*/
/*
WWTNB!!!!!
*/
