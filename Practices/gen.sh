#!/bin/bash

echo "" > a.inp
echo 1000000 >> a.inp
for i in {1..1000000};
do
    echo $i >> a.inp
done
