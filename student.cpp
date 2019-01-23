#include<iostream>
#include<utility>

using namespace std;
void studentDetails();
void option(int n);
class Student{

      private : int id=0;
        private :string name;
        private :string email;
        private :string mob;
        private :string address;
        public:Student(int id,string name,string email,string mob,string address){
                this->id=id;
                this->name=name;
                this->email=email;
                this->mob=mob;
                this->address=address;
        }
         
        string getName(){
                return name;
        }

        public: void showDetails(){
                cout<<"the details enter by you are as following:-"<<endl;
                cout<<"Student id is =>"<<id<<endl;
                cout<<"Student name is =>"<<name<<endl;
                cout<<"Student email is =>"<<email<<endl;
                cout<<"Student mob is =>"<<mob<<endl;
                cout<<"Student address is =>"<<address<<endl;
        }


};
void studentDetails(){
        Student s1=Student(1,"Divydeep","divydeepsinghhada@gmail.com","8989221009","bhanwarkua");
        Student s2=Student(2,"raj","raj@gmail.com","9425446633","bhanpura");
        Student s3=Student(3,"rahul","rahul@gmail.com","8585446625","indore");
        
        
        
        int op,n;
        string g;
        g=s.getName();
        cout<<"Hi"<<" "<<g<<" "<<"welcome to your desh"<<endl;
        do{
        cout<<"choose your option form following menu:-"<<endl;
        cout<<"1>to view details"<<endl;
        cin>>op;
        cout<<"press 2 for continue:-"<<endl;
        cin>>n;
        option(op);
        }while(n==1);
}

void option(int n){
        Student s1=Student(1,"Divydeep","divydeepsinghhada@gmail.com","8989221009","bhanwarkua");
        Student s2=Student(2,"raj","raj@gmail.com","9425446633","bhanpura");
        Student s3=Student(3,"rahul","rahul@gmail.com","8585446625","indore");
        s1.showDetails();
       s2.showDetails();
        s3.showDetails();
}