#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
cout<<"enter string"<<endl;
getline(cin,str);
for(int i=0;str[i]!='\0';i++)
{
  if(str[i]!=' ')
  {
    cout<<str[i];
  }
}
return 0;
}

