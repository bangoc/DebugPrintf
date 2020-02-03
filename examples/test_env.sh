#!/bin/bash
echo Test case 0. level = ALL
export DEBUG_PRINTF_LEVEL=ALL
./demo

echo Test case 1. level = TRACE
export DEBUG_PRINTF_LEVEL=TRACE
./demo

echo Test case 2. level = DEBUG
export DEBUG_PRINTF_LEVEL=DEBUG
./demo

echo Test case 3. level = INFO
export DEBUG_PRINTF_LEVEL=INFO
./demo

echo Test case 4. level = WARNING
export DEBUG_PRINTF_LEVEL=WARNING
./demo

echo Test case 5. level = ERROR
export DEBUG_PRINTF_LEVEL=ERROR
./demo

echo Test case 6. level = NONE
export DEBUG_PRINTF_LEVEL=NONE
./demo