\---

name: ForgeUI Hardware Issue

about: Report a problem with this ForgeUI Hardware Lab project

title: "\[Hardware] "

labels: hardware

assignees: ''

\---



\# ForgeUI Hardware Issue



Thanks for testing a ForgeUI Hardware Lab project.



This repository contains a physically tested hardware reference developed as part of the ForgeUI hardware validation program.



\*\*ForgeUI:\*\* https://forgeui.co.nz  

\*\*ForgeUI Studio:\*\* https://studio.forgeui.co.nz



\## Problem



Describe what is happening and what you expected to happen.



\## Hardware



Please provide:



\- ESP32 board/model:

\- Display controller:

\- Display size/resolution:

\- Display/module product link:

\- Interface type:

\- Additional connected hardware:



\### Reference hardware for this repository



\- ESP32-S3 DevKitC-1

\- ST7789 TFT

\- 2.25-inch IPS display

\- Native resolution: 76×284

\- Landscape viewport: 284×76

\- SPI interface



\## Wiring



List the wiring you are using.



\### Physically validated reference wiring



| Display | ESP32-S3 | Function |

|---|---:|---|

| GND | GND | Ground |

| VCC | 3.3V | Power |

| SCL / SCLK | GPIO 12 | SPI clock |

| SDA / MOSI | GPIO 11 | SPI data |

| RST | GPIO 10 | Reset |

| DC | GPIO 9 | Data / command |

| CS | GPIO 8 | Chip select |

| BL | GND | Backlight |



\### Backlight note



The module physically tested by ForgeUI uses an \*\*active-low backlight\*\*.



&#x20;   BL -> GND



Other ST7789 modules may use different backlight circuitry.



\## Software Environment



Please provide:



\- Operating system:

\- PlatformIO version:

\- Espressif32 platform version:

\- Arduino ESP32 framework version:

\- Build result: PASS / FAIL

\- Flash result: PASS / FAIL



\## Physical Behaviour



What do you see on the real display?



Examples:



\- Completely black

\- Backlight on but no graphics

\- Incorrect colours

\- Corrupted graphics

\- Incorrect orientation

\- Incorrect display offset

\- ESP32 resets

\- Build failure

\- Flash failure



\## Build / Serial Output



Paste only the relevant section of the output inside a code block.



For large logs, attach the log as a file.



\## Photos



Photos are extremely useful for hardware diagnosis.



If possible, include photos showing:



\- ESP32 board

\- Display module

\- Wiring

\- Physical screen output



\## Reproduction



Describe the shortest sequence that reproduces the problem.



1\.

2\.

3\.



\## Physical Hardware Validation



Does the problem occur on real hardware?



\- \[ ] Yes

\- \[ ] No

\- \[ ] Not yet tested



\## Additional Information



Add anything else that may help reproduce or diagnose the problem.



\---



\## ForgeUI Hardware Lab



Physically tested ESP32 hardware references, display experiments, LVGL development and potential future ForgeUI Studio hardware targets.



https://forgeui.co.nz

