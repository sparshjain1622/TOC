
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   
    string FName;
    string LName;
    
    cout << "Enter your First Name : ";
    cin >> FName;
    cout<<"Enter your Last Name : ";
    cin>>LName;
    

     string fullName = FName + " " + LName; 
     cout<<"After Concatenation : "<<fullName<<endl;
     
    
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper); 
     cout<<"After Converting to UpperCase : " << fullName << endl; 
     
   
     transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower); 
     cout<<"After Converting to LowerCase : " << fullName << endl;
     
    
     fullName.erase(remove(fullName.begin(), fullName.end(), ' '), fullName.end());
    cout << "After White Space Removal : " << fullName;
    
     
     return 0; 
}

//Enter your First Name : Sparsh
//Enter your Last Name : jain
//After Concatenation : Sparsh jain
//After Converting to UpperCase : SPARSH JAIN
//After Converting to LowerCase : sparsh jain
//After White Space Removal : sparshjain