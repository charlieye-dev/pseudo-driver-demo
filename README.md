# Pseudo Driver Demo

A demo that how access a pseudo device(without phycial devices) from container.

## Install pseudo driver

Refer to: [How to install pseudo driver](./driver/README.md)

## Access pseudo device from local

```
make
./main
```

## Access pseudo device from container

```
make
make docker
```

then run docker image with `--privileged` option.
