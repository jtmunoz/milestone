#include <iostream>
#include <string>

class Route{
    private:
    int departure_time_; // Private Variables
    int arrival_time_;

    std::string name_;

    public:
    void set_departure_time(int departure_time) { // Mutators
        departure_time_ = departure_time;
    }

    void set_arrival_time(int arrival_time) {
        arrival_time_ = arrival_time;
    }

    void set_name(int name) {
        name_ = name;
    }

    int departure_time() {  // Accesors
        return departure_time_;
    }

    int arrival_time() {
        return arrival_time_;
    }

    std::string name() {
        return name_;
    }


};

int main()
{


}
