#include "Laser.hpp"

class Firestar :
    public Laser
{
public:
    Firestar(const std::string& name) : Laser{name}{}
private:
    static register_factory factory;
};

Laser::register_factory Firestar::factory {
    "firestar", [](auto name) {
        return std::make_unique<Firestar>(name);
    }
};
