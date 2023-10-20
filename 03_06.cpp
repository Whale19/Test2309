//求一元二次方程ax²+bx+c=0的根
#include<iostream>
using namespace std;
int main()
{
    double a,b,c,x,k;
    cout<<"请输入ax²+bx+c=0中的a，b，c，用回车隔开"<<endl;
    cin>>a>>b>>c;
    k=b*b-4*a*c;
    if (k<0)
        {cout<<"无实根"<<endl;}
    else if (k==0)
        {
        cout <<"x="<< -b/(2*a) <<"，两个相同石根"<< endl;
        }
    else if (a==0)
        {
        if(b==0)
            {cout<<"无实根"<<endl;}
        else
            {cout<<"x="<< -c/b <<"，只有一个实数根"<<endl;}
        }
    else
        {cout<<"x1="<<(-b+sqrt(k))/(2*a)<<"，x2="<<(-b-sqrt(k))/(2*a)<<"，两个不同实根"<<endl;}
}