/**
* Konnex Contact Details API
* An API that allows for creating, reading, updating and deleting of Konnex User Contact Details data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Contact.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Contact::Contact()
{
    m_Type = "";
    m_Value = "";
    m_Is_default = false;
    m_Is_defaultIsSet = false;
    
}

Contact::~Contact()
{
}

void Contact::validate()
{
    // TODO: implement validation
}

nlohmann::json Contact::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["type"] = ModelBase::toJson(m_Type);
    val["value"] = ModelBase::toJson(m_Value);
    if(m_Is_defaultIsSet)
    {
        val["is default"] = m_Is_default;
    }
    

    return val;
}

void Contact::fromJson(const nlohmann::json& val)
{
    setType(val.at("type"));
    setValue(val.at("value"));
    if(val.find("is default") != val.end())
    {
        setIsDefault(val.at("is default"));
    }
    
}


std::string Contact::getType() const
{
    return m_Type;
}
void Contact::setType(std::string const& value)
{
    m_Type = value;
    
}
std::string Contact::getValue() const
{
    return m_Value;
}
void Contact::setValue(std::string const& value)
{
    m_Value = value;
    
}
bool Contact::isIsDefault() const
{
    return m_Is_default;
}
void Contact::setIsDefault(bool const value)
{
    m_Is_default = value;
    m_Is_defaultIsSet = true;
}
bool Contact::isDefaultIsSet() const
{
    return m_Is_defaultIsSet;
}
void Contact::unsetIs_default()
{
    m_Is_defaultIsSet = false;
}

}
}
}
}

