#include<string.h>
# include<iostream>
# include<fstream>
# include<conio.h>
# include <cstdlib>
using namespace std;
void display(char *name){
    ofstream read(name);
    read<<"deeepak";
}

int main(){
    char name[10];
    int rollno;
    float marks;
    for(int i=0;i<5;i++){
        cout<<"enter name"<<endl;
        cin>>name;
        display(name);
    }
}
