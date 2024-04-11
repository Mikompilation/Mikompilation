#ifndef MIKOMPILATION_G3DDEBUG_H
#define MIKOMPILATION_G3DDEBUG_H

#define SetLineInfo(MESSAGE) _SetLineInfo(__FILE__, __LINE__, __FUNCTION__, MESSAGE)

#define g3dbg(cond) g3ddbgPrintf("[G3DRETURN]%s(%d)(%s):%s\n", __FILE__, __LINE__, __FUNCTION__, #cond);

#define g3dbgMessage(...)                                                                                              \
    _SetLineInfo(__FILE__, __LINE__, __FUNCTION__, "");                                                                \
    g3ddbgAssert(false, __VA_ARGS__);

#define g3dbSetLineWarning(MESSAGE)                                                                                    \
    _SetLineInfo(__FILE__, __LINE__, __FUNCTION__, MESSAGE);                                                           \
    g3ddbgWarning(false, "");

#define g3ddbg_ASSERT(cond, ...)                                                                                       \
    if (!(cond)) {                                                                                                     \
        _SetLineInfo(__FILE__, __LINE__, __FUNCTION__, #cond);                                                         \
        g3ddbgAssert(cond, __VA_ARGS__);                                                                               \
    }

#define g3ddbg_ASSERT_WARNING(cond, ...)                                                                               \
    if (!(cond)) {                                                                                                     \
        _SetLineInfo(__FILE__, __LINE__, __FUNCTION__, #cond);                                                         \
        g3ddbgWarning(cond, __VA_ARGS__);                                                                              \
    }

#define g3ddbg_WARNING_RETURN(cond, ...)                                                                               \
    if (!(cond)) {                                                                                                     \
        SetLineInfo(#cond);                                                                                            \
        g3ddbgWarning(cond, __VA_ARGS__);                                                                              \
        if (!(cond)) {                                                                                                 \
            g3dbg(!cond)                                                                                               \
            return;                                                                                                    \
        }                                                                                                              \
}

#define ASSERT_RETURN(cond, ...)                                                                                       \
    if (cond) {                                                                                                        \
        return;                                                                                                        \
    }

void _SetLineInfo(const char *pFileName, int iLine, const char *pFunctionName, const char *pExpression);
void g3ddbgAssert(bool b, const char *pStr, ...);
void g3ddbgPrintf(const char *pStr, ...);
void g3ddbgWarning(bool b, const char *pStr, ...);


#endif //MIKOMPILATION_G3DDEBUG_H
