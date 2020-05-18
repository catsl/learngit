#pragma once
#include <iostream>
struct Job {
    //作业ID
    unsigned int jobId;
    //到达时间
    unsigned int arrivalTime;
    //执行时间
    unsigned int executionTime;
    //优先权
    unsigned int priority;
};

std::ostream& operator<<(std::ostream &, Job&);

int jobSortArrivalTime(Job&, Job&);

int jobSortExecutionTime(Job&, Job&);

int jobSortPriority(Job&, Job&);

