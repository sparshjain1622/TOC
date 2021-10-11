#include<iostream>
using namespace std;
int main()
{

   string n;
   cout<<"ENTER STRING ";
   cin>>n;

   int len=n.length();
   int i=0,j=0; 
   bool flag=false;
   
   while(j<len-2)
   {
       if(n[i]=='0')
       {
           i++;
           j++;
       }
       else
       {
           if(n[i+1]=='1' && n[i+2]=='1')
           {
            if(n[i+3]=='1')
            {
                j=j+3;
                i=i+3;
            }
            else
            {
                flag=true;
                i++;
                j++;
            }
             
           }
           else
           {
               j++;
               i++;
               
           }
       }
   }
   if(flag==false)
   {
       cout<< "the string is rejected ";
   }
   else
   {
        cout<<"the string is accepted";
   }
 
   
   return 0;
}