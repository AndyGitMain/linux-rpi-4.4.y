cmd_net/netfilter/nf_nat_redirect.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/nf_nat_redirect.ko net/netfilter/nf_nat_redirect.o net/netfilter/nf_nat_redirect.mod.o