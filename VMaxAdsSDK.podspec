Pod::Spec.new do |spec|

  spec.name         = "VMaxAdsSDK"
  spec.version      = "0.0.68"
  spec.summary      = "VMaxAdsSdk framework enables to integrate ads"
  spec.description  = "VMaxAdsSdk framework provides all display ads,native ads,video and audio ads"
  spec.homepage     = "https://github.com/CloyMonisVMax/VMaxAdsSDK"
  spec.license      = "MIT"
  spec.author       = { "Cloy Monis" => "cloy.m@vserv.com" }
  spec.platform = :ios, "10.0"
  #spec.source       = { :http => "https://github.com/CloyMonisVMax/VMaxAdsSDK/archive/0.0.68.zip"}
  spec.source       = { :git => "https://github.com/CloyMonisVMax/VMaxAdsSDK.git" , :tag => "0.0.68"}
  spec.ios.deployment_target = "10.0"
  #spec.ios.vendored_frameworks = "VMaxAdsSDK-0.0.68/VMaxAdsSDK/VMaxAdsSDK.framework"
  #spec.ios.vendored_frameworks = "VMaxAdsSDK/VMaxAdsSDK.framework"
  #spec.source_files = "VMaxAdsSDK/*"
  spec.ios.vendored_frameworks = "VMaxAdsSDK.framework"
  spec.pod_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
