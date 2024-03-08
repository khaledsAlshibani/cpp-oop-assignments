#include <iostream>
using namespace std;

class Employee
{
    int id;
    float compensation;

public:
    Employee()
    {
        cout << "Employee Constructor" << endl;
    };

    // Setter methods
    void setId(int id)
    {
        this->id = id;
    }

    void setCompensation(float compensation)
    {
        this->compensation = compensation;
    }

    // Getter methods
    int getId() const
    {
        return id;
    }

    float getCompensation() const
    {
        return compensation;
    }
};

int main()
{
    Employee E1;

    E1.setId(1);
    E1.setCompensation(1500.50);

    cout << "Id: " << E1.getId() << endl;
    cout << "Compensation: " << E1.getCompensation() << endl;

    return 0;
}