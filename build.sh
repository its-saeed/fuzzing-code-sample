mkdir -p bin \
&& cmake -B bin . \
&& cmake --build bin -j \
&& cmake --install bin
