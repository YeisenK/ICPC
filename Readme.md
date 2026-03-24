<div align="center">

# ICPC — Competitive Programming

**Structured training environment for ICPC-style programming contests**

![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=flat-square&logo=cplusplus)
![Standard](https://img.shields.io/badge/Standard-ISO%20C%2B%2B17-blue?style=flat-square)
![Focus](https://img.shields.io/badge/Focus-ICPC%20Preparation-orange?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

</div>

---

## Overview

This repository serves as a training system for ICPC-level competitive programming.

All source code is written in C++17, optimized for performance within time and memory constraints typical of ICPC problems.

**Contents:**

- Solved problems from live contests and curated practice sets
- Reusable, contest-ready implementation templates
- Algorithm implementations with clear structure
- Reference material: books, notes, and ICPC notebooks

---

## Repository Structure

```
ICPC/
├── Problems 2025/       # Main training set — solved problems that got us to the 2025 Mexico Finals
├── Problems 2026/       # Current year training problems
├── Problemsets/         # Official and Unofficial contest problem sets
├── Books/               # Reference books for theory and deep dives
├── Guides - material/   # Notes, cheat sheets, and team notebooks
└── Info/                # Contest rules and official documentation
```

---

## Topics Covered

<details>
<summary><strong>Graph Theory</strong></summary>

- BFS / DFS (traversal, connectivity)
- Dijkstra, Bellman-Ford, Floyd-Warshall (shortest paths)
- Minimum Spanning Tree — Kruskal, Prim
- Strongly Connected Components — Tarjan, Kosaraju
- Network Flow — Ford-Fulkerson, Dinic's algorithm

</details>

<details>
<summary><strong>Dynamic Programming</strong></summary>

- Classical DP — Knapsack, LIS, LCS
- Bitmask DP
- Tree DP
- Interval DP

</details>

<details>
<summary><strong>Mathematics & Number Theory</strong></summary>

- Sieve of Eratosthenes
- Binary exponentiation (fast power)
- Modular arithmetic and modular inverse
- Combinatorics — nCr, factorials, Pascal's triangle
- GCD / LCM via Euclidean algorithm

</details>

<details>
<summary><strong>Data Structures</strong></summary>

- Segment Tree (point / range updates)
- Fenwick Tree (BIT)
- Disjoint Set Union (DSU / Union-Find)
- Sparse Table (RMQ)
- Trie
- Priority Queue

</details>

<details>
<summary><strong>Computational Geometry</strong></summary>

- Cross product / dot product
- Convex hull (Graham scan, Jarvis march)
- Polygon area (Shoelace formula)
- Line and segment intersection

</details>

<details>
<summary><strong>General Techniques</strong></summary>

- Binary search / ternary search
- Two pointers
- Sliding window
- Greedy strategies

</details>

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

> *"Practice is not the thing you do once you're good. It's the thing that makes you good."*

Code in this repository follows three principles:

1. **Speed** — solutions are optimized to pass strict time limits
2. **Clarity under pressure** — readable enough to debug in a 5-hour contest window
3. **Reusability** — templates and implementations are designed to plug in with minimal modification

---

## Author

<div align="center">

**YeisenK**

[![GitHub](https://img.shields.io/badge/GitHub-YeisenK-181717?style=flat-square&logo=github)](https://github.com/YeisenK)

</div>