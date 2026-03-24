# ICPC — Competitive Programming

Reference material and implementations for ICPC-style programming contests.

---

## Description

This repository contains a structured collection of resources for competitive programming,
including problem solutions, reusable code templates, theoretical notes, and algorithm
implementations. All source code is written in **C++17**.

---

## Repository Structure

| Directory | Contents |
|-----------|----------|
| `solutions/` | Problem solutions from online judges (Codeforces, UVa, SPOJ, etc.) |
| `templates/` | Contest-ready code templates |
| `algorithms/` | Standalone algorithm implementations |
| `notes/` | Theoretical summaries and reference sheets |

---

## Topics Covered

### Graph Theory
- Traversal: BFS, DFS
- Shortest paths: Dijkstra, Bellman-Ford, Floyd-Warshall
- Minimum spanning tree: Kruskal, Prim
- Strongly connected components: Tarjan, Kosaraju
- Network flow: Ford-Fulkerson, Dinic

### Dynamic Programming
- Classical DP: knapsack, LCS, LIS
- Tree DP
- Bitmask DP
- Interval DP

### Mathematics and Number Theory
- Sieve of Eratosthenes
- Fast exponentiation
- Modular inverse
- Combinatorics and binomial coefficients
- Euclidean algorithm (GCD / LCM)

### Data Structures
- Segment Tree and Fenwick Tree (BIT)
- Disjoint Set Union (DSU)
- Sparse Table
- Trie
- Priority Queue

### Computational Geometry
- Cross and dot product
- Polygon area
- Convex Hull
- Segment intersection

### Search and Sorting
- Binary and ternary search
- Merge Sort, Quick Sort
- Two pointers and sliding window

---

## Compilation

```bash
git clone https://github.com/YeisenK/ICPC.git
cd ICPC
```

```bash
g++ -O2 -std=c++17 -o solution file.cpp
./solution
```

The flags `-O2 -std=c++17` are recommended for compatibility with standard online judges.

---

## Requirements

- Compiler: `g++` with C++17 support or later
- Platform: Linux, macOS, or Windows (MinGW)

---

## Author

**YeisenK** — [github.com/YeisenK](https://github.com/YeisenK)