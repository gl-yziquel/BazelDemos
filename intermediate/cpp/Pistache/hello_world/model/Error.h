/**
* Hello World API
* Say hello API
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Error.h
 *
 * 
 */

#ifndef Error_H_
#define Error_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Error
{
public:
    Error();
    virtual ~Error() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const Error& rhs) const;
    bool operator!=(const Error& rhs) const;

    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// Error code
    /// </summary>
    int32_t getCode() const;
    void setCode(int32_t const value);
    bool codeIsSet() const;
    void unsetCode();
    /// <summary>
    /// Error message
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string const& value);
    bool messageIsSet() const;
    void unsetMessage();

    friend void to_json(nlohmann::json& j, const Error& o);
    friend void from_json(const nlohmann::json& j, Error& o);
protected:
    int32_t m_Code;
    bool m_CodeIsSet;
    std::string m_Message;
    bool m_MessageIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Error_H_ */
