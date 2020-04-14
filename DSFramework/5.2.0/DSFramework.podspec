Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '10.0'
s.name = "DSFramework"
s.summary = "DSFramework is the core of DriveSmart"
#s.requires_arc = true

# 2
s.version = "5.2.0"

# 3
s.license = { :type => "GNU", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "DriveSmart" => "mobileteam@drive-smart.com" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://github.com/DriveSmart-MobileTeam/SDK-iOS.git"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/DriveSmart-MobileTeam/SDK-iOS.git", :branch => "#{s.version}", :tag => "#{s.version}" }

# 7
#s.framework = "UIKit"

# 8
#s.source_files = "DSFramework/**/DSFramework.framework/*"
#s.source_files = "DSFramework.framework"

# 9
#s.resources = ""

# 10
s.swift_version = "5.0"

s.exclude_files = "DSFramework/**/*.plist"
s.ios.vendored_frameworks = 'DSFramework.framework'

end
