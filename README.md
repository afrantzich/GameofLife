# GameofLife
A quick and straight-forward recreation of Conway's Game of Life

The graphics library minilibx was given. It can create windows simply, contains functions for placing pixels and images,
and allows for event hooks.

Conway's Game of Life has a few simple rules:
  - living cells will die if there are fewer than 2 next to it (underpopulation) or if there are 4 or more (overpopulation)
  - dead cells will come to life if there are exactly 3 surrounding it.
  - the map eventually finds a "balance"
  
Currently, the only key hook is for the spacebar, restarting and reseeding the map, though it causes a segfault.
But for now, make, execute, and enjoy.
