#include <iomanip>
#include <iostream>
#include <encstr/string.hpp>
#include <encstr/cfb.hpp>
#include <encstr/ciphers/xor_cipher.hpp>

int main()
{
    using encoder = encstr::cfb_t<encstr::ciphers::xor_cipher_t<encstr::ciphers::xor_default_block_size>>;
    std::cout << ENCRYPT_STRING_AUTO(char, encoder, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean volutpat et erat sed volutpat. Duis fringilla.");

    std::cin.get();

    return 0;
}
