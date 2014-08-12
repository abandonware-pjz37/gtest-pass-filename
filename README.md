### Usage

```bash
> cmake -H. -B_builds -GXcode -DGTEST_ROOT=/path/to/gtest/libs
> cmake --build _builds
> cd _builds
> ctest -VV
```
