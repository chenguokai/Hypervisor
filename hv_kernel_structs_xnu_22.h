#pragma once
#include <Hypervisor/Hypervisor.h>

// Headers extracted from
// Kernel_Debug_Kit_13.3_build_22E252.dmg/kernel.release.t8103

// type lookup hv_vcpu_t
// type lookup arm_guest_context_t

typedef struct {
    uint64_t control_hcr;
    uint64_t control_hacr;
    uint64_t control_cptr;
    uint64_t control_mdcr;
    uint64_t control_ich_hcr;
    uint64_t control_timer;
    uint64_t control_apsts;
    uint64_t control_hfgrtr;
    uint64_t control_hfgwtr;
    uint64_t control_hfgitr;
    uint64_t control_hdfgrtr;
    uint64_t control_hdfgwtr;
    uint64_t control_cnthctl;
    uint64_t ctr_el0;
    uint64_t dczid_el0;
    uint64_t clidr_el1;
    uint64_t ccsidr_el1_inst[8];
    uint64_t ccsidr_el1_data_or_unified[8];
    uint64_t id_aa64dfr0_el1;
    uint64_t id_aa64dfr1_el1;
    uint64_t id_aa64isar0_el1;
    uint64_t id_aa64isar1_el1;
    uint64_t id_aa64mmfr0_el1;
    uint64_t id_aa64mmfr1_el1;
    uint64_t id_aa64mmfr2_el1;
    uint64_t id_aa64pfr0_el1;
    uint64_t id_aa64pfr1_el1;
    uint8_t gic_npie_active_pending_bug;
    uint64_t ipa_bits_4k;
    uint64_t ipa_bits_16k;
} hv_capabilities_22_t;

#define HV_XNU_22_MAGIC (0x206879700000000e)
#define HV_VERSION_XNU_22 (22)
