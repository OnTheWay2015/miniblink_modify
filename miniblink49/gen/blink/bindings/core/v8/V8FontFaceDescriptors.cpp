// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FontFaceDescriptors.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8FontFaceDescriptors::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FontFaceDescriptors& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> featureSettingsValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "featureSettings")).ToLocal(&featureSettingsValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (featureSettingsValue.IsEmpty() || featureSettingsValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> featureSettings = featureSettingsValue;
            if (!featureSettings.prepare(exceptionState))
                return;
            impl.setFeatureSettings(featureSettings);
        }
    }

    {
        v8::Local<v8::Value> stretchValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "stretch")).ToLocal(&stretchValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (stretchValue.IsEmpty() || stretchValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> stretch = stretchValue;
            if (!stretch.prepare(exceptionState))
                return;
            impl.setStretch(stretch);
        }
    }

    {
        v8::Local<v8::Value> styleValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "style")).ToLocal(&styleValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (styleValue.IsEmpty() || styleValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> style = styleValue;
            if (!style.prepare(exceptionState))
                return;
            impl.setStyle(style);
        }
    }

    {
        v8::Local<v8::Value> unicodeRangeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "unicodeRange")).ToLocal(&unicodeRangeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (unicodeRangeValue.IsEmpty() || unicodeRangeValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> unicodeRange = unicodeRangeValue;
            if (!unicodeRange.prepare(exceptionState))
                return;
            impl.setUnicodeRange(unicodeRange);
        }
    }

    {
        v8::Local<v8::Value> variantValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "variant")).ToLocal(&variantValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (variantValue.IsEmpty() || variantValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> variant = variantValue;
            if (!variant.prepare(exceptionState))
                return;
            impl.setVariant(variant);
        }
    }

    {
        v8::Local<v8::Value> weightValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "weight")).ToLocal(&weightValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (weightValue.IsEmpty() || weightValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> weight = weightValue;
            if (!weight.prepare(exceptionState))
                return;
            impl.setWeight(weight);
        }
    }

}

v8::Local<v8::Value> toV8(const FontFaceDescriptors& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8FontFaceDescriptors(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8FontFaceDescriptors(const FontFaceDescriptors& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasFeatureSettings()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "featureSettings"), v8String(isolate, impl.featureSettings()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "featureSettings"), v8String(isolate, String("normal")))))
            return false;
    }

    if (impl.hasStretch()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "stretch"), v8String(isolate, impl.stretch()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "stretch"), v8String(isolate, String("normal")))))
            return false;
    }

    if (impl.hasStyle()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "style"), v8String(isolate, impl.style()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "style"), v8String(isolate, String("normal")))))
            return false;
    }

    if (impl.hasUnicodeRange()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "unicodeRange"), v8String(isolate, impl.unicodeRange()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "unicodeRange"), v8String(isolate, String("U+0-10FFFF")))))
            return false;
    }

    if (impl.hasVariant()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "variant"), v8String(isolate, impl.variant()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "variant"), v8String(isolate, String("normal")))))
            return false;
    }

    if (impl.hasWeight()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "weight"), v8String(isolate, impl.weight()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "weight"), v8String(isolate, String("normal")))))
            return false;
    }

    return true;
}

FontFaceDescriptors NativeValueTraits<FontFaceDescriptors>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    FontFaceDescriptors impl;
    V8FontFaceDescriptors::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink