 
Pod::Spec.new do |s|
 

  s.name         = "DYLogger"
  s.version      = "1.0.0"
  s.summary      = "sample ios logger header"
 
  s.homepage     = "https://github.com/junhaiyang/DYLogger"
 
  s.license      = "MIT"
 
  s.author             = { "yangjunhai" => "junhaiyang@gmail.com" } 
  
  s.ios.deployment_target = "6.0" 
 
  s.source = { :git => 'https://github.com/junhaiyang/DYLogger.git', :tag => '1.0.0' } 
 
  s.requires_arc = true
   
  s.source_files = '*.{h,m,mm}'  
  
  s.public_header_files = '*.h'
      
end
