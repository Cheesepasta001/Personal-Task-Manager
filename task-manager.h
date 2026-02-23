// task_recorder 

#ifndef task_recorder_H
#define task_recorder_H
// Class declaration goes here

#include <string>

class task_recorder{
    private:
        
    public:
        struct task_data
            {
                std::string task_name;
                std::string task_description;
                std::string task_deadline;
            };
        void task_intake(std::string name, std::string description, std::string deadline);
};

#endif
