#include<iostream>
using namespace std;

int stringLength(char ch[])
{
     int count=0;
     for(int i=0;ch[i]!='\0';i++)
       count++;
      return count; 
}
void reverseString(char ch[],int len)
{
    int s=0;
    int e=len-1;
    while(s<=e)
    {
        swap(ch[s++],ch[e--]);
    } 
}
int main()
{
    char ch[20];
    cout<<"enter any string:";
    cin>>ch;
    int len=stringLength(ch);
    reverseString(ch,len);
    cout<<"reverse string is "<<ch<<endl;
}