<div align="center">

# ICPC — Competitive Programming

**Structured training environment for ICPC-style programming contests**

</div>

---

## Overview

This repository serves as a training system for ICPC-level competitive programming.

All source code is written in C++17, optimized for performance within time and memory constraints typical of ICPC problems.

You can find more info on: https://blocsa.com/icpc/icpc.html

**Contents:**

- Solved problems from live contests and curated practice sets
- Reusable, contest-ready implementation templates
- Algorithm implementations with clear structure
- Reference material: books, notes, and ICPC notebooks

---

## Repository Structure

```
ICPC/
├── Problems 2025/                  # Main training set — solved problems that got us to the 2025 Mexico Finals
├── Problems 2026/                  # Current year training problems
├── Problemsets/                    # Official and Unofficial contest problem sets
├── Books/                          # Reference books for theory and deep dives
├── Guides - material/              # Notes, cheat sheets, and team notebooks
├── Ready-to-use implementations/   # Code that is tailored especifically to use in this kinds of problems
└── Info/                           # Contest rules and official documentation
```

---

## Topics Covered

**Graph Theory**

- BFS / DFS (traversal, connectivity)
- Dijkstra, Bellman-Ford, Floyd-Warshall (shortest paths)
- Minimum Spanning Tree — Kruskal, Prim
- Strongly Connected Components — Tarjan, Kosaraju
- Network Flow — Ford-Fulkerson, Dinic's algorithm


**Dynamic Programming**

- Classical DP — Knapsack, LIS, LCS
- Bitmask DP
- Tree DP
- Interval DP


**Mathematics & Number Theory**

- Sieve of Eratosthenes
- Binary exponentiation (fast power)
- Modular arithmetic and modular inverse
- Combinatorics — nCr, factorials, Pascal's triangle
- GCD / LCM via Euclidean algorithm


**Data Structures**

- Segment Tree (point / range updates)
- Fenwick Tree (BIT)
- Disjoint Set Union (DSU / Union-Find)
- Sparse Table (RMQ)
- Trie
- Priority Queue


**Computational Geometry**

- Cross product / dot product
- Convex hull (Graham scan, Jarvis march)
- Polygon area (Shoelace formula)
- Line and segment intersection


**General Techniques**

- Binary search / ternary search
- Two pointers
- Sliding window
- Greedy strategies


---

## Getting Started

**Clone the repository:**

```bash
git clone https://github.com/YeisenK/ICPC.git
cd ICPC
```

**Compile and run a solution:**

```bash
g++ -O2 -std=c++17 -o solution file.cpp
./solution
```

**Recommended compilation flags:**

| Flag | Purpose |
|------|---------|
| `-O2` | Optimization level 2 (contest standard) |
| `-std=c++17` | ISO C++17 standard |
| `-Wall` | Enable all warnings (useful during practice) |
| `-DLOCAL` | Toggle local debug macros |

---

## Requirements

| Requirement | Detail |
|-------------|--------|
| Compiler | `g++` — GCC 9+ or Clang with C++17 support |
| Platform | Linux · macOS · Windows (WSL or MinGW) |
| IDE (optional) | VS Code with C/C++ extension |

---

## Design Philosophy

Code in this repository follows three principles:

1. Speed — solutions are optimized to pass strict time limits
2. Clarity under pressure — readable enough to debug in a 5-hour contest window
3. Reusability — templates and implementations are designed to plug in with minimal modification
4. Brute force - Not recommended in all cases but certainly useful when the problem allows it
---
## License

MIT License

Copyright (c) 2026 YeisenK

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Author

<div align="center">

**YeisenK**

[![GitHub](https://img.shields.io/badge/GitHub-YeisenK-181717?style=flat-square&logo=github)](https://github.com/YeisenK)

</div>
