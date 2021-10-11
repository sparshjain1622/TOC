//program to find 2's complement of binary number
#include <iostream>
using namespace std;
int main()
{
        int len,i;
        string n,comp;
        bool firstone=false;
 
        cout<<"ENTER BINARY NUMBER: ";
        cin>>n;
 
        len=n.length();
        comp.resize(len);
 
        for( i=(len-1) ; i>=0 ; i-- )
        {
                if(firstone==false)
               {
                        if(n[i]=='0')
                        {
                                comp[i]='0';
                        }
                        else
                        {
                                comp[i]='1';
                                firstone=true;
                         }
                }
                else
                {
                         if(n[i]=='0')
                         {
                                 comp[i]='1';
                         }
                         else
                         {
                                 comp[i]='0';
                          }
               }
        }
 
        cout<<"\nTWOS COMPLEMENT: "<<comp;
 
        return 0;
}

//OUTPUT
//ENTER BINARY NUMBER: 111001
//TWOS COMPLEMENT: 000111
