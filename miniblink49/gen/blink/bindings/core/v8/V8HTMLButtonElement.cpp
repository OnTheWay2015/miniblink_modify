// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLButtonElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLFormElement.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ValidityState.h"
#include "core/HTMLNames.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/html/LabelsNodeList.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLButtonElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLButtonElement::domTemplate, V8HTMLButtonElement::refObject, V8HTMLButtonElement::derefObject, V8HTMLButtonElement::trace, 0, 0, V8HTMLButtonElement::preparePrototypeObject, V8HTMLButtonElement::installConditionallyEnabledProperties, "HTMLButtonElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLButtonElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLButtonElement::s_wrapperTypeInfo = V8HTMLButtonElement::wrapperTypeInfo;

namespace HTMLButtonElementV8Internal {

static void autofocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::autofocusAttr));
}

static void autofocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::autofocusAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void autofocusAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "autofocus", "HTMLButtonElement", holder, info.GetIsolate());
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::autofocusAttr, cppValue);
}

static void autofocusAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::autofocusAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::disabledAttr));
}

static void disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::disabledAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void disabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "disabled", "HTMLButtonElement", holder, info.GetIsolate());
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::disabledAttr, cppValue);
}

static void disabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::disabledAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->formOwner()), impl);
}

static void formAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formActionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueString(info, impl->getURLAttribute(HTMLNames::formactionAttr), info.GetIsolate());
}

static void formActionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formActionAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formActionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::formactionAttr, cppValue);
}

static void formActionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::formActionAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formEnctypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueString(info, impl->formEnctype(), info.GetIsolate());
}

static void formEnctypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formEnctypeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formEnctypeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setFormEnctype(cppValue);
}

static void formEnctypeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLButtonElementV8Internal::formEnctypeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formMethodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueString(info, impl->formMethod(), info.GetIsolate());
}

static void formMethodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formMethodAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formMethodAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setFormMethod(cppValue);
}

static void formMethodAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLButtonElementV8Internal::formMethodAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formNoValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::formnovalidateAttr));
}

static void formNoValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formNoValidateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formNoValidateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "formNoValidate", "HTMLButtonElement", holder, info.GetIsolate());
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::formnovalidateAttr, cppValue);
}

static void formNoValidateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::formNoValidateAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formTargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::formtargetAttr), info.GetIsolate());
}

static void formTargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::formTargetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formTargetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::formtargetAttr, cppValue);
}

static void formTargetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::formTargetAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->getNameAttribute(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::nameAttr, cppValue);
}

static void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::nameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setType(cppValue);
}

static void typeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLButtonElementV8Internal::typeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::valueAttr), info.GetIsolate());
}

static void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::valueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::valueAttr, cppValue);
}

static void valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLButtonElementV8Internal::valueAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void willValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->willValidate());
}

static void willValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::willValidateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->validity()), impl);
}

static void validityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::validityAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void validationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::validationMessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void labelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->labels()), impl);
}

static void labelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLButtonElementV8Internal::labelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void checkValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->checkValidity());
}

static void checkValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLButtonElementV8Internal::checkValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void reportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->reportValidity());
}

static void reportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLButtonElementV8Internal::reportValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setCustomValidity", "HTMLButtonElement", 1, info.Length()), info.GetIsolate());
        return;
    }
    HTMLButtonElement* impl = V8HTMLButtonElement::toImpl(info.Holder());
    V8StringResource<> error;
    {
        error = info[0];
        if (!error.prepare())
            return;
    }
    impl->setCustomValidity(error);
}

static void setCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLButtonElementV8Internal::setCustomValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLButtonElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HTMLButtonElementAccessors[] = {
    {"autofocus", HTMLButtonElementV8Internal::autofocusAttributeGetterCallback, HTMLButtonElementV8Internal::autofocusAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"disabled", HTMLButtonElementV8Internal::disabledAttributeGetterCallback, HTMLButtonElementV8Internal::disabledAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"form", HTMLButtonElementV8Internal::formAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formAction", HTMLButtonElementV8Internal::formActionAttributeGetterCallback, HTMLButtonElementV8Internal::formActionAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formEnctype", HTMLButtonElementV8Internal::formEnctypeAttributeGetterCallback, HTMLButtonElementV8Internal::formEnctypeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formMethod", HTMLButtonElementV8Internal::formMethodAttributeGetterCallback, HTMLButtonElementV8Internal::formMethodAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formNoValidate", HTMLButtonElementV8Internal::formNoValidateAttributeGetterCallback, HTMLButtonElementV8Internal::formNoValidateAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formTarget", HTMLButtonElementV8Internal::formTargetAttributeGetterCallback, HTMLButtonElementV8Internal::formTargetAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"name", HTMLButtonElementV8Internal::nameAttributeGetterCallback, HTMLButtonElementV8Internal::nameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", HTMLButtonElementV8Internal::typeAttributeGetterCallback, HTMLButtonElementV8Internal::typeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"value", HTMLButtonElementV8Internal::valueAttributeGetterCallback, HTMLButtonElementV8Internal::valueAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"willValidate", HTMLButtonElementV8Internal::willValidateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validity", HTMLButtonElementV8Internal::validityAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validationMessage", HTMLButtonElementV8Internal::validationMessageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"labels", HTMLButtonElementV8Internal::labelsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLButtonElementMethods[] = {
    {"checkValidity", HTMLButtonElementV8Internal::checkValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"reportValidity", HTMLButtonElementV8Internal::reportValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"setCustomValidity", HTMLButtonElementV8Internal::setCustomValidityMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLButtonElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLButtonElement", V8HTMLElement::domTemplate(isolate), V8HTMLButtonElement::internalFieldCount,
        0, 0,
        V8HTMLButtonElementAccessors, WTF_ARRAY_LENGTH(V8HTMLButtonElementAccessors),
        V8HTMLButtonElementMethods, WTF_ARRAY_LENGTH(V8HTMLButtonElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8HTMLButtonElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLButtonElementTemplate);
}

bool V8HTMLButtonElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLButtonElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLButtonElement* V8HTMLButtonElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLButtonElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLButtonElement>()->ref();
#endif
}

void V8HTMLButtonElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLButtonElement>()->deref();
#endif
}

} // namespace blink