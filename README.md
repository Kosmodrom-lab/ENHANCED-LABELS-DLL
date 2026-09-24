# EnhancedLabels DLL

A lightweight, high-performance Win32 C dynamic-link library (DLL) designed to extend standard GUI static text controls with advanced visual features such as custom typography, colored backgrounds, gradient fills, borders, anti-aliased rendering, and dynamic text alignment.

---

## 🌟 Features

- **Custom Styling:** Full control over text color, background color, and custom fonts.
- **Gradient & Background Fills:** Smooth background color rendering with support for modern visual designs.
- **Advanced Typography:** Support for custom fonts, anti-aliased text rendering, and vertical/horizontal text centering.
- **Custom Borders & Padding:** Add sharp or rounded borders with configurable margin and padding.
- **Zero Heavy Dependencies:** Written in clean C against standard Win32 APIs (`GDI32` / `User32`), ensuring minimal memory footprint and high FPS compatibility.
- **Universal Compatibility:** Can be called from C/C++, IWBasic, FreeBASIC, Pelles C, Delphi, or any language supporting standard `stdcall`/`cdecl` Win32 DLL exports.

---

## 📁 Repository Structure

```text
├── src/
│   ├── enhanced_labels.c      # Core DLL implementation
│   └── enhanced_labels.h      # Public API header & definitions
├── examples/
│   ├── c_example.c            # C usage sample
│   └── iwbasic_example.iwb    # IWBasic 2.5 usage sample
├── bin/                       # Compiled binaries (.dll, .lib, .a)
├── LICENSE                    # License information
└── README.md                  # Project documentation
