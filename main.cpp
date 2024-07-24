#include "Laser.hpp"

int main(){
    auto laser =  Laser::create("firestar");
    laser->say();
    return 0;
}
