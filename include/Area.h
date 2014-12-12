// This class define an area.

#ifndef AREA_TOASTER_H
  #define AREA_TOASTER_H

#include <vector>
#include <boost/geometry.hpp>

namespace bg = boost::geometry;

class Area
{

protected:
    unsigned int id;				// each area has a unic id
    std::string name;		 	// area might have a name
    unsigned int myOwner;		        // Entity related to this area

public:
    std::vector<unsigned int> insideEntities_;	  			// Entities present in that area

    // Constructor
    Area(unsigned int areaId);

    // virtual functions
    virtual bool isPointInArea(bg::model::point<double, 2, bg::cs::cartesian> center) = 0;

    // functions
    void removeEntity(unsigned int entId);
    bool isIdInArea(unsigned int id);

    // accessors, mutators
    unsigned int getId();
    void setId(unsigned int areaId);
    unsigned int getMyOwner();
    void setMyOwner(int ownerId);
    std::string getName();
    void setName(std::string areaName);
};

#endif
