cmd_/home/dmitry/lab1/modules.order := {   echo /home/dmitry/lab1/h.ko; :; } | awk '!x[$$0]++' - > /home/dmitry/lab1/modules.order
