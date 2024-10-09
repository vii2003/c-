#include <iostream>
#include <windows.h>
using namespace std;
void print_tasks(string tasks[], int task_count){
    cout<<"Tasks To Do: "<<endl;
    cout<<"------------------------------------"<<endl;
    for(int i=0; i<task_count ; i++){
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    cout<<"------------------------------------"<<endl;
    }
}
int main() {

    string tasks[10] = {""};
    //counter var -> know how many task we have
    int task_count = 0;
    int option = -1;
    while(option !=0) {
        
        //we will make the menu here
        cout<<"--- TO-DO LIST ---"<<endl;
        cout<<"1 - To Add New Task"<<endl;
        cout<<"2 - To View Task"<<endl;
        cout<<"3 - Delete The Task"<<endl;
        cout<<"0 - Terminate The Program"<<endl;
        cin>>option;

        switch('O') {
            case 1: {
                if(task_count >9)

                    cout<<"```TASK LIST IS FULL```"<< endl;
                else{
                    cout<<"ENTER A NEW TASK: ";
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                }
                break;
            }
            case 2:
                print_tasks(tasks, task_count);
                break;
            
        }
    }
}

