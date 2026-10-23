# PC98-linux-devenv

A simple dev env to cross compile C programs to PC98 using dosbox-x and djgpp on linux

## Requirements:
- dosbox-x
- [DJGPP 2.03](https://www.target-earth.net/wiki/doku.php?id=blog:pc98_devtools#djgpp_203_end_step)
  - Simply download DJGPP from the website (or build it yourself with the instructions on the website)
  - Extract the zip archive
  The file tree should look like this:
  ```
  ./
   | -> djgpp_203_pc98
        | -> djgpp
             | -> bin
             ...
   | -> game
        | -> src
        ...
  ```


## Usage
### Build:
To build your game, run: `make`

### Run:
To run your game, run: `make dos-run`


## Todo:
- [  ] Add a dockerfile or nix config to automate getting DJGPP
