# test_data_port_periodic_domains

vagrant@debian-10:~/CASE/camkes-project/$ ln -s ~/CASE/CASE_loonwerks/TA5/tool-evaluation-4/HAMR/examples/test_data_port_periodic_domains/CAmkES_seL4_Only/ projects/camkes/apps/tdppd_lw

vagrant@debian-10:~/CASE/camkes-project/$ mkdir tdppd_lw_build_sim

vagrant@debian-10:~/CASE/camkes-project/$ cd tdppd_lw_build_sim

vagrant@debian-10:~/CASE/camkes-project/tdppd_lw_build_sim$ ../init-build.sh -DPLATFORM=pc99 -DSIMULATION=1 -DCAMKES_APP=tdppd_lw
vagrant@debian-10:~/CASE/camkes-project/tdppd_lw_build_sim$ ninja

vagrant@debian-10:~/CASE/camkes-project/tdppd_lw_build_sim$ ./simulate
./simulate: qemu-system-x86_64  -cpu Nehalem,-vme,+pdpe1gb,-xsave,-xsaveopt,-xsavec,-fsgsbase,-invpcid,enforce -nographic -serial mon:stdio -m size=512M  -kernel images/kernel-x86_64-pc99 -initrd images/capdl-loader-image-x86_64-pc99 cSeaBIOS (version 1.12.0-1)


iPXE (http://ipxe.org) 00:03.0 C980 PCI2.10 PnP PMM+1FF8FFA0+1FECFFA0 C980
                                                                               


Booting from ROM..Boot config: debug_port = 0x3f8
Boot config: disable_iommu = false
Detected 1 boot module(s):
  module #0: start=0xa1b000 end=0xc3b310 size=0x220310 name='images/capdl-loader-image-x86_64-pc99'
Parsing GRUB physical memory map
	Physical Memory Region from 0 size 9fc00 type 1
	Physical Memory Region from 9fc00 size 400 type 2
	Physical Memory Region from f0000 size 10000 type 2
	Physical Memory Region from 100000 size 1fee0000 type 1
Adding physical memory region 0x100000-0x1ffe0000
	Physical Memory Region from 1ffe0000 size 20000 type 2
	Physical Memory Region from fffc0000 size 40000 type 2
Multiboot gave us no video information
ACPI: RSDP paddr=0xf58d0
ACPI: RSDP vaddr=0xf58d0
ACPI: RSDT paddr=0x1ffe156f
ACPI: RSDT vaddr=0x1ffe156f
Kernel loaded to: start=0x100000 end=0xa1a000 size=0x91a000 entry=0x10125e
ACPI: RSDT paddr=0x1ffe156f
ACPI: RSDT vaddr=0x1ffe156f
ACPI: FADT paddr=0x1ffe144b
ACPI: FADT vaddr=0x1ffe144b
ACPI: FADT flags=0x80a5
ACPI: MADT paddr=0x1ffe14bf
ACPI: MADT vaddr=0x1ffe14bf
ACPI: MADT apic_addr=0xfee00000
ACPI: MADT flags=0x1
ACPI: MADT_APIC apic_id=0x0
ACPI: MADT_IOAPIC ioapic_id=0 ioapic_addr=0xfec00000 gsib=0
ACPI: MADT_ISO bus=0 source=0 gsi=2 flags=0x0
ACPI: MADT_ISO bus=0 source=5 gsi=5 flags=0xd
ACPI: MADT_ISO bus=0 source=9 gsi=9 flags=0xd
ACPI: MADT_ISO bus=0 source=10 gsi=10 flags=0xd
ACPI: MADT_ISO bus=0 source=11 gsi=11 flags=0xd
ACPI: 1 CPU(s) detected
ELF-loading userland images from boot modules:
size=0x28a000 v_entry=0x40834f v_start=0x400000 v_end=0x68a000 p_start=0xc3c000 p_end=0xec6000
Moving loaded userland images to final location: from=0xc3c000 to=0xa1a000 size=0x28a000
Starting node #0 with APIC ID 0
Mapping kernel window is done
Booting all finished, dropped to user space
pacer: Period tick 1
pacer: Period tick 2
[source_thread_component] test_data_port_periodic_source_component_init called
[destination_thread_component] test_data_port_periodic_domains_destination_component_init called
[pacer: Period tick 3
---------------------------------------
[source_thread_component] Sent 0
----destination_thread_component] value {0}
[destination_thread_component] value {1}
pacer: Period tick 4
-----------------------------------
[source_thread_component] Sent 1
---------------------------------------
[source_thread_component] Sent 2
[destination_thread_component] value {2}
pacer: Period tick 5
---------------------------------------
[source_thread_component] Sent 3
[destination_thread_component] value {3}
pacer: Period tick 6
---------------------------------------
[source_thread_component] Sent 4
[destination_thread_component] value {4}
pacer: Period tick 7
---------------------------------------
[source_thread_component] Sent 5
[destination_thread_component] value {5}
pacer: Period tick 8
---------------------------------------
[source_thread_component] Sent 6
[destination_thread_component] value {6}
pacer: Period tick 9
---------------------------------------
[source_thread_component] Sent 7
[destination_thread_component] value {7}
pacer: Period tick 10
---------------------------------------
[source_thread_component] Sent 8
[destination_thread_component] value {8}
pacer: Period tick 11
---------------------------------------
