<img style="width: 50%" src="./ctcl_cfw_logo.svg">

# CTCL Custom Flipper Zero Firmware
This is a fork of the [Official Flipper Zero firmware](https://github.com/flipperdevices/flipperzero-firmware).

The main goal of the fork is to have the device professional and less like a toy.

## Disclaimers

Support from Flipper Devices may be unavailable when using this firmware. 

Unlike some other firmware forks, this firmware does not unlock the Sub-GHz frequencies. 

# Features
These features are currently planned:

- No Dolphin; Tamagotchi: No leveling or animations
- Custom-made UI font using Pixel-7x7 from [Pixel-Fonts](https://github.com/ctcl-bregis/pixel-fonts/)

# Development
The same process for cloning and compiling the source code is used:

## Cloning source code

Make sure you have enough space and clone the source code:

```shell
git clone --recursive https://github.com/ctcl-bregis/ctcl-cfw.git
```

## Building

Build firmware using Flipper Build Tool:

```shell
./fbt
```

## Flashing firmware using an in-circuit debugger

Connect your in-circuit debugger to your Flipper and flash firmware using Flipper Build Tool:

```shell
./fbt flash
```

## Flashing firmware using USB

Make sure your Flipper is on, and your firmware is functioning. Connect your Flipper with a USB cable and flash firmware using Flipper Build Tool:

```shell
./fbt flash_usb
```


