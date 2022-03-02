
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

bool solution(string inputString) {
    int n=0;
       string b=inputString, a=inputString;
    for (int i=0;i<a.size();i++)
        for(int j=0;j<b.size();j++)
            if(a[i]==b[j]&&b[j]!=' '){
                n++;
                for(int k=i;k<b.size();k++)
                    if(b[k]==a[i])b[k]=' ';
            }
    string letras(n,' ');
    b=a;int l=0;
    vector<int> nl(n, 0);
    for (int i=0;i<a.size();i++)
        for(int j=0;j<b.size();j++)
            if(a[i]==b[j]&&b[j]!=' '){
                letras[l++]=a[i];
                for(int k=i;k<b.size();k++)
                    if(b[k]==a[i])b[k]=' ';
            }
    for(int i=0; i<n;i++)
        for(int j=0;j<a.size();j++)
            if(letras[i]==a[j])nl[i]++;
    int impares =0;
    for(int i=0;i<n;i++)
        if(nl[i]%2!=0)impares++;

    if(a.size()%2==0&&impares==0||a.size()%2!=0&&impares==1)return true;
    else return false;
}
int main()
{
    string a="12314523";
    cout<<solution(a);
    return 0;
}
