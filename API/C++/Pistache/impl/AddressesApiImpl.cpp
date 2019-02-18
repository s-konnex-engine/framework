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

#include "AddressesApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AddressesApiImpl::AddressesApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : AddressesApi(rtr)
    { }

void AddressesApiImpl::create_address(const std::string &objectType, const int32_t &objectID, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AddressesApiImpl::delete_address(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AddressesApiImpl::get_address_by_id(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AddressesApiImpl::get_addresses(const std::string &objectType, const int32_t &objectID, const Pistache::Optional<int32_t> &bodyLimit, const Pistache::Optional<int32_t> &pageLimit, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AddressesApiImpl::update_address(const std::string &objectType, const int32_t &objectID, const int32_t &addressID, const Address &body, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

