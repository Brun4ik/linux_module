cmd_/home/dmitry/lab1/Module.symvers := sed 's/ko$$/o/' /home/dmitry/lab1/modules.order | scripts/mod/modpost     -o /home/dmitry/lab1/Module.symvers -e -i Module.symvers   -T -
