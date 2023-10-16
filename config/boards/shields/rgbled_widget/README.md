# LED indicators using an RGB LED

This is a shield[^1] containing a simple widget that utilizes a (typically built-in) RGB LED controlled by three separate GPIOs.
It is used to indicate battery level and BLE connection status in a minimalist way.

See [this video](https://cdn.discordapp.com/attachments/1134635625455292426/1134639930501496832/rgbled_widget.mp4) for a short demo, running through power on, profile switching and power offs.

By default this shield is configured to work with Xiao BLE and Xiao RP2040 boards[^2], see overlays in the [`boards` folder](boards/).
You can also add support for your board/shield by defining `aliases` to the RGB LED node labels, similar to the examples in that folder.

To enable, add `rgbled_widget` as an additional shield to your build, e.g. in `build.yaml`:

```yaml build.yaml
---
include:
  - board: seeeduino_xiao_ble
    shield: hummingbird rgbled_widget
```

Currently the widget does the following:
- Blink 🟢/🟡/🔴 on boot depending on battery level (for both central/peripherals), thresholds set by `CONFIG_RGBLED_WIDGET_BATTERY_LEVEL_HIGH` and `CONFIG_RGBLED_WIDGET_BATTERY_LEVEL_LOW`
- Blink 🔴 on every battery level change if below critical battery level (`CONFIG_RGBLED_WIDGET_BATTERY_LEVEL_CRITICAL`)
- Blink 🔵 for connected, 🟡 for open (advertising), 🔴 for disconnected profiles on every BT profile switch (on central side for splits)
- Blink 🔵 for connected, 🔴 for disconnected on peripheral side of splits

Blink durations can also be adjusted, see the [Kconfig file](Kconfig.defconfig) for available config properties.
You can create a conf file to modify the config values, e.g. in `config/rgbled_widget.conf`:

```ini
CONFIG_RGBLED_WIDGET_INTERVAL_MS=250
CONFIG_RGBLED_WIDGET_BATTERY_LEVEL_HIGH=50
CONFIG_RGBLED_WIDGET_BATTERY_LEVEL_CRITICAL=10
```

[^1]: This "shield" doesn't define any real hardware. It is only defined as one to compile the code to enable the widget functionality and to allow it to be combined with other boards/shields during firmware building.
[^2]: By default it doesn't do anything for RP2040 since there is no battery or BLE support for it. But you can extend the code in `leds.c` to listen to and display other events like sent keycodes.
