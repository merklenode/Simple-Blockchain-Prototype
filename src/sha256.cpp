#include "sha256.h"
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>
#include <stdexcept>

namespace MySHA256 {

std::string hash(const std::string& input) {
    unsigned char hash[32]; // 32 bytes for SHA256
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();

    if (!ctx) throw std::runtime_error("Failed to create EVP_MD_CTX");

    if (EVP_DigestInit_ex(ctx, EVP_sha256(), NULL) != 1 ||
        EVP_DigestUpdate(ctx, input.c_str(), input.length()) != 1 ||
        EVP_DigestFinal_ex(ctx, hash, NULL) != 1) {
        EVP_MD_CTX_free(ctx);
        throw std::runtime_error("Failed to compute SHA256 hash");
    }

    EVP_MD_CTX_free(ctx);

    std::stringstream ss;
    for (int i = 0; i < 32; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

} // namespace MySHA256
