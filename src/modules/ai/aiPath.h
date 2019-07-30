#pragma once
#include <modules\ai.h>

namespace MM2
{
    // Forward declarations
    class aiPath;

    // External declarations


    // Class definitions

    class aiPath {
    private:
        byte _buffer[0x164];
    public:
        aiPath(void)                                        DONOTCALL;
        aiPath(const aiPath &&)                             DONOTCALL;
    };

    ASSERT_SIZEOF(aiPath, 0x164);

    // Lua initialization

}