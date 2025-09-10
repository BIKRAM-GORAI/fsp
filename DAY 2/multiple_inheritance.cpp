    #include <iostream>
    using namespace std;

    class Admin
    {
        public:
            void manage()
            {
                cout<<"admin can manage"<<endl;
            }
    };

    class Faculty
    {
        public:
            void teach()
            {
                cout<<"faculty can teach courses"<<endl;
            }
    };

    class University:public Admin,public Faculty //inheriting the properties of the Admin class and Faculty (multiple inheritance)
    {
        public:
            void result()
            {
                cout<<"university declares result"<<endl;

            }
    };

    int main()
    {
        University u1;
        u1.manage();
        u1.result();
        u1.teach();
        return 0;
    }