# DebugPrintf
A very tiny utility for debugging, which is made only for educational purposes, in teaching of C programming.

## What does it means by DebugPrintf?
Inspired by the debugging style of many future developers at the very beginning level: Want to see the value of a variable? Just print it out!

Also inspired by logging features, which are used by many professionals in all kind of projects: logs are classified and can be controlled at runtime.

So i have created this library for future talented developers, to take the printf debugging style to a higher level. Seriously i'm not kidding at all, and i hope they will like it.

## How does it works?
Here we have a demo
![Demo](https://github.com/bangoc/DebugPrintf/blob/master/examples/demo.png)

## How to config?
We have five levels: `TRACE < DEBUG < INFO < WARNING < ERROR`
We can specify the minimum expected level through an environment variable, and it is a hot config. The syntax is:
`export DEBUG_PRINTF_LEVEL=LEVEL`
Please see 
[test_env.sh](https://github.com/bangoc/DebugPrintf/blob/master/examples/test_env.sh) 
for more examples.

## How to use it in your project?
You will need two files: `debug_printf.c` and `debug_printf.h`, you can add it in your project as other source files, or you can build a library and link to your projects.

For printing values, we have five macros:
`printfTrace, printfDebug, printfInfo, printfWarning, printfError` in corresponding with five levels.
The syntax is similar to printf. And just like printf, we direct output to the stdout stream.

DebugPrintf is not designed for multi-threaded code, use it only in single-threaded code.
