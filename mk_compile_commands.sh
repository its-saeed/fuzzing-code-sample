#!/bin/bash
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B bin
ln -sf bin/compile_commands.json compile_commands.json
echo "compile_commands.json generated and linked."
