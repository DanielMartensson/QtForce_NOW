# QtForce NOW

Optimized GeForce NOW web browser in kiosk mode with Qt WebEngine

# Issues and status
The browser is working, but at the start-up, the application output terminal shows:
```
js: requestStorageAccess: Permission denied.
js: Uncaught (in promise) NotAllowedError: requestStorageAccess not allowed
js: The resource https://play.geforcenow.com/mall/assets/img/spotlight-bg.webp was preloaded using link preload but not used within a few seconds from the window's load event. Please make sure it has an appropriate `as` value and it is preloaded intentionally.
```

# Dependencies from Qt Maintenance Tool
- Extensions
  - Qt WebEngine
    - Qt 6.10.2
      - Debug Information Files
      - MSVC 2022 x64
      -  Sources
- Qt
  - Qt 6.10.2
    - MSVC 2022 64-bit
    - Sources
    - Additional Libraries
      - Qt 5 Compability module
      - Qt Multimedia
      - Qt Positioning
      - Qt Quick 3D
      - Qt Quick Timeline
      - Qt Shader Tools
      - Qt WebChannel
      - Qt WebSockets
      - Qt WebView
  - Build Tools
    - CMake 3.30.5
    - Ninja 1.12.1
- Qt Creator
  - Qt Creator 18.0.2

