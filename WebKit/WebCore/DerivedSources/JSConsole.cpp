/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSConsole.h"

#include "Console.h"
#include "JSMemoryInfo.h"
#include "MemoryInfo.h"
#include "ScriptCallStack.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSConsole);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSConsoleTableValues[2] =
{
    { "memory", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConsoleMemory), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSConsoleTable = { 2, 1, JSConsoleTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSConsolePrototypeTableValues[17] =
{
    { "debug", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDebug), (intptr_t)0 THUNK_GENERATOR(0) },
    { "error", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionError), (intptr_t)0 THUNK_GENERATOR(0) },
    { "info", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionInfo), (intptr_t)0 THUNK_GENERATOR(0) },
    { "log", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionLog), (intptr_t)0 THUNK_GENERATOR(0) },
    { "warn", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionWarn), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dir", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDir), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dirxml", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDirxml), (intptr_t)0 THUNK_GENERATOR(0) },
    { "trace", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTrace), (intptr_t)0 THUNK_GENERATOR(0) },
    { "assert", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionAssert), (intptr_t)1 THUNK_GENERATOR(0) },
    { "count", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionCount), (intptr_t)0 THUNK_GENERATOR(0) },
    { "markTimeline", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionMarkTimeline), (intptr_t)0 THUNK_GENERATOR(0) },
    { "time", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTime), (intptr_t)1 THUNK_GENERATOR(0) },
    { "timeEnd", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTimeEnd), (intptr_t)1 THUNK_GENERATOR(0) },
    { "group", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroup), (intptr_t)0 THUNK_GENERATOR(0) },
    { "groupCollapsed", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroupCollapsed), (intptr_t)0 THUNK_GENERATOR(0) },
    { "groupEnd", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroupEnd), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSConsolePrototypeTable = { 36, 31, JSConsolePrototypeTableValues, 0 };
const ClassInfo JSConsolePrototype::s_info = { "ConsolePrototype", 0, &JSConsolePrototypeTable, 0 };

JSObject* JSConsolePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSConsole>(exec, globalObject);
}

bool JSConsolePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSConsolePrototypeTable, this, propertyName, slot);
}

bool JSConsolePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSConsolePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSConsole::s_info = { "Console", 0, &JSConsoleTable, 0 };

JSConsole::JSConsole(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Console> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSConsole::~JSConsole()
{
    forgetDOMObject(this, impl());
}

JSObject* JSConsole::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSConsolePrototype(globalObject, JSConsolePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSConsole::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSConsole, Base>(exec, &JSConsoleTable, this, propertyName, slot);
}

bool JSConsole::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSConsole, Base>(exec, &JSConsoleTable, this, propertyName, descriptor);
}

JSValue jsConsoleMemory(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Console* imp = static_cast<Console*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->memory()));
    return result;
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDebug(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->debug(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionError(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->error(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionInfo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->info(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionLog(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->log(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionWarn(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->warn(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDir(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->dir(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDirxml(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->dirxml(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTrace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->trace(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionAssert(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 1);
    bool condition = exec->argument(0).toBoolean(exec);

    imp->assertCondition(condition, &callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionCount(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->count(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionMarkTimeline(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->markTimeline(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    const String& title = valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0));

    imp->time(title);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTimeEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 1);
    const String& title = valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0));

    imp->timeEnd(title, &callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroup(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->group(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupCollapsed(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());
    ScriptCallStack callStack(exec, 0);

    imp->groupCollapsed(&callStack);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSConsole::s_info))
        return throwVMTypeError(exec);
    JSConsole* castedThis = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThis->impl());

    imp->groupEnd();
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Console* object)
{
    return getDOMObjectWrapper<JSConsole>(exec, globalObject, object);
}
Console* toConsole(JSC::JSValue value)
{
    return value.inherits(&JSConsole::s_info) ? static_cast<JSConsole*>(asObject(value))->impl() : 0;
}

}