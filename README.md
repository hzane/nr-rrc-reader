# nr-rrc-reader

``` bash
rm -rf nr-rrc && mkdir nr-rrc

asn1c \
    -no-gen-example \
    -fcompound-names \
    -findirect-choice \
    -gen-PER \
    -pdu=all \
    -fincludes-quoted \
    -funnamed-unions \
    -D nr-rrc 38331-f60.asn
```    
