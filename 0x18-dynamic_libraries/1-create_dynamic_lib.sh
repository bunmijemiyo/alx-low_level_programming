cat 1-create_dynamic_lib.sh
#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
