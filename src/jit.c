/*
** This file has been pre-processed with DynASM.
** https://luajit.org/dynasm.html
** DynASM version 1.5.0, DynASM arm version 1.5.0
** DO NOT EDIT! The original file is in "jit.dasc".
*/

//|.arch arm64
#if DASM_VERSION != 10500
#error "Version mismatch between DynASM and included encoding engine"
#endif
//|.actionlist ej_compile_actionlist
static const unsigned int ej_compile_actionlist[359] = {
0xd503201f,
0x00000000,
0xfd400be0,
0x1e614000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602820,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e603820,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e600820,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e601820,
0xfd000be0,
0x00000000,
0xd10043ff,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xf9400020,
0x9e670000,
0xfd000be0,
0x00000000,
0xd10043ff,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x9e670000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xd65f03c0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0xd10043ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x00000000,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x910043ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xfd401be2,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x910083ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xfd401be2,
0xfd4023e3,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x9100c3ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xfd401be2,
0xfd4023e3,
0xfd402be4,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x910103ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xfd401be2,
0xfd4023e3,
0xfd402be4,
0xfd4033e5,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x910143ff,
0xfd000be0,
0x00000000,
0xd2800000,
0x000a0205,
0xf2a00000,
0x000a0205,
0xf2c00000,
0x000a0205,
0xf2e00000,
0x000a0205,
0x00000000,
0xfd400be0,
0xfd4013e1,
0xfd401be2,
0xfd4023e3,
0xfd402be4,
0xfd4033e5,
0xfd403be6,
0xa9be7bfd,
0x910003fd,
0xd2800001,
0x000a0205,
0xf2a00001,
0x000a0205,
0xf2c00001,
0x000a0205,
0xf2e00001,
0x000a0205,
0xd63f0020,
0xa8c27bfd,
0x910183ff,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9f57e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9f87e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9fd7e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9fb7e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9f17e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0xfd400be1,
0x1e602030,
0x1a9f07e0,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0x52800000,
0x1e602008,
0x54000000,
0x00050814,
0xfd400be0,
0x1e602008,
0x1a9f07e0,
0x00060014,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x910043ff,
0x52800020,
0x1e602008,
0x54000001,
0x00050815,
0xfd400be0,
0x1e602008,
0x1a9f07e0,
0x00060015,
0x1e630000,
0xfd000be0,
0x00000000,
0xfd400be0,
0x1e602018,
0x1a9f17e0,
0x1e630000,
0xfd000be0,
0x00000000
};

//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
//|.globals GLOB_
enum {
  GLOB_endand,
  GLOB_endor,
  GLOB__MAX
};

