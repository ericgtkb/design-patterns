#ifndef CALCULATOR_SUBJECT_H
#define CALCULATOR_SUBJECT_H

#include <unordered_set>

// Forward declaration
class Observer;

class Subject {
public:
    virtual ~Subject() = default;
    virtual void add_observer(Observer& obs) = 0;
    virtual void remove_observer(Observer& obs) = 0;
    virtual void notify_observers() = 0;
};

class DataSource : public Subject {
public:
    DataSource();
    void add_observer(Observer& obs) override;
    void remove_observer(Observer& obs) override;
    void notify_observers() override;
    void update_data(int a, int b);
    int get_a() const;
    int get_b() const;

private:
    std::unordered_set<Observer*> observers;
    int a;
    int b;
};

#endif //CALCULATOR_SUBJECT_H
