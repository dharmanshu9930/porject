# proc qsort {arr l p} {
# upvar $arr tab

# set x $tab($l)
# set i $l
# set j $p

# while {$j > $i} {

# while {$x > $tab($i)} {
# incr i
# }

# while {$x < $tab($j)} {
# incr j -1
# }

# if {$i <= $j} {
# set w $tab($i)
# set tab($i) $tab($j)
# set tab($j) $w
# incr i
# incr j -1
# }
# }

# if {$l < $j} {qsort tab $l $j}
# if {$i < $p} {qsort tab $i $p}

# }

array set nums { a 1 b 2 c 3 d 4 e 5 }
# qsort nums 0 5
puts [array get nums]