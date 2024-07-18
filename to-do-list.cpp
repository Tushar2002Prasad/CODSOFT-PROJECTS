#include <iostream>

using namespace std;

// void inputTasks(string tasks[], int task_count)

void printTasks(string tasks[], int task_count)
{
    cout << " Tasks To Do : " << endl;
    cout << " **************************************** " << endl;
    for (int i = 0; i < task_count; i++)
    {
        cout << " Task " << (i + 1) << " : " << tasks[i] << endl;
    }
    cout << " **************************************** " << endl;
    
}
int main()
{
    string tasks[10] = {""};
    int task_count = 0;

    int option = -1;
    while(option != 0)
    {
        cout << " ------TO DO LIST------ " << endl;
        cout << " 1 --> To Add New Task " << endl;
        cout << " 2 --> To View Task " << endl;
        cout << " 3 --> To Delete Task " << endl;
        cout << " 4 --> To Mark Task as Completed " << endl;
        cout << " 0 --> Terminate The Program " << endl;
        cout << " **************************************** " << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            {
                if(task_count > 9)
                {
                    cout << " TASK LIST IS FULL " << endl; 
                }
                else{
                    cout << " Enter a New Task : " ;
                    cin.ignore();
                    getline(cin, tasks[task_count]);
                    task_count++;
                }
            }
            break;
        case 2:
            {
                
                printTasks(tasks, task_count);
            }
            break;
        case 3:
            {
                
                printTasks(tasks, task_count);
                int deleteTask = 0;
                cout << " Enter the task to delete:" << endl;
                cin >> deleteTask;
                deleteTask = deleteTask - 1;
                if((deleteTask < 0) || (deleteTask > 9))
                {
                    cout << " You entered Invalid Task no. " << endl;
                    break;
                }
                for(int i = deleteTask; i < task_count; i++)
                {
                    tasks[i] = tasks[i + 1];
                }
                task_count--;
            }
            break;
        case 4:
            {
                
                printTasks(tasks, task_count);
                int completedTask = 0;
                cout << " Enter the task number which is completed:" << endl;
                cin >> completedTask;
                completedTask = completedTask - 1;
                if((completedTask < 0) || (completedTask > 9))
                {
                    cout << " You entered Invalid Task no. " << endl;
                    break;
                }
                
                tasks[completedTask] = tasks[completedTask] + " (Completed) "; 
            }
            break;
        case 0:
            {
                cout << " Termination Process Executed " << endl;
            }
            break;
        
        default:
        cout << " Invalid Input " << endl;
            break;
        }
    }
}