#!/bin/bash

set -e



echo "Przygotowywanie..."

SOURCES=$(find kernel -name "*.c")

echo "Kompiluje..."

CC=gcc
TARGET="system"

for src in $SOURCES; do
    obj="${src%.c}.o"
    echo "Kompiluję: $src -> $obj"
    $CC -c "$src" -o "$obj"
    OBJECTS="$OBJECTS $obj"
done

echo "Linkowanie plików w jeden system..."
$CC $OBJECTS -o $TARGET

echo "Zakończono: $TARGET"