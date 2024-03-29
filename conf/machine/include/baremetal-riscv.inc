require conf/machine/include/qemu.inc
require conf/machine/include/riscv/tune-riscv.inc

PREFERRED_VERSION_openocd-native = "riscv"
PREFERRED_VERSION_openocd = "riscv"

# qemuboot options
QB_MACHINE = "-machine virt"
QB_DEFAULT_KERNEL = "fw_payload.elf"
QB_NETWORK_DEVICE = "-device virtio-net-device,netdev=net0,mac=@MAC@"
QB_ROOTFS_OPT = "-drive file=@ROOTFS@,format=raw,id=hd0 -device virtio-blk-device,drive=hd0"
QB_SLIRP_OPT = "-netdev user,id=net0,hostfwd=tcp::22222-:22"

TCLIBC = "baremetal"
