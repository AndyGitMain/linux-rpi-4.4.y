cmd_net/sched/act_nat.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sched/act_nat.ko net/sched/act_nat.o net/sched/act_nat.mod.o
