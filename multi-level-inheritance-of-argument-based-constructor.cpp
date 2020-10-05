#https://www.facebook.com/alok20raj/posts/171825161150524?__xts__[0]=68.ARBwOLlAu3Enr38S8J-ig8NWaYwLTl_i5G5KxKCM-vd09QeMDD6Sqq4ZrG3N8vyW-n-yzYJ9j3LlDB8BHuM-n6TiLWzRxTLA1XuMipagfNG7zjv0gyyOhNSWPz3IXoL5rd0DFJ8OTBhGta-_IC1CqONilhfVPpwEpNO4T0ZGBrKncbEW87y983gMPGv17P7SRuX0dXowtdjvN57cLArcSD2QZgb9-YSStqV9zEcR5o6hga0IPQASpNsHaeEMwlrXn9QdwR-l7MEPeKI1y1kFLXJMnxbz5ielCYBvoCs4NHRMWGb4s-6nXNRb062yLS44Q2mTc383dFS_oIvtMILM-Og&__tn__=-R
#subscribe by code house 
#include<iostream>
using namespace std;
class base{
    public:
    base(int x, int y)
    {
        cout<< x + y<<endl;
    }
};
class derived: public base
{
    public:
    derived(int m, int n): base(m,n){
        cout<<m*n<<endl;
    }
};
class derived1: public derived {
    public: 
    derived1(int p, int q): derived(p, q)
    {
        cout<<p/q;
    }
};
int main(){
    derived1 d(5,3);
    return 0;
}
