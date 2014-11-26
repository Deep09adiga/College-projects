#include<iostream>
#include<fstream>
using namespace std;
class plan_1{
    int plan1_speed=3;
    int plan1_cost=1500;
    int plan1_mem=10485760;
    int plan1_validity=20;
    public:
        void plan1_show_details(){
            cout<<"plan 1"<<endl;
            cout<<"Speed="<<plan1_speed<<"mbps"<<endl;
            cout<<"Cost="<<plan1_cost<<"rs"<<endl;
            cout<<"Memory ="<<plan1_mem<<"gb"<<endl;
            cout<<"Validity ="<<plan1_validity<<"days"<<endl;
        }
        int plan1_get_memory(){
            return plan1_mem;
        }
        int plan1_get_validity(){
            return plan1_validity;
        }
};
class plan_2{
        int plan2_speed=1;
        int plan2_cost=1000;
        int plan2_mem=10485760;
        int plan2_validity=20;
    public:
        void plan2_show_details(){
            cout<<"plan 2"<<endl;
            cout<<"Speed="<<plan2_speed<<"mbps"<<endl;
            cout<<"Cost="<<plan2_cost<<"rs"<<endl;
            cout<<"Memory ="<<plan2_mem<<"gb"<<endl;
            cout<<"Validity :"<<plan2_validity<<"days"<<endl;
        }
        int plan2_get_memory(){
            return plan2_mem;
        }
        int plan2_get_validity(){
            return plan2_validity;
        }
};
class plan_3{
        int plan3_speed=450;
        int plan3_cost=750;
        int plan3_mem=5242880;
        int plan3_validity=30;
    public:
        void plan3_show_details(){
            cout<<"Plan 3"<<endl;
            cout<<"Speed="<<plan3_speed<<"mbps"<<endl;
            cout<<"Cost="<<plan3_cost<<"rs"<<endl;
            cout<<"Memory ="<<plan3_mem<<"gb"<<endl;
            cout<<"Validity :"<<plan3_validity<<"days"<<endl;
        }
        int plan3_get_memory(){
            return plan3_mem;
        }
        int plan3_get_validity(){
            return plan3_validity;
        }

};
class internet_data:public plan_1,public plan_2,public plan_3{
        public:
        void get_data(char *name){
            char user_name[50];
            char phone_number[10];
            char address[100];
            int plan;
            int date_of_recharge;
            float remaining_days;
            float remaining_data;
            ifstream read(name);
            read>>user_name;
            read>>phone_number;
            read>>address;
            read>>plan;
            read>>date_of_recharge;
            read>>remaining_data;
            read>>remaining_days;
            remaining_data=remaining_data-(1024*5);
            remaining_days=remaining_days-(60*5);
            read.close();
            ofstream read1(name);
            read1<<user_name;
            read1<<phone_number;
            read1<<address;
            read1<<plan;;
            read1<<date_of_recharge;
            read1<<remaining_data;
            read1<<remaining_days;
            read1.close();
        }
};
class user:public internet_data{
    char user_name[50];
    char phone_number[10];
    char address[100];
    int plan;
    int date_of_recharge;
    int remaining_days;
    int remaining_data;
    public:
        void enter_user_details(){
                int i=0,n=0,no_of_users;
                cout<<"Enter the name\n";
                cin>>user_name;
                cout<<"Enter the phone number bet digit(0-9)\n";
                cin>>phone_number;
                cout<<"Enter the address\n";
                cin>>address;
                plan1_show_details();
                plan2_show_details();
                plan3_show_details();
                cout<<"Enter the plan\n";
                cin>>plan;
                cout<<"Enter the recharge date\n";
                cin>>date_of_recharge;
                ofstream read(user_name);
                read<<user_name<<endl;
                read<<phone_number<<endl;
                read<<address<<endl;
                read<<plan<<endl;
                read<<date_of_recharge<<endl;
                if(plan==1){    remaining_data=plan1_get_memory();remaining_days=plan1_get_validity();}
                if(plan==2){    remaining_data=plan2_get_memory();remaining_days=plan2_get_validity();}
                if(plan==3){    remaining_data=plan3_get_memory();remaining_days=plan3_get_validity();}
                read<<remaining_data<<endl;
                read<<remaining_days<<endl;
        }
        void show_details(){
            int i=1;
            ifstream read;
            internet_data id;
            while(i!=0){
                    cout<<"Enter 1:user info\n2:data info\n3:exit\n";
                    cin>>i;
                    switch(i){
                            case 1: cout<<"Enter name of the user\n";
                                    cin>>user_name;
                                    read.open(user_name);
                                    read>>user_name;
                                    read>>phone_number;
                                    read>>address;
                                    read>>plan;
                                    read.close();
                                    cout<<"Name:"<<user_name<<endl<<"Phone number"<<phone_number<<endl<<"Address:"<<address;
                                    if(plan==1)
                                        plan1_show_details();
                                    if(plan==2)
                                        plan2_show_details();
                                    if(plan==3)
                                        plan3_show_details();
                                    break;

                            case 2: cout<<"Data plan info is:";
                                    cout<<"Enter name of the user\n";
                                    cin>>user_name;
                                    read.open(user_name);
                                    read>>user_name;
                                    read>>phone_number;
                                    read>>address;
                                    read>>plan;
                                    read.close();
                                    cout<<"Name:"<<user_name<<endl<<"Phone number"<<phone_number<<endl<<"Address:"<<address;
                                    if(plan==1)
                                        plan1_show_details();
                                    if(plan==2)
                                        plan2_show_details();
                                    if(plan==3)
                                        plan3_show_details();
                                    id.get_data(user_name);

                                    break;
                            case 3: break;
                            default:cout<<"invalid choice\n";
                        }
                        cout<<"Do you want to continue 1:yes 0:no\n";
                        cin>>i;
                }
        }
};
class sub_main{
    int choice,no_of_users,users=0,i;
    public:
        void fun_sub_main(){
            cout<<"**********Welcome to internet billing system**********";
            cout<<"\n1:New User\n2:Old ser\n3:Exit";
            cin>>choice;
            user u;
            while(choice!=0){
                switch(choice){
                    case 1: u.enter_user_details();
                            break;
                    case 2: u.show_details();
                            break;
                    case 3: break;
                    default:cout<<"Invalid choice\n";
                }
                cout<<"Do you want to continue 1:yes 0:no\n";
                cin>>choice;
            }
        }
 };
int main(){
    sub_main m;
    m.fun_sub_main();
    return 0;
}
