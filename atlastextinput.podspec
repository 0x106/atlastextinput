Pod::Spec.new do |s|

  s.name         = "atlastextinput"
  s.version      = "0.0.1"
  s.summary      = "Atlas Text Input"
  s.description  = <<-DESC
  Create private text fields for Atlas Reality.
                   DESC

  s.homepage     = "https://github.com/Jordan-Campbell"
  s.license      = { :type => "MIT", :file => "license" }
  s.author             = { "Jordan Campbell" => "jordan@jordancampbell.org" }
  s.ios.deployment_target = '11.0'
  s.ios.vendored_frameworks = 'atlastextinput.framework'
  s.source            = { :http => 'https://github.com/Jordan-Campbell/test/blob/master/frameworktest.zip?raw=true' }
  s.exclude_files = "Classes/Exclude"

end
