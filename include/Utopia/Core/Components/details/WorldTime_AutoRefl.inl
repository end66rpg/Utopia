// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::WorldTime> :
    TypeInfoBase<Ubpa::Utopia::WorldTime>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[24] = "Ubpa::Utopia::WorldTime";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("elapsedTime"), &Type::elapsedTime},
        Field {TSTR("deltaTime"), &Type::deltaTime},
    };
};

