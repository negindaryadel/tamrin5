#include <iostream>
#include <conio.h>

#include <string.h>

using namespace std;

/*int count(string s)
{

    int count=0;

    for(int i=0;i < s.length() ;i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
        return count;
    }
    */
    int main()
    {
    int count=0;
     string s;
    cout<<"Enter string: ";
     getline(cin,s);
       for(int i=0;i < s.length() ;i++)
    {
        if(s[i]==' ')
        {
            count++;
        }

    }
     int natije=count;
     cout<<natije+1<<endl;
     return 0;
    }



