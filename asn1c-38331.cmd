@echo off

asn1c.exe -S ../bin/skeletons  ^
    -fcompound-names ^
    -findirect-choice ^
    -gen-PER ^
    -pdu=all ^
    -D nr-rrc 38331-f40.asn
