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

#include "ContactDetailsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ContactDetailsApiImpl::ContactDetailsApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : ContactDetailsApi(rtr)
    { }

void ContactDetailsApiImpl::create_contact_details(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response){
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ContactDetailsApiImpl::delete_contact_details(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ContactDetailsApiImpl::get_contact_details(const std::string &objectType, const int32_t &objectID, const Pistache::Optional<int32_t> &bodyLimit, const Pistache::Optional<int32_t> &pageLimit, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ContactDetailsApiImpl::get_contact_details_by_id(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ContactDetailsApiImpl::update_contact_details(const std::string &objectType, const int32_t &objectID, const int32_t &contactID, const std::vector<KeyValuePairs> &keyValuePairs, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

