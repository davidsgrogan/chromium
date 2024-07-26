// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/layout/geometry/logical_size.h"

#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "ui/gfx/geometry/size_f.h"

namespace blink {

WTF::String LogicalSize::ToString() const {
  return String::Format("inline x block: %sx%s",
                        inline_size.ToString().Ascii().c_str(),
                        block_size.ToString().Ascii().c_str());
}

std::ostream& operator<<(std::ostream& stream, const LogicalSize& value) {
  return stream << value.inline_size << "x" << value.block_size;
}

}  // namespace blink
