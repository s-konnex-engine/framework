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


#include "CreateContactDetailsForm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CreateContactDetailsForm::CreateContactDetailsForm()
{
    m_Type = "";
    m_Value = "";
    m_Is_default = false;
    m_Is_defaultIsSet = false;
    
}

CreateContactDetailsForm::~CreateContactDetailsForm()
{
}

void CreateContactDetailsForm::validate()
{
    // TODO: implement validation
}

nlohmann::json CreateContactDetailsForm::toJson() const
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

void CreateContactDetailsForm::fromJson(const nlohmann::json& val)
{
    setType(val.at("type"));
    setValue(val.at("value"));
    if(val.find("is default") != val.end())
    {
        setIsDefault(val.at("is default"));
    }
    
}


std::string CreateContactDetailsForm::getType() const
{
    return m_Type;
}
void CreateContactDetailsForm::setType(std::string const& value)
{
    m_Type = value;
    
}
std::string CreateContactDetailsForm::getValue() const
{
    return m_Value;
}
void CreateContactDetailsForm::setValue(std::string const& value)
{
    m_Value = value;
    
}
bool CreateContactDetailsForm::isIsDefault() const
{
    return m_Is_default;
}
void CreateContactDetailsForm::setIsDefault(bool const value)
{
    m_Is_default = value;
    m_Is_defaultIsSet = true;
}
bool CreateContactDetailsForm::isDefaultIsSet() const
{
    return m_Is_defaultIsSet;
}
void CreateContactDetailsForm::unsetIs_default()
{
    m_Is_defaultIsSet = false;
}

}
}
}
}
