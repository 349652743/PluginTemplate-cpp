// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockEventListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockEventListener : public BlockEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKEVENTLISTENER
public:
    class ScriptBlockEventListener& operator=(class ScriptBlockEventListener const&) = delete;
    ScriptBlockEventListener(class ScriptBlockEventListener const&) = delete;
    ScriptBlockEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockEventListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual enum EventResult onBlockExploded(class BlockPos const&, class Block const&, class Actor*);
    /*7*/ virtual void __unk_vfn_5();
    /*8*/ virtual void __unk_vfn_6();
    /*9*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_8();
    /*11*/ virtual void __unk_vfn_9();
    /*12*/ virtual enum EventResult onPistonActionEvent(struct PistonActionEvent const&);
    /*13*/ virtual void __unk_vfn_10();
    /*14*/ virtual void __unk_vfn_11();
    /*15*/ virtual void __unk_vfn_12();
    /*16*/ virtual enum EventResult onExplosionStartedEvent(struct ExplosionStartedEvent const&);

protected:

private:

};