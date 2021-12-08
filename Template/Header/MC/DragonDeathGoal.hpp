// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DragonDeathGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONDEATHGOAL
public:
    class DragonDeathGoal& operator=(class DragonDeathGoal const&) = delete;
    DragonDeathGoal(class DragonDeathGoal const&) = delete;
    DragonDeathGoal() = delete;
#endif

public:
    /*0*/ virtual ~DragonDeathGoal();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline bool canUse(){
        bool (DragonDeathGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@DragonDeathGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (DragonDeathGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@DragonDeathGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI DragonDeathGoal(class EnderDragon&);

protected:

private:

};