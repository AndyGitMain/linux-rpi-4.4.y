cmd_lib/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o lib/built-in.o lib/lockref.o lib/bcd.o lib/div64.o lib/sort.o lib/parser.o lib/halfmd4.o lib/debug_locks.o lib/random32.o lib/bust_spinlocks.o lib/kasprintf.o lib/bitmap.o lib/scatterlist.o lib/gcd.o lib/lcm.o lib/list_sort.o lib/uuid.o lib/flex_array.o lib/iov_iter.o lib/clz_ctz.o lib/bsearch.o lib/find_bit.o lib/llist.o lib/memweight.o lib/kfifo.o lib/percpu-refcount.o lib/percpu_ida.o lib/rhashtable.o lib/reciprocal_div.o lib/once.o lib/string_helpers.o lib/hexdump.o lib/kstrtox.o lib/pci_iomap.o lib/iomap_copy.o lib/devres.o lib/hweight.o lib/assoc_array.o lib/bitrev.o lib/rational.o lib/crc16.o lib/crc-itu-t.o lib/crc32.o lib/libcrc32c.o lib/genalloc.o lib/zlib_inflate/built-in.o lib/lzo/built-in.o lib/lz4/built-in.o lib/xz/built-in.o lib/textsearch.o lib/percpu_counter.o lib/swiotlb.o lib/iommu-helper.o lib/iommu-common.o lib/syscall.o lib/nlattr.o lib/cpu_rmap.o lib/dynamic_queue_limits.o lib/strncpy_from_user.o lib/strnlen_user.o lib/net_utils.o lib/fonts/built-in.o lib/oid_registry.o 
