// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ApplicationCacheErrorEventInit_h
#define ApplicationCacheErrorEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT ApplicationCacheErrorEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ApplicationCacheErrorEventInit();

    bool hasMessage() const { return !m_message.isNull(); }
    String message() const { return m_message; }
    void setMessage(String value) { m_message = value; }

    bool hasReason() const { return !m_reason.isNull(); }
    String reason() const { return m_reason; }
    void setReason(String value) { m_reason = value; }

    bool hasStatus() const { return !m_status.isNull(); }
    unsigned status() const { return m_status.get(); }
    void setStatus(unsigned value) { m_status = value; }

    bool hasURL() const { return !m_url.isNull(); }
    String url() const { return m_url; }
    void setURL(String value) { m_url = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_message;
    String m_reason;
    Nullable<unsigned> m_status;
    String m_url;

    friend class V8ApplicationCacheErrorEventInit;
};

} // namespace blink

#endif // ApplicationCacheErrorEventInit_h
