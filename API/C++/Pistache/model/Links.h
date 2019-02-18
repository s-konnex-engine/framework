/**
* Konnex Company API
* An API that allows for creating, reading, updating and deleting of Konnex User Company data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Links.h
 *
 * 
 */

#ifndef Links_H_
#define Links_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Links
    : public ModelBase
{
public:
    Links();
    virtual ~Links();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Links members

    /// <summary>
    /// 
    /// </summary>
    std::string getContactdetailsHref() const;
    void setContactdetailsHref(std::string const& value);
    bool contactdetailsHrefIsSet() const;
    void unsetContactdetails_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getAddressesHref() const;
    void setAddressesHref(std::string const& value);
    bool addressesHrefIsSet() const;
    void unsetAddresses_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getLogoHref() const;
    void setLogoHref(std::string const& value);
    bool logoHrefIsSet() const;
    void unsetLogo_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getCoverImageHref() const;
    void setCoverImageHref(std::string const& value);
    bool coverImageHrefIsSet() const;
    void unsetCover_image_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getImagesHref() const;
    void setImagesHref(std::string const& value);
    bool imagesHrefIsSet() const;
    void unsetImages_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getCompaniesHref() const;
    void setCompaniesHref(std::string const& value);
    bool companiesHrefIsSet() const;
    void unsetCompanies_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getProductsHref() const;
    void setProductsHref(std::string const& value);
    bool productsHrefIsSet() const;
    void unsetProducts_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getServicesHref() const;
    void setServicesHref(std::string const& value);
    bool servicesHrefIsSet() const;
    void unsetServices_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getEventsHref() const;
    void setEventsHref(std::string const& value);
    bool eventsHrefIsSet() const;
    void unsetEvents_href();
    /// <summary>
    /// 
    /// </summary>
    std::string getTeamsHref() const;
    void setTeamsHref(std::string const& value);
    bool teamsHrefIsSet() const;
    void unsetTeams_href();

protected:
    std::string m_Contactdetails_href;
    bool m_Contactdetails_hrefIsSet;
    std::string m_Addresses_href;
    bool m_Addresses_hrefIsSet;
    std::string m_Logo_href;
    bool m_Logo_hrefIsSet;
    std::string m_Cover_image_href;
    bool m_Cover_image_hrefIsSet;
    std::string m_Images_href;
    bool m_Images_hrefIsSet;
    std::string m_Companies_href;
    bool m_Companies_hrefIsSet;
    std::string m_Products_href;
    bool m_Products_hrefIsSet;
    std::string m_Services_href;
    bool m_Services_hrefIsSet;
    std::string m_Events_href;
    bool m_Events_hrefIsSet;
    std::string m_Teams_href;
    bool m_Teams_hrefIsSet;
};

}
}
}
}

#endif /* Links_H_ */
