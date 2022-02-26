[![Build Status]()]()

# cpp-tasks

Package contain tasks from book "С++ examples and tasks"

## Details

Details information #TODO

# Git hooks

1. pre-commit
2. commit message must contain Add: |Created: |Fix: |Update: |Rework:

# Doxygen

'''
doxygen Doxyfile
'''

## Installation

```
mkdir build && cd build
cmake -DBUILD_TESTS=ON ..
cmake --build .
ctest --output-on-failure
cpack
sudo apt install ./*.deb --reinstall
```

## License

MIT

see the [LICENSE](LICENSE.md) file.

## Maintainer

Anatoly Kabakov <anatoly.kabakov@mail.ru>
