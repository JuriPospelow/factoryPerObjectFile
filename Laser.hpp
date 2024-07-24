#ifndef __LASER_HPP
#define __LASER_HPP

#include <iostream>
#include <memory>
#include <map>
#include <functional>

class Laser{
public:
    static std::unique_ptr<Laser> create(const std::string& name);
    void say(){
        std::cout << "HELLO " << name << std::endl;
    }
protected:
    Laser(const std::string& name);
    const std::string name;
    typedef std::function<std::unique_ptr<Laser> (const std::string& name)> factory_t;

    static std::map<std::string, factory_t>& factories();

    struct register_factory {
        register_factory(std::string&& type, factory_t&& factory) {
            factories().emplace(std::move(type), std::move(factory));
        }
    };

};

#endif
