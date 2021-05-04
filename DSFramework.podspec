Pod::Spec.new do |s|

    s.platform = :ios
    s.ios.deployment_target = '12.0'
    s.name = "DSFramework"
    s.summary = "DriveSmart SDK"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
    Copyright DRIVE SMART © 2021
    LICENSE
    }
    s.author = { "DriveSmart" => "info@drive-smart.com" }
    s.homepage = "https://github.com/DriveSmart-MobileTeam/SDK-iOS.git"

    s.version = "5.4.0"

    s.source = { 
        :git => "#{s.homepage}",
        :tag => "#{s.version}" 
    }

    s.frameworks = [
        'AVFoundation',
        'CoreLocation',
        'CoreData'
    ]

    s.swift_version = "5.0"

    s.exclude_files = "DSFramework/**/*.plist"
    s.vendored_frameworks = 'DSFramework.xcframework'

end
