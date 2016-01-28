#ifndef TEAENCRYPTOR_H
#define TEAENCRYPTOR_H

#include <stdint.h>

class TeaEncryptor
{
    public:
        TeaEncryptor();
        void encrypt(uint32_t* v, uint32_t* k);
        void decrypt(uint32_t* v, uint32_t* k);
};

#endif // TEAENCRYPTOR_H
