//
//  DYLogger.h
//
//
//
//


#ifndef __LOG_TYPE__

#define __LOG_TYPE__ 0 /** 日志级别:0,debug;1,info,2,warn,3,error **/

#endif

#if DEBUG   /**调试模式下输出格式定义**/
   
#define IS_LOG_INFO   __LOG_TYPE__ < 3
#define IS_LOG_DEBUG  __LOG_TYPE__ < 2
#define IS_LOG_WARN   __LOG_TYPE__ < 1
#define IS_LOG_ERROR  __LOG_TYPE__ ==3


#if __LOG_TYPE__==0

#define DY_LOG_DEBUG(fmt, ...)      NSLog((@"[DEBUG] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_WARN(fmt, ...)       NSLog((@"[WARN] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_ERROR(fmt, ...)      NSLog((@"[ERROR] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_INFO(fmt, ...)       NSLog((@"[INFO] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#elif __LOG_TYPE__==1

#define DY_LOG_DEBUG(fmt, ...)
#define DY_LOG_WARN(fmt, ...)       NSLog((@"[WARN] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_ERROR(fmt, ...)      NSLog((@"[ERROR] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_INFO(fmt, ...)       NSLog((@"[INFO] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#elif __LOG_TYPE__==2

#define DY_LOG_DEBUG(fmt, ...)
#define DY_LOG_WARN(fmt, ...)       NSLog((@"[WARN] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_ERROR(fmt, ...)      NSLog((@"[ERROR] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_INFO(fmt, ...)

#elif __LOG_TYPE__==3

#define DY_LOG_DEBUG(fmt, ...)
#define DY_LOG_WARN(fmt, ...)
#define DY_LOG_ERROR(fmt, ...)      NSLog((@"[ERROR] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_INFO(fmt, ...)

#endif
#else
 
#define DY_LOG_DEBUG(s,...)
#define DY_LOG_WARN(s,...)
#define DY_LOG_ERROR(s,...)         NSLog((@"[ERROR] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define DY_LOG_INFO(s,...)

#endif



