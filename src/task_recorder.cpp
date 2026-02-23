#include <iostream>
#include <string>
using namespace std;

class task_recorder
{
private:
    
public:
    struct task_data
    {
        string task_name;
        string task_description;
        string task_deadline;
    };
    void task_intake(string name, string description, string deadline);
};

void task_recorder::task_intake(string name, string description, string deadline)
{
    task_data data;
    data.task_name = name;
    data.task_description = description;
    data.task_deadline = deadline;

    cout << "Task Name: " << data.task_name << endl;
    cout << "Task Description: " << data.task_description << endl;
    cout << "Task Deadline: " << data.task_deadline << endl;
}

int main()
{
    task_recorder recorder;
    recorder.task_intake("Finish C++ Project", "Complete the implementation of the task manager", "2024-12-31");
    return 0;
}
