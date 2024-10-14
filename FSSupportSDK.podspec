
Pod::Spec.new do |s|

  s.name         		 = "FSSupportSDK"
  s.version      		 = "1.0.0-beta01"
  s.summary      		 = "Freshservice Support SDK"
  s.homepage     		 = "https://www.freshworks.com/freshservice"
  s.license 	 		 = { :type => 'Commercial', :file => 'LICENSE', :text => 'See https://www.freshworks.com/terms' }
  s.author       		 = "Freshservice"
  s.platform     		 = :ios, "15.0"
  s.source       		 = { :git => "https://github.com/freshworks/freshservice-support-sdk-ios.git", :tag => s.version }
  s.requires_arc 		 = true
  s.preserve_paths      = "FSSupportSDK.xcframework" 
  s.vendored_frameworks = "FSSupportSDK.xcframework"
  
end