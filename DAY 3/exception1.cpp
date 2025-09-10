#include<iostream>
using namespace std;

class error
{
    public:
        void exception()
        {
            try{
                int a=5,b=0;
                if(b==0)
                {
                    throw runtime_error("\n error occoured ,cannot divide by zero");
                }
                int c=a/b;
                cout<<c;
            }
            catch(const runtime_error& e)
            {
                cerr<<"\n error occoured"<<e.what(); // what() is a member function of runtime_error class
                // it returns a C-style character string describing the general cause of the current error
                // cerr is used to display error messages
                // cerr is unbuffered and displays output immediately
                // cout is buffered and may not display output immediately
                
            }

        }
};
int main()
{
    error obj;
    obj.exception();

}

// int main()
// {
//     try{
//         int a=5,b=0;
//         int c=a/b;
//         cout<<c;
//         throw "error occoured";

//     }
//     catch(const string& err)
//     {
//         cout<<"error occoured"<<err;
//     }
//     return 0;
// }