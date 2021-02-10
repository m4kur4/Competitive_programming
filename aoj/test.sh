#!/bin/bash

# 基本
echo "Hello World!"
# exit 0

# 変数
s="Hello"
echo $s
echo "${s}"

# ループ
i=0
while [ $i -lt 10 ]
do
  i=`expr $i + 1`
  echo ${i}
done
exit 0

