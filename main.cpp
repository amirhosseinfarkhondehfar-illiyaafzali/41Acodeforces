//41A
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    string s,ss;
    cin>>s>>ss;
    
    string sss="";
    
    for(int i=ss.size()-1;i>-1;i--){
        sss+=ss[i];
    }
    if(s==sss){
            std::cout << "YEgit S" << std::endl;
 
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
 