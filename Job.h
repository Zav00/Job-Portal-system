
#ifndef JOB_PORTAL_SYSTEM_JOB_H
#define JOB_PORTAL_SYSTEM_JOB_H
#include <string>
class Job {

private:
    std::string jobTitle;
    std::string description;
    std::string requirements;
    double salary;
    std::string company;
    bool isOpen;
public:

    Job(const std::string &jobTitle, const std::string &description, const std::string &requirements,
        double salary, const std::string &company)
            : jobTitle(jobTitle), description(description), requirements(requirements),
              salary(salary), company(company), isOpen(true) {}

    const std::string &getJobTitle() const {
        return jobTitle;
    }

    const std::string &getDescription() const {
        return description;
    }

    const std::string &getRequirements() const {
        return requirements;
    }

    double getSalary() const {
        return salary;
    }

    const std::string &getCompany() const {
        return company;
    }

    bool isOpenJob() const {
        return isOpen;
    }

    void closeJob() {
        isOpen = false;
    }

};
#endif //JOB_PORTAL_SYSTEM_JOB_H
