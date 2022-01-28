xcodebuild -create-xcframework \
    -framework archives/ios_devices.xcarchive/Products/Library/Frameworks/VMaxAdsSDK.framework \
   -framework archives/ios_simulators.xcarchive/Products/Library/Frameworks/VMaxAdsSDK.framework \
  -output VMaxAdsSDK.xcframework