static void emit(Dst_DECL, uint64_t* op) {
  //| .macro movq, Xn, imm
  //|   movz    Xn, #(imm)&0xffff
  //|   movk    Xn, #(imm>>16)&0xffff, lsl #16
  //|   movk    Xn, #(imm>>32)&0xffff, lsl #32
  //|   movk    Xn, #(imm>>48)&0xffff, lsl #48
  //| .endmacro
  //| .macro logic, op
  //|   ldr     d0, [sp, #16]
  //|   add     sp, sp, #16
  //|   ldr     d1, [sp, #16]
  //|   fcmpe   d1, d0
  //|   cset    w0, op
  //|   ucvtf   d0, w0
  //|   str     d0, [sp, #16]
  //| .endmacro
  int arg = 1;
  while (1) {
    switch (*op) {
      case OP_pos:
        //| nop
        dasm_put(Dst, 0);
        break;
      case OP_neg:
        //| ldr     d0, [sp, #16]
        //| fneg    d0, d0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 2);
        break;
      case OP_add:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| ldr     d1, [sp, #16]
        //| fadd    d0, d1, d0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 6);
        break;
      case OP_sub:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| ldr     d1, [sp, #16]
        //| fsub    d0, d1, d0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 12);
        break;
      case OP_mul:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| ldr     d1, [sp, #16]
        //| fmul    d0, d1, d0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 18);
        break;
      case OP_div:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| ldr     d1, [sp, #16]
        //| fdiv    d0, d1, d0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 24);
        break;
      case OP_var:
        op++;
        //| sub     sp, sp, #16
        //| movq    x1, *op
        //| ldr     x0, [x1]
        //| fmov    d0, x0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 30, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_con:
        op++;
        //| sub     sp, sp, #16
        //| movq    x0, *op
        //| fmov    d0, x0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 43, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_ret:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| ret
        dasm_put(Dst, 55);
        return;
      case OP_clo0:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 59, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun0:
        op++;
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| sub     sp, sp, #16
        //| str     d0, [sp, #16]
        dasm_put(Dst, 68, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo1:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 83, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun1:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        dasm_put(Dst, 92, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        //| add      sp, sp, #(16 * 0)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 106);
        break;
      case OP_clo2:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 108, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun2:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 1)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 117, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo3:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 134, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun3:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| ldr     d2, [sp, #(16 * 3)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 2)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 143, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo4:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 161, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun4:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| ldr     d2, [sp, #(16 * 3)]
        //| ldr     d3, [sp, #(16 * 4)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 3)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 170, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo5:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 189, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun5:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| ldr     d2, [sp, #(16 * 3)]
        //| ldr     d3, [sp, #(16 * 4)]
        //| ldr     d4, [sp, #(16 * 5)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 4)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 198, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo6:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 218, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun6:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| ldr     d2, [sp, #(16 * 3)]
        //| ldr     d3, [sp, #(16 * 4)]
        //| ldr     d4, [sp, #(16 * 5)]
        //| ldr     d5, [sp, #(16 * 6)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 5)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 227, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;
      case OP_clo7:
        op++;
        //| movq    x0, *op
        dasm_put(Dst, 248, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
      case OP_fun7:
        op++;
        //| ldr     d0, [sp, #(16 * 1)]
        //| ldr     d1, [sp, #(16 * 2)]
        //| ldr     d2, [sp, #(16 * 3)]
        //| ldr     d3, [sp, #(16 * 4)]
        //| ldr     d4, [sp, #(16 * 5)]
        //| ldr     d5, [sp, #(16 * 6)]
        //| ldr     d6, [sp, #(16 * 7)]
        //| stp     x29, x30, [sp, #-32]!
        //| mov     x29, sp
        //| movq    x1, *op
        //| blr     x1
        //| ldp     x29, x30, [sp], #32
        //| add     sp, sp, #(16 * 6)
        //| str     d0, [sp, #16]
        dasm_put(Dst, 257, (*op)&0xffff, (*op>>16)&0xffff, (*op>>32)&0xffff, (*op>>48)&0xffff);
        break;

      case OP_lt:
        //| logic   mi
        dasm_put(Dst, 279);
        break;
      case OP_le:
        //| logic   ls
        dasm_put(Dst, 287);
        break;
      case OP_gt:
        //| logic   gt
        dasm_put(Dst, 295);
        break;
      case OP_ge:
        //| logic   ge
        dasm_put(Dst, 303);
        break;
      case OP_eq:
        //| logic   eq
        dasm_put(Dst, 311);
        break;
      case OP_neq:
        //| logic   ne
        dasm_put(Dst, 319);
        break;
      case OP_and:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| mov     w0, #0
        //| fcmp    d0, #0.0
        //| beq     ->endand
        //| ldr     d0, [sp, #16]
        //| fcmp    d0, #0.0
        //| cset    w0, ne
        //|->endand:
        //| ucvtf   d0, w0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 327);
        break;
      case OP_or:
        //| ldr     d0, [sp, #16]
        //| add     sp, sp, #16
        //| mov     w0, #1
        //| fcmp    d0, #0.0
        //| bne     ->endor
        //| ldr     d0, [sp, #16]
        //| fcmp    d0, #0.0
        //| cset    w0, ne
        //|->endor:
        //| ucvtf   d0, w0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 340);
        break;
      case OP_not:
        //| ldr     d0, [sp, #16]
        //| fcmpe   d0, #0.0
        //| cset    w0, eq
        //| ucvtf   d0, w0
        //| str     d0, [sp, #16]
        dasm_put(Dst, 353);
        break;

      default:
        assert(0);
        __builtin_unreachable();
    }
    
    ++op;
  }
}
