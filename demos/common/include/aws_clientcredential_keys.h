#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAKMiN0h5ZYgp/uFO2NMqo19UUb2CMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA5MDQwNDI2\n"\
"MTlaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDUaybOFbRMd11GAqnr\n"\
"M6k7f8b2okVRyW3+2XFfB5aK2SIhoTpnj71Vavq76wbCHypp/kkS6s4exaHfJa19\n"\
"4OcpWfBehzKUFbwD3Pb32ogNVRyVgrPHe8xuZ0DuUohQMVLJ+Dra+sm7TW1wMH/P\n"\
"xym211jqj9/d0BXOZiB7Lc2ZOxEYB+2EcXNVt+yQw8s1mIh0TI6swO4pQ/FWvJC9\n"\
"VzI0KOeqxcucReSGRKodmFxqu8EBmotIIG+s79sG5jJvOAciQbL0TRQJhjAgFXcm\n"\
"0jsxUaCTlxjS/jA1CdVqPpspv2TxzqF4RDi7qr6bIAdiB8gNZZL8TbEIO9YEm5I/\n"\
"gz6fAgMBAAGjYDBeMB8GA1UdIwQYMBaAFFtmJQ3mujXBf1B5Rrd7mmEnDmTsMB0G\n"\
"A1UdDgQWBBRTZkZoGzWwl+OYBIGlmom906d5SzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAHGShbfc3O0ZmMFv/nKjxsAtw\n"\
"33YmWYKn4u/XJ0Tnm9xT97oAflmYGEQKVhW/5GFHERE9fr+7Zeu9iVXu8G+yJKYX\n"\
"u7a0xZzBIW1xUMv+u+rlQXlouO+HdCHcibg8gyHbYd4U5KutEkm0M1/97vKiCPED\n"\
"IkvCck962q2KbMY+LhzlqaRvDJvmIbWVkVTs8fnE79+68FBHTZmxfspUGiSp7HXo\n"\
"RzIBn33xOAJUVrE5T/oYXfVHR/bTTY3oXZLlfuplP1XwMxV6sKGvVDwDj5ZIp08d\n"\
"R9xF1iM9tvwSSqOf7IlqRUL3PExGGridMpYooTgpBao4c5MXItYGI8v/UzJE3w==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM    NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEA1GsmzhW0THddRgKp6zOpO3/G9qJFUclt/tlxXweWitkiIaE6\n"\
"Z4+9VWr6u+sGwh8qaf5JEurOHsWh3yWtfeDnKVnwXocylBW8A9z299qIDVUclYKz\n"\
"x3vMbmdA7lKIUDFSyfg62vrJu01tcDB/z8cpttdY6o/f3dAVzmYgey3NmTsRGAft\n"\
"hHFzVbfskMPLNZiIdEyOrMDuKUPxVryQvVcyNCjnqsXLnEXkhkSqHZhcarvBAZqL\n"\
"SCBvrO/bBuYybzgHIkGy9E0UCYYwIBV3JtI7MVGgk5cY0v4wNQnVaj6bKb9k8c6h\n"\
"eEQ4u6q+myAHYgfIDWWS/E2xCDvWBJuSP4M+nwIDAQABAoIBAH++AJQm0Uq67cjQ\n"\
"iUb8xmUVrp1bcLyCmjeMpHU1pv7RHYmD4A+vjXj04NxptqK/A07CsUdDFbnDuFjt\n"\
"26u7uMhRYhA21d/gQjVAiPT84pzB9nKjK2JnvMUYKyAnWfp/7v2u3hYag360TYAO\n"\
"ao6VgyyFzN8irspB/Rsmp5nsLZxbpBaButIdS5+EuLkxfON2YK/wRX8fq3tK3C+U\n"\
"pamwUo8GeP2FelMcMmWGD+AdgP7VH3lmUJ5iwCZWJuhgwnos5h73EK/jdDAtLSHP\n"\
"rStzvYDCJyH4WaWHNC8+hYgOY+HvCj2JMtvqu9njXezJuV/W0TFalicA23FAnNk0\n"\
"F3HEbOECgYEA+Nu9tQegZxtuel5SP3wVQCT/GQDRGaS+XgOobRoL1zTs+38Nqw29\n"\
"56g13Jt4rZD5fROP6xODzkoDPfA9QaSzS2GY5c5rDHFOuFN9XLLYVq83CGvjz0+b\n"\
"l1R21J6hluGrO72pl+MQQTWQuEuLBDmnWY9M3iAaZfJlyWxI0dc04h0CgYEA2oOz\n"\
"1B7QLdfQKSzlIDsxhC7e8vyGdNviQaW/bhZAY7SHgP7OclgVKe9VNGiZvSobckPm\n"\
"ciKO+TLDybWEAHBqzS/1UgbBcqR/TKz+r8bg6vLQ1RT4gWoFcNliuUAXQxqQvkIg\n"\
"aPsyngm7MRojt5DtPzr1631mEnT7Syx3VHdnBusCgYEAk7Blf8BM86QWBs1fZonP\n"\
"WsgaFM6lSeC5kbX+CPHCQTAJzJ/0jqWTJJ5xiMFD903ootAvQ0XLnWvTTLj8wa5r\n"\
"Mbt0MD42zaWZIE98QL1rItbNhFPzWR9XqZHZDAowwAihxMykj52UEf8mKhm7IQDO\n"\
"Tpp69gB7ajFXMxjuhop/ugkCgYAPg5xH6iwjpRftZHecEzfPx7gijlVJhLcKrCbs\n"\
"PP4zVgTs3qpvqdtOz+Q/xVFtAclTEokQ/20hOj52WsHVeiXLDaWgPkSLzCwRmJK4\n"\
"jik35Sd4iXWfUpSyT2zX9DnylLdEGtPMQFF2sQAuW0m/5bVCcQA2yP9vPgj9bFnI\n"\
"kHWrIwKBgB9w14+JYAMxcbZKUJCSeJc7hrWfXHfMnff2XNkSNNmZFIwknL0lSOVn\n"\
"chwOvbcRGEg8RejJl32KN4hhiglEBkbtDw2qe1PJ58rWoJ0JL6CTG09sKUH91c3y\n"\
"AEfB5NNTBc92+knL5TJX36N0rYe4LcL91rFT5beMTFhe3s2QJ4hR\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_dev_mode_key_provisioning.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char * clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
