# nr-rrc-reader

``` bash
asn1c.exe  \
    -fcompound-names \
    -findirect-choice \
    -gen-PER \
    -pdu=all \
    -no-gen-OER \
    -no-gen-example \
    -fincludes-quoted \
    -funnamed-unions \
    -Wdebug-parser \
    -D nr-rrc 38331-f60.asn
```    
