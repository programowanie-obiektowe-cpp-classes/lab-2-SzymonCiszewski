#pragma once

#include "Resource.hpp"

class ResourceManager
{   
public:
    ResourceManager() { 
        Resource resource;
        wynik = resource.get();
    } 
    double get() { return wynik; }

    ResourceManager(const ResourceManager& manager) : wynik{manager.wynik} {}

    ResourceManager& operator=(const ResourceManager& other) { 
        return *this;
    }

    ~ResourceManager() = default;


private:
    double wynik;
};
