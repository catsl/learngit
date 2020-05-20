#include "job.h"
std::ostream & operator<<(std::ostream &output, Job &job) {
    output << "进程ID: " << job.jobId
        << "\t 进程到达时间:" << job.arrivalTime
        << "\t 进程执行时间:" << job.executionTime
        << "\t 优先度:" << job.priority;
    return output;
}

int jobSortArrivalTime(Job& left, Job& right) {
    int x = left.arrivalTime - right.arrivalTime;
    return x < 0 ? -1 : x > 0 ? 1 : 0;
}
int jobSortExecutionTime(Job& left, Job& right) {
    int x = left.executionTime - right.executionTime;
    return x < 0 ? -1 : x > 0 ? 1 : 0;
}
int jobSortPriority(Job& left, Job& right) {
    int x = left.priority - right.priority;
    return x < 0 ? -1 : x > 0 ? 1 : 0;
}

