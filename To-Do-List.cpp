#include <iostream>
using namespace std;
#define clrscr() system("cls");
#include <vector>


void Add_Task();
void View_Task();
void removeTask();
void markTaskCompleted();




struct Task
{
    string task;
    bool completed;
    int task_count=1 ;

};

vector <Task> vec; 



int main()
{

    int ch;

    do
    {
    

        cout << "\n______________TO DO LIST_________________";
        cout << "\n1.Add Task()";
        cout << "\n2.View Task()";
        cout<<  "\n3.markTaskCompleted()";
        cout << "\n4.Delete Task()";
        cout << "\n5.terminate ";
        cout << "\n_________________________________________";

        cout << "\n Choose any option: ";
        cin >> ch;

        switch(ch)
        {

        case 1:                 Add_Task();
                                 break;
        


        case 2:             View_Task();
                            break;

        case 3:          markTaskCompleted();
                               break;

        case 4:             removeTask() ;
                              break;

        default:
            cout << "\n Please choose the option between (1-4).";
        }

    } while (ch != 5);

    
    return 0;

}

//1-------------

void Add_Task()
{
    Task newtask;


    cout << "\n Give any task that you want to add in list: ";
    cin.ignore();
    getline(cin, newtask.task);
     newtask.completed= false;

    newtask.task_count++;
     vec.push_back(newtask);

}

// 2...........

void View_Task()
{
    int i=1;

    for(auto& task :vec )
    {
    
        cout <<i<< "." <<task.task<<endl;
         cout<<"Status :";
     if (task.completed) {
            cout << "Completed" <<endl;
        } else {
            cout << "Pending" <<endl;
        }
i++;
    }
}

//3.................

void markTaskCompleted() {
    string taskDescription;
    cout << "Enter task to mark as completed: ";
    cin.ignore();
    getline(cin,taskDescription );
    
    for (auto &task : vec) {

        if (task.task == taskDescription) {
            task.completed = true;
            cout << "Task marked as completed" <<endl;
            return;

        }
    }
    cout << "Task not found" <<endl;
}











//4............
void removeTask() {
    string taskDescription;
    cout << "Enter task description to remove: ";
    cin >> taskDescription;
    for (auto it = vec.begin(); it !=vec.end(); ++it) {
        if (it->task == taskDescription) {
            vec.erase(it);
            cout << "Task removed" << std::endl;
            return; 
        }
    }
    cout << "Task not found" <<endl;
}
