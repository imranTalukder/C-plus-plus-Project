 #include<bits/stdc++.h>
using namespace std;
class health{
    public:
    float height, weight,bmi,lose;
    int age;
    int input();
    float calculation();
    void range();
    float loseweight();
    int another();
};

int health :: input()
{
     cout<<"Please enter your Height in meter Scale"<<endl;
     cin>>height;
     cout<<"Please enter your Weight in Kilogram"<<endl;
     cin>>weight;
     cout<<"Please enter your Age"<<endl;
     cin>>age;
}
class Data : public health
{
    public:
     Data();
};
Data :: Data()
{
     cout<<"          ___________________________________________________________"<<endl;
     cout<<"          ||                                                       ||"<<endl;
     cout<<"          ||         UNIVERSITY OF BARISAL                         ||"<<endl;
     cout<<"          ||   Department of Computer Science and Engineering      ||"<<endl;
     cout<<"          ||                                                       ||"<<endl;
     cout<<"          ||_______________________________________________________||"<<endl;
     cout<<" \n\n\n                         Name:  Imran Talukder"<<endl;
     cout<<"                         Roll: 14 CSE- 041"<<endl;
     cout<<"            -------------------------------------------------\n"<<endl;
     cout<<"                    WELCOME to MY PROJECT\n"<<endl;
}
float health :: calculation()
{
      input();
      bmi= weight/(height*height);
      cout<<"-------------------------------------------"<<endl;
      cout<<"\n Your Bmi Result is: "<<bmi<<endl;
}
void health :: range()
{
    calculation();
    if(bmi<18.5){
         cout<<"You are under weight, your weight is not perfect for your body."<<endl;
    }
    if(bmi>18.4 && bmi<25.1){
         cout<<"You have the perfect Body, Keep it up."<<endl;
    }
     if(bmi>25 && bmi<30.1){
         cout<<"You are too Fat, please lose your weight for Good health."<<endl;
    }
     if(bmi>30){
         cout<<"You are in Danger, Emergency lose your weight for Live in the Beautiful World."<<endl;
    }
}
float health :: loseweight()
{
    range();
    lose= 23*(height*height)-weight;
    if(lose<0){
          lose=-1*lose;
         cout<<"You have to be lose about  "<<lose<<" Kg for your perfect body."<<endl;
    }
    else{
         cout<<"Your weight is under  "<<lose<<" Kg. Please eat more and get the weight." <<endl;
    }
}
int health :: another()
{
     int t;
     p:
     loseweight();
     cout<<"-------Do you want to measure another one? then press 1 and press 0 for EXIT:"<<endl;
     cin>> t;
     if(t==1){
          goto p;
     }
     else{
          cout<<"Take care about your Health."<<endl;
     }
}
int main()
{
     health ob;
      Data ob1;
      ob.another();
     return 0;
}
