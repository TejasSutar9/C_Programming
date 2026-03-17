class Demo
{
    public:
            int iNo1;       //characteristics
            int iNo2;       //characteristics
            //Behaviours
            Demo()          //Default Constructor
            {
            iNo1=0;     
            iNo2=0;
            }

            Demo(int a,int b)       //Parameterized Constructor
            {
            iNo1=a;
            iNo2=b;
            }
            ~Demo()                 //Destructor
            {
            //Logic
            }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);

    return 0;
}
