#include <pgmspace.h>

#define SECRET
#define THINGNAME "Esp_001" //Nome da "Coisa" criada no IoT Core

// Definição das credenciais de Wi-Fi
const char WIFI_SSID[] = "5BOLA-FUNDO";
const char WIFI_PASSWORD[] = "5bola2008_";

// Endpoint do AWS IoT Core
const char AWS_IOT_ENDPOINT[] = "ahewmsw6wdfq2-ats.iot.us-east-2.amazonaws.com";

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

// Certificado do dispositivo
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWjCCAkKgAwIBAgIVALOST5dl7lGZlSLBEqXrpwLsmT8CMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yNDA0MDUwMzMx
MjVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC7a3rOO5Nj7qEDyvee
PUmsCr7K1vaUF9VfJBDoM/DOPvcZpC5d2UeSlqhMmO0iNpdGe4OR/UsbFF2Q44sn
goOHti1UMialUY+wkCtSZcaGHbfUVSvZeossWPoZ8pnHtZgzHEdkGe5kpMSt4iKQ
FAPwKqfZQYna/ww1Phqr6MMRoYYkyfK/0ubYbYdznAyonEHkz6MYA9iTFklhmRzX
NaU6lLzs22KBc9xUaWklw4sgk/DtOTn9rJXF8YRtAuAzeQDfS7q07PxGCNHcd5q/
ETfAk91t85ohfQwK5kg1J+9Dyuw1ZoZC8ODHXYRn54u7HTDPOjmqS8BwytaDEXAr
zX4nAgMBAAGjYDBeMB8GA1UdIwQYMBaAFGRQVBmub/aiB0pfRsgBvqXNcNxwMB0G
A1UdDgQWBBSmDIZDaKwCw3KY/vU3JffnIkA0SjAMBgNVHRMBAf8EAjAAMA4GA1Ud
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAvHtS8pUo9JWvoVeJcjGSy+Rv
rPZisMUe1s5ETaM+pPqRfztdSQ207srn7zCdm+FKgEpcGJWINvhMkUqNl4YLiHyc
R20nmLrX66nKo3R0UWozh1A3MWyHQd4iMOlPk/j4wF44faNZW5tzs9IEFXuVA7v3
5QDdnrjkEHs12djldtuBv24rEL1+//H798TAhdsIr4k2sgWnv+0/CqucEhzgdgEO
TyP1gUVKjwdoptC+rTFvy67DJC9jIoKPp1ZJF0PoykdcbwieekCDhweHBt2tmu+L
UZK5LlhFkBaoWkPEdPljYLXsSdiWek96O5ZDIqF7KkCa8mErHPM8/M0SF8lghw==
-----END CERTIFICATE-----

)KEY";

// Chave privada do dispositivo
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEowIBAAKCAQEAu2t6zjuTY+6hA8r3nj1JrAq+ytb2lBfVXyQQ6DPwzj73GaQu
XdlHkpaoTJjtIjaXRnuDkf1LGxRdkOOLJ4KDh7YtVDImpVGPsJArUmXGhh231FUr
2XqLLFj6GfKZx7WYMxxHZBnuZKTEreIikBQD8Cqn2UGJ2v8MNT4aq+jDEaGGJMny
v9Lm2G2Hc5wMqJxB5M+jGAPYkxZJYZkc1zWlOpS87NtigXPcVGlpJcOLIJPw7Tk5
/ayVxfGEbQLgM3kA30u6tOz8RgjR3HeavxE3wJPdbfOaIX0MCuZINSfvQ8rsNWaG
QvDgx12EZ+eLux0wzzo5qkvAcMrWgxFwK81+JwIDAQABAoIBAEFsMlEdUMT4frJR
PoC5SidJFPK/eRGXBD+S2mgEAZItPppvylOuTiKofpVGaLihr8rFwNbMQVRxlnvG
QkQHdhyAhnA2lXDt+Kecm9LGfjdA1nPDS2w+L6jKYnt+SRoClN96hp01xBbTwWgl
YQVER1+ltDPNge61SzCmvi62MKnNS4/YzW6d17nANjvvgKajhIc25jcDuxYKt2p2
oCPBi3MDJjkHTqP5FkyGyLdSXmP1ctbLYgLTe8ecFNUDaGGUbgBbc/xa5OWl3sxr
2xLfDB/kekxS7cVIDaQwRkid0sZmyi2Gq/bVjCHRAiS7uslnZxkOodtffVIcN0pz
kLeNj7kCgYEA9e5n4DZVRQO6EIU4y05T9z103ArkxQ8r4PeYWOOHsOsyVkACWHDy
+yUeD5ETwJWhipqusmWyyRJLyxoce5L3XjmkF+WbUgqrzeZMtckdhMBUWsi4eECK
wNOnxQOPzJ4rmWpMxkBBMKMiLXFJdhK/XAG3/uy98lxMcJo+1eYXCo0CgYEAwxfR
gIhm989xOr+MVAcUriCKYE2W1V31326OlZM5DBVM1bQA77VOQ1EN8jcLpOrZb7sR
KX4FHg3U1H4l0K4xuBQv87117gn1+0kuUCTwRmlDGavxTxuB1RaottDRzj9TYTPx
qTXR8/vvHKo2Mw2UmiCCkO2LjyaBC7J5HLGVeIMCgYEA8mOMTAchGclnjLrRVEga
J9eRowK1oaenVq6RoCJ5bZ0SWsHxzdtdELzvmOYjcq/HrMVyI3BquxTmUQKmSgF6
/4qOOeNap4zO8jvnJVBYYKvzOBsW/aaXWyAA/gPZqhHG5QlJLCjOV7Khj+pVPiOS
KYukHoSVXhcsW9sazVVfJk0CgYBqgVxMMSsValhEXEH9tYfir70bagBIJ22NNsv8
eE0SfaZenFBOjMpXEa7tZoOi2tstlhB+eF/O0no4L03xqMdX2R18kRgKhcGWF5OD
CUdrCRgqsaWhLEEq1Z3xf/qqAARC8pqhZ9Jgwk79dSb1pBpWMh1VhXlFAx48Boj7
0y7ohQKBgG9PXx0Mox8w3VL5e+oJtnFIKjPgZGY0W5pyHzcslq9Zu27eee8pdFsW
zcLvVKXtoQd12evjrqINBJBv1CKjuMfvDZCN9BBLW7AXs2KF5GcCabMwJUPOIfJS
PSb5OMfnLP/5NlK/waKRfLCx+bBasR8qXZoc4QxCkiE6eC+nXmkH
-----END RSA PRIVATE KEY-----
)KEY";
