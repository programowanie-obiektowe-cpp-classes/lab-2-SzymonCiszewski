#pragma once

#include "Resource.hpp"

class ResourceManager
{   
public:
    ResourceManager() { 
        Resource* resource = new Resource{};
        wynik = resource->get();
    } 
    double get() const { return wynik; }

    ResourceManager(const ResourceManager& manager) : wynik{manager.wynik} {}

    ResourceManager& operator=(const ResourceManager& other) { 
        return *this;
    }

    ~ResourceManager() =default;


private:
    double wynik;
 
};
