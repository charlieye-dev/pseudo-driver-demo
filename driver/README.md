# Pseudo device

pseudo device is a virtual device, user can access to it same as a physical device.

also refer to:

> https://lyngvaer.no/log/writing-pseudo-device-driver

## How to install

1. build module

   ```
   $ make
   ```

2. install module

   ```
   $ insmod cat.ko
   ```

3. make a device node

   ```
   $ grep dcat </proc/devices
   244 dcat

   $ mknod /dev/cat c 244 0
   ```

## Test device

```
cat /dev/cat
```
