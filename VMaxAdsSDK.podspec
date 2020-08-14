Pod::Spec.new do |spec|

  spec.name         = "VMaxAdsSDK"
  spec.version      = "0.0.6"
  spec.summary      = "VMaxAdsSdk framework enables to integrate ads"
  spec.description  = "VMaxAdsSdk framework provides all display ads,native ads,video and audio ads"
  spec.homepage     = "https://github.com/CloyMonisVMax/VMaxAdsSDK"
  spec.license      = "MIT"
  spec.author       = { "Cloy Monis" => "cloy.m@vserv.com" }
  spec.platform = :ios, "12.0"
  #spec.source       = { :http => "https://github.com/CloyMonisVMax/VMaxAdsSDK/archive/0.0.6.zip"}
  spec.source       = { :git => "https://github.com/CloyMonisVMax/VMaxAdsSDK.git" , :tag => "0.0.6"}
  spec.ios.deployment_target = "12.0"
  #spec.ios.vendored_frameworks = "VMaxAdsSDK-0.0.6/VMaxAdsSDK/VMaxAdsSDK.framework"
  #spec.ios.vendored_frameworks = "VMaxAdsSDK/VMaxAdsSDK.framework"
  #spec.source_files = "VMaxAdsSDK/*"
  spec.ios.vendored_frameworks = "VMaxAdsSDK.framework"
  
end
