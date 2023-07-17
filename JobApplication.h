#ifndef JOB_PORTAL_SYSTEM_JOBAPPLICATION_H
#define JOB_PORTAL_SYSTEM_JOBAPPLICATION_H
#include "Job.h"
#include "User.h"
class JobApplication {
private:
    const Job &job;
    const User &user;
    bool isAccepted;
public:
    JobApplication(const Job &job, const User &user)
            : job(job), user(user), isAccepted(false) {}

    const Job &getJob() const {
        return job;
    }

    const User &getUser() const {
        return user;
    }

    bool isAcceptedApplication() const {
        return isAccepted;
    }

    void acceptApplication() {
        isAccepted = true;
    }
};

#endif //JOB_PORTAL_SYSTEM_JOBAPPLICATION_H
