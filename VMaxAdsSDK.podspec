Pod::Spec.new do |spec|

  spec.name         = "VMaxAdsSDK"
  spec.version      = "0.0.116"
  spec.summary      = "VMaxAdsSdk framework enables to integrate ads"
  spec.description  = "VMaxAdsSdk framework provides all display ads,native ads,video and audio ads"
  spec.homepage     = "https://github.com/CloyMonisVMax/VMaxAdsSDK"
  spec.license      = "MIT"
  spec.author       = { "Cloy Monis" => "cloy.m@vserv.com" }
  spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/CloyMonisVMax/VMaxAdsSDK.git" , :tag => "0.0.116"}
  spec.ios.deployment_target = "10.0"
  spec.vendored_frameworks = "VMaxAdsSDK.xcframework"
  
end
