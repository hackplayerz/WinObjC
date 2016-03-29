//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// This header file is not yet implemented
#include <stdint.h>
#include <StubIncludes.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
    kCCBlockSizeAES128 = 16,
};

enum {
    kCCKeySizeAES256 = 32,
};

#define CC_MD2_DIGEST_LENGTH 16
#define CC_MD4_DIGEST_LENGTH 16
#define CC_MD5_DIGEST_LENGTH 16
#define CC_SHA1_DIGEST_LENGTH 20
#define CC_SHA224_DIGEST_LENGTH 28
#define CC_SHA256_DIGEST_LENGTH 32
#define CC_SHA384_DIGEST_LENGTH 48
#define CC_SHA512_DIGEST_LENGTH 64

enum {
    kCCAlgorithmAES128 = 0,
    kCCAlgorithmDES,
    kCCAlgorithm3DES,
    kCCAlgorithmCAST,
    kCCAlgorithmRC4,
    kCCAlgorithmRC2,
    kCCAlgorithmBlowfish
};

typedef int32_t CCCryptorStatus;

enum {
    kCCSuccess = 0,
};

typedef struct _CCCryptor* CCCryptorRef;

enum {
    kCCEncrypt = 0,
    kCCDecrypt,
};

int32_t CCCrypt(uint32_t op, /* kCCEncrypt, etc. */
                uint32_t alg, /* kCCAlgorithmAES128, etc. */
                uint32_t options, /* kCCOptionPKCS7Padding, etc. */
                const void* key,
                size_t keyLength,
                const void* iv, /* optional initialization vector */
                const void* dataIn, /* optional per op and alg */
                size_t dataInLength,
                void* dataOut, /* data RETURNED here */
                size_t dataOutAvailable,
                size_t* dataOutMoved) STUB_METHOD;

#ifdef __cplusplus
}
#endif