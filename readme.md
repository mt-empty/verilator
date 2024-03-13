# Verilator examples

each verilator file (.v) needs a test bench file (prefixed with tb)

```bash

verilator -Wall --cc Mult4to1.v --exe tb_Mult4to1.cpp

make -j -C obj_dir/ -f VMult4to1.mk VMult4to1

./obj_dir/VMult4to1

```