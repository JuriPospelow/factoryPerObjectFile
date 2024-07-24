#include "Laser.hpp"

Laser::Laser(const std::string& name) : name{name} {}

std::unique_ptr<Laser>
Laser::create(const std::string& name)
{
    // std::string type = conf->getString("type");

    auto factory = factories().find(name);
    if (factory == factories().end()) {
        std::cout << "Laser type not found: " << name << std::endl;
    }
    return factory->second(name);
}

std::map<std::string, Laser::factory_t>&
Laser::factories()
{
    static std::map<std::string, factory_t> instance;
    return instance;
}
