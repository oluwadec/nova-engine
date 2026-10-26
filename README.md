# Nova Engine

**A clean, modern 2D game engine written from scratch in C++17/20.**  
Built with a strong focus on systems programming fundamentals, educational clarity, and architecture suitable for both game development and robotics/mechatronics simulation work.

> Status: **Active Development** — Core foundation in progress

---

## Vision

Nova Engine aims to be:

- **From-scratch** — Minimal external dependencies. Deep understanding of the full stack.
- **Educational** — Every major system is designed to teach core concepts (memory, ownership, game loop, ECS patterns, rendering pipeline).
- **Practical** — Architecture that can later support 2D games *and* simple physics/control simulations relevant to mechatronics.
- **Clean** — Modern C++ practices, clear separation of concerns, and readable code.

---

## Current Architecture (High-Level)

```
Nova Engine
├── Core
│   ├── Application / Game Loop
│   ├── Time & Timestep
│   ├── Logging
│   └── Memory utilities (future)
├── Platform
│   └── Window + Input (GLFW planned / custom later)
├── Renderer
│   └── 2D Batch Renderer (OpenGL / custom)
├── Scene / ECS (Entity-Component-System)
│   ├── Entity
│   ├── Component storage
│   └── Systems
└── Assets
    └── Texture / Resource management
```

### Planned Systems (Roadmap)

| Phase | System                        | Status     | Priority |
|-------|-------------------------------|------------|----------|
| 1     | Project structure + Build     | ✅ Done    | High     |
| 1     | Logging + Assertions          | 🚧 Next    | High     |
| 1     | Application + Game Loop       | Planned    | High     |
| 1     | Window + Input abstraction    | Planned    | High     |
| 2     | 2D Renderer (batching)        | Planned    | High     |
| 2     | Basic ECS                     | Planned    | High     |
| 3     | Asset Manager                 | Planned    | Medium   |
| 3     | Simple Physics / Collision    | Planned    | Medium   |
| 4     | Scene serialization           | Planned    | Low      |
| 4     | Editor tooling (future)       | Planned    | Low      |

---

## Design Principles

1. **Clarity over cleverness** — Code should be readable by a strong second-year student.
2. **Zero-cost abstractions** where possible — Prefer compile-time solutions.
3. **Ownership is explicit** — Heavy use of smart pointers only where ownership transfer is needed; prefer value semantics and references otherwise.
4. **Separation of engine vs game** — Engine code lives in `engine/`, example games/apps in `sandbox/` or `examples/`.
5. **Measurable performance** — Frame timing and basic profiling hooks from early stages.

---

## Build Requirements (Planned)

- CMake 3.20+
- C++17 (moving toward C++20)
- Compiler: GCC 11+ / Clang 14+ / MSVC 2022
- Dependencies (minimal):
  - GLFW (window/input) — temporary until custom platform layer
  - Glad / custom OpenGL loader
  - spdlog or custom logger

---

## Project Structure (Target)

```
nova-engine/
├── CMakeLists.txt
├── engine/                 # Core engine library
│   ├── core/
│   ├── platform/
│   ├── renderer/
│   ├── ecs/
│   └── assets/
├── sandbox/                # Example applications
├── docs/                   # Architecture decisions, notes
├── thirdparty/             # Vendored dependencies (minimal)
└── README.md
```

---

## Why This Project Exists

This engine is being built as a long-term systems programming project while studying Mechatronics Engineering.  
The goal is not to compete with existing engines, but to develop deep understanding of:

- Real-time loops and timing
- Memory and cache-aware design
- Entity-Component architectures
- Rendering pipelines
- Clean software architecture under performance constraints

These skills transfer directly to robotics simulation, embedded systems software, and high-performance control code.

---

## Author

**Aboderin Logo** (`oluwadec`)  
Mechatronics Engineering Student  
Focused on Robotics, Control Systems, and Systems Programming

---

*Always learning. Always building.*
