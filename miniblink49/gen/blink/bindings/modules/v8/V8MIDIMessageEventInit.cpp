// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MIDIMessageEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/core/v8/V8Uint8Array.h"

namespace blink {

void V8MIDIMessageEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MIDIMessageEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> dataValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "data")).ToLocal(&dataValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
            // Do nothing.
        } else {
            DOMUint8Array* data = dataValue->IsUint8Array() ? V8Uint8Array::toImpl(v8::Local<v8::Uint8Array>::Cast(dataValue)) : 0;
            if (!data && !dataValue->IsNull()) {
                exceptionState.throwTypeError("member data is not of type Uint8Array.");
                return;
            }
            impl.setData(data);
        }
    }

    {
        v8::Local<v8::Value> receivedTimeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "receivedTime")).ToLocal(&receivedTimeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (receivedTimeValue.IsEmpty() || receivedTimeValue->IsUndefined()) {
            // Do nothing.
        } else {
            double receivedTime = toRestrictedDouble(isolate, receivedTimeValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setReceivedTime(receivedTime);
        }
    }

}

v8::Local<v8::Value> toV8(const MIDIMessageEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8MIDIMessageEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MIDIMessageEventInit(const MIDIMessageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), toV8(impl.data(), creationContext, isolate))))
            return false;
    }

    if (impl.hasReceivedTime()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "receivedTime"), v8::Number::New(isolate, impl.receivedTime()))))
            return false;
    }

    return true;
}

MIDIMessageEventInit NativeValueTraits<MIDIMessageEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MIDIMessageEventInit impl;
    V8MIDIMessageEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
