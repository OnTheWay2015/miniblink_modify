// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8WheelEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8MouseEventInit.h"

namespace blink {

void V8WheelEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WheelEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8MouseEventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> deltaModeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaMode")).ToLocal(&deltaModeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (deltaModeValue.IsEmpty() || deltaModeValue->IsUndefined()) {
            // Do nothing.
        } else {
            unsigned deltaMode = toUInt32(isolate, deltaModeValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDeltaMode(deltaMode);
        }
    }

    {
        v8::Local<v8::Value> deltaXValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaX")).ToLocal(&deltaXValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (deltaXValue.IsEmpty() || deltaXValue->IsUndefined()) {
            // Do nothing.
        } else {
            double deltaX = toRestrictedDouble(isolate, deltaXValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDeltaX(deltaX);
        }
    }

    {
        v8::Local<v8::Value> deltaYValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaY")).ToLocal(&deltaYValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (deltaYValue.IsEmpty() || deltaYValue->IsUndefined()) {
            // Do nothing.
        } else {
            double deltaY = toRestrictedDouble(isolate, deltaYValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDeltaY(deltaY);
        }
    }

    {
        v8::Local<v8::Value> deltaZValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "deltaZ")).ToLocal(&deltaZValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (deltaZValue.IsEmpty() || deltaZValue->IsUndefined()) {
            // Do nothing.
        } else {
            double deltaZ = toRestrictedDouble(isolate, deltaZValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDeltaZ(deltaZ);
        }
    }

    {
        v8::Local<v8::Value> wheelDeltaXValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaX")).ToLocal(&wheelDeltaXValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (wheelDeltaXValue.IsEmpty() || wheelDeltaXValue->IsUndefined()) {
            // Do nothing.
        } else {
            int wheelDeltaX = toInt32(isolate, wheelDeltaXValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setWheelDeltaX(wheelDeltaX);
        }
    }

    {
        v8::Local<v8::Value> wheelDeltaYValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaY")).ToLocal(&wheelDeltaYValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (wheelDeltaYValue.IsEmpty() || wheelDeltaYValue->IsUndefined()) {
            // Do nothing.
        } else {
            int wheelDeltaY = toInt32(isolate, wheelDeltaYValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setWheelDeltaY(wheelDeltaY);
        }
    }

}

v8::Local<v8::Value> toV8(const WheelEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MouseEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8WheelEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8WheelEventInit(const WheelEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasDeltaMode()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaMode"), v8::Integer::NewFromUnsigned(isolate, impl.deltaMode()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaMode"), v8::Integer::NewFromUnsigned(isolate, 0u))))
            return false;
    }

    if (impl.hasDeltaX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaX"), v8::Number::New(isolate, impl.deltaX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaX"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasDeltaY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaY"), v8::Number::New(isolate, impl.deltaY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaY"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasDeltaZ()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaZ"), v8::Number::New(isolate, impl.deltaZ()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "deltaZ"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasWheelDeltaX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaX"), v8::Integer::New(isolate, impl.wheelDeltaX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaX"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasWheelDeltaY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaY"), v8::Integer::New(isolate, impl.wheelDeltaY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "wheelDeltaY"), v8::Integer::New(isolate, 0))))
            return false;
    }

    return true;
}

WheelEventInit NativeValueTraits<WheelEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    WheelEventInit impl;
    V8WheelEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink