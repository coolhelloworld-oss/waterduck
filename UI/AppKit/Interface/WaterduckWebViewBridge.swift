// Copyright (c) 2026, Waterduck Developers
// SPDX-License-Identifier: BSD-2-Clause

import Foundation

@objc
public class WaterduckWebViewBridgeSwift: NSObject {
    @objc public var devicePixelRatio: Double
    @objc public var maximumFramesPerSecond: Double
    @objc public var zoomLevel: Double = 1.0

    @objc public init(devicePixelRatio: Double, maximumFramesPerSecond: UInt64) {
        self.devicePixelRatio = devicePixelRatio
        self.maximumFramesPerSecond = Double(maximumFramesPerSecond)
        super.init()
    }

    @objc public func setDevicePixelRatio(_ ratio: Double) {
        self.devicePixelRatio = ratio
    }

    @objc public func inverseDevicePixelRatio() -> Double {
        return 1.0 / devicePixelRatio
    }

    @objc public func computeBoundedZoomLevel(_ zoom: Double) -> Double {
        // Enforce bounds to prevent extreme scaling
        return max(0.25, min(zoom, 5.0))
    }
}
