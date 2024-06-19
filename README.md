# my_sokoban

{EPITECH} The goal of this project is to develop a copy of Sokoban game in terminal mode, using the ncurses library.

![image](https://github.com/EpitechPromo2028/B-PSU-100-LIL-1-1-sokoban-julien.mars/assets/146703553/18398ebc-52fc-48fa-b866-df700ea66c90)


### USAGES

Compilation

```
$>  make
```
Execution

```
$>  ./my_sokoban maps/map1
```

Help

```
$>  ./my_sokoban -h
```

### GAMEPLAY

* Use arrows to move ```P```.
* Put the ```X``` (boxes) on the ```O``` (storage locations).
* If all the boxes are on the storage locations, you win.
* If none of the boxes can be moved anymore, you lose.

## MAP FORMAT

* You can find exemples in ```maps``` directory.
* The map is made of ```#``` for the walls.
* ```P``` is the player.
* ```X``` are boxes.
* ```O``` are storage locations.
