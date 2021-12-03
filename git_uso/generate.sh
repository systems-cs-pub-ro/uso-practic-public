#! /bin/bash

for n in {1..50}; do
        touch "file$((n)).in"
        touch "file$((n)).out"
        touch "file$((n)).ref"
done
