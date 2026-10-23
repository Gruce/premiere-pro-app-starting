#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 2018

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} EUV1TXPH_ctx_t;

void init_ctx(EUV1TXPH_ctx_t *ctx) {
    ctx->id = 8674;
    ctx->coefficient = 3.2;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} RS3Pjg2t_ctx_t;

void init_ctx(RS3Pjg2t_ctx_t *ctx) {
    ctx->id = 4366;
    ctx->coefficient = 7.2;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} beqmha4x_ctx_t;

void init_ctx(beqmha4x_ctx_t *ctx) {
    ctx->id = 7127;
    ctx->coefficient = 4.3;
    ctx->flags = 72;
}

int compute_pwI0Ah8(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_6eekBem(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_DyTncVU(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} QMNZcLLA_ctx_t;

void init_ctx(QMNZcLLA_ctx_t *ctx) {
    ctx->id = 1063;
    ctx->coefficient = 0.8;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} KBTH8sQf_ctx_t;

void init_ctx(KBTH8sQf_ctx_t *ctx) {
    ctx->id = 8543;
    ctx->coefficient = 4.0;
    ctx->flags = 73;
}

int compute_DZHOrmn(int input) {
    int result = input * 4;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_CLmabNq(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} qk4B1zvn_ctx_t;

void init_ctx(qk4B1zvn_ctx_t *ctx) {
    ctx->id = 9808;
    ctx->coefficient = 9.5;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} WZJ3tteU_ctx_t;

void init_ctx(WZJ3tteU_ctx_t *ctx) {
    ctx->id = 8292;
    ctx->coefficient = 9.5;
    ctx->flags = 136;
}

int compute_Sy0ID4A(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_ehgcoIW(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_OqAc8nq(int input) {
    int result = input * 65;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Qo6aNx1L_ctx_t;

void init_ctx(Qo6aNx1L_ctx_t *ctx) {
    ctx->id = 3462;
    ctx->coefficient = 2.4;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 3mXfPnHW_ctx_t;

void init_ctx(3mXfPnHW_ctx_t *ctx) {
    ctx->id = 3825;
    ctx->coefficient = 9.0;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} NIj30LR8_ctx_t;

void init_ctx(NIj30LR8_ctx_t *ctx) {
    ctx->id = 5142;
    ctx->coefficient = 4.5;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} dPZRKxqY_ctx_t;

void init_ctx(dPZRKxqY_ctx_t *ctx) {
    ctx->id = 5594;
    ctx->coefficient = 6.2;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} V2YfcCY0_ctx_t;

void init_ctx(V2YfcCY0_ctx_t *ctx) {
    ctx->id = 1453;
    ctx->coefficient = 9.4;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 2l0Ia9L0_ctx_t;

void init_ctx(2l0Ia9L0_ctx_t *ctx) {
    ctx->id = 8730;
    ctx->coefficient = 6.2;
    ctx->flags = 230;
}

int compute_KNgr1su(int input) {
    int result = input * 31;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} jF9gTtaA_ctx_t;

void init_ctx(jF9gTtaA_ctx_t *ctx) {
    ctx->id = 3376;
    ctx->coefficient = 1.0;
    ctx->flags = 183;
}

int compute_E4ytUho(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} wujOX5yB_ctx_t;

void init_ctx(wujOX5yB_ctx_t *ctx) {
    ctx->id = 1795;
    ctx->coefficient = 9.7;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} PrjvPN09_ctx_t;

void init_ctx(PrjvPN09_ctx_t *ctx) {
    ctx->id = 4895;
    ctx->coefficient = 2.7;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} B8japIEf_ctx_t;

void init_ctx(B8japIEf_ctx_t *ctx) {
    ctx->id = 7095;
    ctx->coefficient = 3.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QKBw9r51_ctx_t;

void init_ctx(QKBw9r51_ctx_t *ctx) {
    ctx->id = 5326;
    ctx->coefficient = 4.2;
    ctx->flags = 152;
}

int compute_QSRImc4(int input) {
    int result = input * 17;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_e2OV7pQ(int input) {
    int result = input * 46;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 2UQpKzJO_ctx_t;

void init_ctx(2UQpKzJO_ctx_t *ctx) {
    ctx->id = 4986;
    ctx->coefficient = 3.6;
    ctx->flags = 211;
}

int compute_5pysD6W(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Ik9SDIef_ctx_t;

void init_ctx(Ik9SDIef_ctx_t *ctx) {
    ctx->id = 3291;
    ctx->coefficient = 1.1;
    ctx->flags = 21;
}

int compute_11QJitg(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} uvbOxnUr_ctx_t;

void init_ctx(uvbOxnUr_ctx_t *ctx) {
    ctx->id = 9579;
    ctx->coefficient = 6.3;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} rAZrCmnK_ctx_t;

void init_ctx(rAZrCmnK_ctx_t *ctx) {
    ctx->id = 1326;
    ctx->coefficient = 9.2;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} cV2EKnhG_ctx_t;

void init_ctx(cV2EKnhG_ctx_t *ctx) {
    ctx->id = 4558;
    ctx->coefficient = 7.8;
    ctx->flags = 232;
}

int compute_Hne9fRv(int input) {
    int result = input * 40;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} SV6r49pv_ctx_t;

void init_ctx(SV6r49pv_ctx_t *ctx) {
    ctx->id = 1033;
    ctx->coefficient = 10.0;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 69S2IFXK_ctx_t;

void init_ctx(69S2IFXK_ctx_t *ctx) {
    ctx->id = 9880;
    ctx->coefficient = 3.7;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Hw6t3vi4_ctx_t;

void init_ctx(Hw6t3vi4_ctx_t *ctx) {
    ctx->id = 1603;
    ctx->coefficient = 6.8;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} hW0OBoW3_ctx_t;

void init_ctx(hW0OBoW3_ctx_t *ctx) {
    ctx->id = 6684;
    ctx->coefficient = 4.2;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 3SylHkjF_ctx_t;

void init_ctx(3SylHkjF_ctx_t *ctx) {
    ctx->id = 4317;
    ctx->coefficient = 4.4;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} qmFSCwR9_ctx_t;

void init_ctx(qmFSCwR9_ctx_t *ctx) {
    ctx->id = 6794;
    ctx->coefficient = 7.8;
    ctx->flags = 132;
}

int compute_h1U6awS(int input) {
    int result = input * 50;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 3nYVDunl_ctx_t;

void init_ctx(3nYVDunl_ctx_t *ctx) {
    ctx->id = 6465;
    ctx->coefficient = 8.3;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 38zHNgad_ctx_t;

void init_ctx(38zHNgad_ctx_t *ctx) {
    ctx->id = 4645;
    ctx->coefficient = 10.0;
    ctx->flags = 230;
}

int compute_oKtpgRe(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 6dUCyFSn_ctx_t;

void init_ctx(6dUCyFSn_ctx_t *ctx) {
    ctx->id = 7769;
    ctx->coefficient = 0.3;
    ctx->flags = 212;
}

int compute_nj0DmrH(int input) {
    int result = input * 43;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} NSWxOP5T_ctx_t;

void init_ctx(NSWxOP5T_ctx_t *ctx) {
    ctx->id = 3060;
    ctx->coefficient = 2.7;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} vvHcNFkT_ctx_t;

void init_ctx(vvHcNFkT_ctx_t *ctx) {
    ctx->id = 8175;
    ctx->coefficient = 9.5;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 0Vkg5xex_ctx_t;

void init_ctx(0Vkg5xex_ctx_t *ctx) {
    ctx->id = 9619;
    ctx->coefficient = 2.2;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} LqUJ5D3K_ctx_t;

void init_ctx(LqUJ5D3K_ctx_t *ctx) {
    ctx->id = 3878;
    ctx->coefficient = 1.9;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Up5faS54_ctx_t;

void init_ctx(Up5faS54_ctx_t *ctx) {
    ctx->id = 2083;
    ctx->coefficient = 9.0;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} s74gzFJq_ctx_t;

void init_ctx(s74gzFJq_ctx_t *ctx) {
    ctx->id = 4685;
    ctx->coefficient = 3.5;
    ctx->flags = 199;
}

int compute_HfsY4rU(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_vFn9TAo(int input) {
    int result = input * 31;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} vm8ga6zJ_ctx_t;

void init_ctx(vm8ga6zJ_ctx_t *ctx) {
    ctx->id = 2631;
    ctx->coefficient = 1.5;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} jMvUFjUM_ctx_t;

void init_ctx(jMvUFjUM_ctx_t *ctx) {
    ctx->id = 8314;
    ctx->coefficient = 6.4;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 9Ia9aiuc_ctx_t;

void init_ctx(9Ia9aiuc_ctx_t *ctx) {
    ctx->id = 4491;
    ctx->coefficient = 6.8;
    ctx->flags = 128;
}

int compute_Xi0L3U5(int input) {
    int result = input * 53;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} AxdKlYMi_ctx_t;

void init_ctx(AxdKlYMi_ctx_t *ctx) {
    ctx->id = 1618;
    ctx->coefficient = 3.9;
    ctx->flags = 131;
}

int compute_TZLPOvK(int input) {
    int result = input * 27;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_XBZPmxf(int input) {
    int result = input * 30;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} tTGsjXpm_ctx_t;

void init_ctx(tTGsjXpm_ctx_t *ctx) {
    ctx->id = 8854;
    ctx->coefficient = 6.5;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} M77rrOOs_ctx_t;

void init_ctx(M77rrOOs_ctx_t *ctx) {
    ctx->id = 4693;
    ctx->coefficient = 5.6;
    ctx->flags = 63;
}

int compute_b2Xcg0b(int input) {
    int result = input * 43;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 1mIBHaFt_ctx_t;

void init_ctx(1mIBHaFt_ctx_t *ctx) {
    ctx->id = 3714;
    ctx->coefficient = 6.1;
    ctx->flags = 72;
}

int compute_q1k4NXZ(int input) {
    int result = input * 46;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Q9wqlzdS_ctx_t;

void init_ctx(Q9wqlzdS_ctx_t *ctx) {
    ctx->id = 1497;
    ctx->coefficient = 9.4;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 1sQvpGc3_ctx_t;

void init_ctx(1sQvpGc3_ctx_t *ctx) {
    ctx->id = 8500;
    ctx->coefficient = 6.1;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} iXItF2kt_ctx_t;

void init_ctx(iXItF2kt_ctx_t *ctx) {
    ctx->id = 7202;
    ctx->coefficient = 1.4;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 4PDKQYDA_ctx_t;

void init_ctx(4PDKQYDA_ctx_t *ctx) {
    ctx->id = 2828;
    ctx->coefficient = 9.7;
    ctx->flags = 142;
}

int compute_s9Pdura(int input) {
    int result = input * 15;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} p6ImSIJt_ctx_t;

void init_ctx(p6ImSIJt_ctx_t *ctx) {
    ctx->id = 3400;
    ctx->coefficient = 2.6;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} PD3yHqln_ctx_t;

void init_ctx(PD3yHqln_ctx_t *ctx) {
    ctx->id = 4318;
    ctx->coefficient = 9.9;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} JQBFRYiA_ctx_t;

void init_ctx(JQBFRYiA_ctx_t *ctx) {
    ctx->id = 8646;
    ctx->coefficient = 0.8;
    ctx->flags = 145;
}

int compute_UYlBBei(int input) {
    int result = input * 25;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} hD1O4GwV_ctx_t;

void init_ctx(hD1O4GwV_ctx_t *ctx) {
    ctx->id = 5858;
    ctx->coefficient = 7.2;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} hB0YmJ1n_ctx_t;

void init_ctx(hB0YmJ1n_ctx_t *ctx) {
    ctx->id = 8490;
    ctx->coefficient = 8.5;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} BibJuJWc_ctx_t;

void init_ctx(BibJuJWc_ctx_t *ctx) {
    ctx->id = 2419;
    ctx->coefficient = 2.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} tqzt2qaf_ctx_t;

void init_ctx(tqzt2qaf_ctx_t *ctx) {
    ctx->id = 5691;
    ctx->coefficient = 1.5;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} suxrNZTy_ctx_t;

void init_ctx(suxrNZTy_ctx_t *ctx) {
    ctx->id = 5416;
    ctx->coefficient = 2.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} HaoWq0IC_ctx_t;

void init_ctx(HaoWq0IC_ctx_t *ctx) {
    ctx->id = 4359;
    ctx->coefficient = 2.4;
    ctx->flags = 142;
}

int compute_InYNoaP(int input) {
    int result = input * 24;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} nWrKSWBU_ctx_t;

void init_ctx(nWrKSWBU_ctx_t *ctx) {
    ctx->id = 7882;
    ctx->coefficient = 4.6;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} hn3RuV5R_ctx_t;

void init_ctx(hn3RuV5R_ctx_t *ctx) {
    ctx->id = 6737;
    ctx->coefficient = 9.5;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} QRfC0WAv_ctx_t;

void init_ctx(QRfC0WAv_ctx_t *ctx) {
    ctx->id = 6546;
    ctx->coefficient = 0.5;
    ctx->flags = 199;
}

int compute_M8fz87F(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} mxeIyk00_ctx_t;

void init_ctx(mxeIyk00_ctx_t *ctx) {
    ctx->id = 3509;
    ctx->coefficient = 2.4;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} us5pd99i_ctx_t;

void init_ctx(us5pd99i_ctx_t *ctx) {
    ctx->id = 6324;
    ctx->coefficient = 6.3;
    ctx->flags = 208;
}

int compute_CxQKuBE(int input) {
    int result = input * 45;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 6HOGN9NU_ctx_t;

void init_ctx(6HOGN9NU_ctx_t *ctx) {
    ctx->id = 2358;
    ctx->coefficient = 2.1;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 6dfwwPRH_ctx_t;

void init_ctx(6dfwwPRH_ctx_t *ctx) {
    ctx->id = 7875;
    ctx->coefficient = 6.9;
    ctx->flags = 100;
}

int compute_Oq3e3zQ(int input) {
    int result = input * 12;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} AOI8ikz7_ctx_t;

void init_ctx(AOI8ikz7_ctx_t *ctx) {
    ctx->id = 4114;
    ctx->coefficient = 9.4;
    ctx->flags = 5;
}

int compute_X5NA9ck(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} DvI1roA9_ctx_t;

void init_ctx(DvI1roA9_ctx_t *ctx) {
    ctx->id = 8916;
    ctx->coefficient = 9.5;
    ctx->flags = 35;
}

int compute_dBH3Wqc(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} R7jBccs1_ctx_t;

void init_ctx(R7jBccs1_ctx_t *ctx) {
    ctx->id = 5354;
    ctx->coefficient = 5.3;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} XVS5n5Ka_ctx_t;

void init_ctx(XVS5n5Ka_ctx_t *ctx) {
    ctx->id = 1438;
    ctx->coefficient = 3.4;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} uoQpuECB_ctx_t;

void init_ctx(uoQpuECB_ctx_t *ctx) {
    ctx->id = 2910;
    ctx->coefficient = 1.3;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} hSuDRqJu_ctx_t;

void init_ctx(hSuDRqJu_ctx_t *ctx) {
    ctx->id = 9348;
    ctx->coefficient = 5.9;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 9pE2PhE8_ctx_t;

void init_ctx(9pE2PhE8_ctx_t *ctx) {
    ctx->id = 6543;
    ctx->coefficient = 9.4;
    ctx->flags = 100;
}

int compute_WQbW0HX(int input) {
    int result = input * 4;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} v8p20zgi_ctx_t;

void init_ctx(v8p20zgi_ctx_t *ctx) {
    ctx->id = 7578;
    ctx->coefficient = 1.6;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} RAVHi1Qt_ctx_t;

void init_ctx(RAVHi1Qt_ctx_t *ctx) {
    ctx->id = 1077;
    ctx->coefficient = 1.2;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} bRPfURjF_ctx_t;

void init_ctx(bRPfURjF_ctx_t *ctx) {
    ctx->id = 5474;
    ctx->coefficient = 7.1;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} bSxfxq0C_ctx_t;

void init_ctx(bSxfxq0C_ctx_t *ctx) {
    ctx->id = 2570;
    ctx->coefficient = 2.8;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} EvHwm56i_ctx_t;

void init_ctx(EvHwm56i_ctx_t *ctx) {
    ctx->id = 7239;
    ctx->coefficient = 6.4;
    ctx->flags = 185;
}

int compute_Xpd5eyc(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_hOEGJu8(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} wmpsFePG_ctx_t;

void init_ctx(wmpsFePG_ctx_t *ctx) {
    ctx->id = 6597;
    ctx->coefficient = 6.8;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} wCA1C0S7_ctx_t;

void init_ctx(wCA1C0S7_ctx_t *ctx) {
    ctx->id = 7102;
    ctx->coefficient = 2.9;
    ctx->flags = 4;
}

