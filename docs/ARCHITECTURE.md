# Nova Engine Architecture Notes

## Core Philosophy

Nova Engine prioritizes **understanding** over feature count. Every major subsystem is intentionally designed so that the author (and future readers) can explain *why* decisions were made.

### Key Constraints

- Prefer value semantics and clear ownership.
- Avoid premature abstraction.
- Make the game loop and timing model explicit and measurable early.
- Keep the renderer and ECS loosely coupled so either can evolve independently.

## High-Level Data Flow (Target)

```
Application
    │
    ├── Platform Layer (Window, Input, Time)
    │
    ├── Game Loop
    │     ├── Fixed Timestep Update (Physics / Simulation)
    │     └── Variable Timestep Render
    │
    ├── Scene / ECS
    │     ├── Entities
    │     ├── Components (Transform, Sprite, etc.)
    │     └── Systems (Movement, Render, etc.)
    │
    └── Renderer
          └── 2D Batch Renderer → GPU
```

## Immediate Next Steps

1. Implement a simple, robust Logger + Assert system.
2. Create Application class that owns the main loop.
3. Abstract Window + Input behind a thin platform interface.
4. Introduce a basic Entity + Component container (array of structs style first, then evolve toward denser storage if needed).

## Decision Log

| Date       | Decision                          | Rationale                                      |
|------------|-----------------------------------|------------------------------------------------|
| 2026-10-26 | Start with C++17, target C++20    | Wide compiler support while allowing modern features |
| 2026-10-26 | Separate `engine/` and `sandbox/` | Clear boundary between reusable engine and demos |
| 2026-10-26 | Document architecture early       | Forces clarity of thought and helps future self |

---

*This document will grow as real code is written.*
