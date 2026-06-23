# Byte-sized Companion

A physical desktop companion powered by an ESP32 and Linux.

ESP32 connects to my laptop and provides useful information and automation for my daily workflow, including robotics, programming, backups, and system monitoring.

## Features (Planned)

- System health monitoring
- Battery status indicators
- Robotics/development mode
- Podman container monitoring
- Backup status monitoring
- Workspace launching
- Physical button shortcuts

## Hardware

### Main Device

- ESP32 Development Board

### Host Machine

- Linux laptop

### Additional Hardware

- External HDDs
- USB drives

## Software Stack

- C++ (ESP32 firmware)
- Python (laptop integration)
- PlatformIO
- VS Code
- Git

## Project Structure

```text
firmware/
├── src/

laptop/
├── scripts/

docs/

README.md
```

## Roadmap

- [ ] Establish serial communication
- [ ] Control onboard RGB LED
- [ ] Create system status indicators
- [ ] Add robotics/dev mode
- [ ] Add Podman integration
- [ ] Add backup monitoring
- [ ] Add workspace launcher

## Goal

Build a useful physical companion device that integrates with my Linux development and robotics workflow.
