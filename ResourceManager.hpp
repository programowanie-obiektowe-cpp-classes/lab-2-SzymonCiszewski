#pragma once

#include "Resource.hpp"

class ResourceManager
{   
public:
    ResourceManager() { 
        resource = new Resource{};
        wynik = resource->get();
    } 
    double get() const { return wynik; }

    ResourceManager(const ResourceManager& manager)
    {
        resource = new Resource(*manager.resource);
        wynik    = manager.wynik;
    }
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            delete resource;
            resource = new Resource(*other.resource);
            wynik    = other.wynik;
        }
        return *this;
    }
    ~ResourceManager() { delete resource; };

private:
    Resource* resource = nullptr;
    double wynik;

};
