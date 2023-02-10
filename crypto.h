#include <string>

/*
Defines all the cryptographic primitives needed for the bitcoin protocol
*/
namespace crypto {
    std::string sha256(const std::string str);
}
