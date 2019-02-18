/**
* Konnex Addresses API
* An API that allows for creating, reading, updating and deleting of Konnex Object Address data.
*
* OpenAPI spec version: 1.0.0
* Contact: info@konnex-engine.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AddressesApi.h
 *
 * 
 */

#ifndef AddressesApi_H_
#define AddressesApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "Address.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  AddressesApi {
public:
    AddressesApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~AddressesApi() {}
    void init();

    const std::string base = "/v1";

private:
    void setupRoutes();

    void create_address_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_address_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_address_by_id_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_addresses_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void update_address_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void addresses_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Creates a new Address
    /// </summary>
    /// <remarks>
    /// Creates a new Konnex User Address in the database.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    virtual void create_address(const std::string &objectType, const int32_t &objectID, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Delete address data.
    /// </summary>
    /// <remarks>
    /// Delete a specific Address.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="addressID">The address ID for the specific address to delete.</param>
    virtual void delete_address(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Returns a specific Address by ID
    /// </summary>
    /// <remarks>
    /// Retrieve a specific Address by Address ID.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="addressID">The Address ID for the specific Address.</param>
    virtual void get_address_by_id(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Retrieves all available Konnex User address data
    /// </summary>
    /// <remarks>
    /// Obtain information about Konnex users address.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="bodyLimit">The number of user address records to return. (optional, default to 0)</param>
    /// <param name="pageLimit">The number of pages of address records to return. (optional, default to 0)</param>
    virtual void get_addresses(const std::string &objectType, const int32_t &objectID, const Pistache::Optional<int32_t> &bodyLimit, const Pistache::Optional<int32_t> &pageLimit, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Update address data.
    /// </summary>
    /// <remarks>
    /// Update a specific Address.
    /// </remarks>
    /// <param name="objectType">The type of object to get contact details for.</param>
    /// <param name="objectID">The leadID of the Lead to get addresses for</param>
    /// <param name="addressID">The Address ID for the specific Address.</param>
    /// <param name="body"> (optional)</param>
    virtual void update_address(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, const Address &body, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* AddressesApi_H_ */
