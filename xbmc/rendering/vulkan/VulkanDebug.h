/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "vulkan/vulkan.hpp"

namespace KODI
{
namespace RENDERING
{
namespace VULKAN
{

class CVulkanDebug
{
public:
  CVulkanDebug(vk::UniqueInstance& instance);
  ~CVulkanDebug() = default;

private:
  vk::detail::DispatchLoaderDynamic m_loader;
  vk::UniqueHandle<vk::DebugUtilsMessengerEXT, decltype(m_loader)> m_debug;
};

} // namespace VULKAN
} // namespace RENDERING
} // namespace KODI
