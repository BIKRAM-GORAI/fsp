#include<iostream>
#include<string>
using namespace std;

bool palindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while(left < right)
    {
        if(s[left] != s[right])
        {
            cout << s << " is not a palindrome." << endl;
            return 0;
        }
        left++;
        right--;
        return 1;
        
    }

}

int main()
{
    string s;
    cout<<"enter a string";
    cin>>s;
    int a=palindrome(s);
    if(a==1)
    {
        cout<<"palindrome string";
    }
    else
    {
        cout<<"not palindrome string";
    }


}