#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef DSFRAMEWORK_SWIFT_H
#define DSFRAMEWORK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DSFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



typedef SWIFT_ENUM(NSInteger, DRSActivity, open) {
  DRSActivityVehicle = 0,
  DRSActivityCycling = 1,
};

@protocol DRSAppProtocol;
@class NSString;
@class NSError;
@class NSNumber;
@class DSCheckStatus;
@class DRSInfoTrip;
@class DRSBluetoothDevice;

SWIFT_CLASS("_TtC11DSFramework6DRSApp")
@interface DRSApp : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <DRSAppProtocol> _Nullable delegate;)
+ (id <DRSAppProtocol> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <DRSAppProtocol> _Nullable)value;
+ (void)configureWithApkKey:(NSString * _Nonnull)apkKey completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setUserId:(NSString * _Nonnull)userId completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setCarplate:(NSString * _Nonnull)carPlate completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)getAnonymousUserWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setModeOnline:(BOOL)mode completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (BOOL)getModeOnline SWIFT_WARN_UNUSED_RESULT;
+ (void)startService;
+ (void)stopService;
+ (void)getBackupAmountWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (DSCheckStatus * _Nonnull)checkService SWIFT_WARN_UNUSED_RESULT;
+ (void)forceSendData;
+ (DRSInfoTrip * _Nullable)tripInfo SWIFT_WARN_UNUSED_RESULT;
+ (void)pauseServiceWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)reStartService;
+ (BOOL)isPaused SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isRunning SWIFT_WARN_UNUSED_RESULT;
+ (void)setMotionStartWithEnabled:(BOOL)enabled completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setBluetoothStartWithEnabled:(BOOL)enabled;
+ (NSArray<DRSBluetoothDevice *> * _Nonnull)getAvailableBluetoothDevices SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<DRSBluetoothDevice *> * _Nonnull)getStoredBluetoothDevices SWIFT_WARN_UNUSED_RESULT;
+ (void)storeBluetoothDevices:(NSArray<DRSBluetoothDevice *> * _Nonnull)devices;
+ (BOOL)checkAvailableLocation SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)checkAvailableGPS SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP11DSFramework14DRSAppProtocol_")
@protocol DRSAppProtocol
- (void)startServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)stopServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)restartServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)statusEventServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
@end


SWIFT_CLASS("_TtC11DSFramework18DRSBluetoothDevice")
@interface DRSBluetoothDevice : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nonnull mac;
- (nonnull instancetype)initWithName:(NSString * _Nullable)name mac:(NSString * _Nonnull)mac OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, DRSGPSTypes, open) {
  DRSGPSTypesBad = 3,
  DRSGPSTypesGood = 1,
  DRSGPSTypesRegular = 2,
};

@class DRSLocation;

SWIFT_CLASS("_TtC11DSFramework11DRSInfoTrip")
@interface DRSInfoTrip : NSObject
@property (nonatomic, strong) DRSLocation * _Nullable startLocation;
@property (nonatomic, strong) DRSLocation * _Nullable endLocation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11DSFramework11DRSLocation")
@interface DRSLocation : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, DRSResponse, open) {
  DRSResponseRESPONSE_OK = 0,
  DRSResponseDS_UPLOADING_TRIP = 1,
  DRSResponseDS_FINISH_UPLOADING_TRIP = 2,
};

typedef SWIFT_ENUM(NSInteger, DRSResponseErrors, open) {
  DRSResponseErrorsDS_UNHANDLED_ERROR = 0,
  DRSResponseErrorsDS_EMPTY_PARAM_ERROR = 1,
  DRSResponseErrorsDS_GPS_PROVIDER_ERROR = 2,
  DRSResponseErrorsDS_LOCATION_PERMISSIONS_ERROR = 3,
  DRSResponseErrorsDS_LOCATION_ERROR = 4,
  DRSResponseErrorsDS_SERVICE_ALREADY_RUNNING_ERROR = 5,
  DRSResponseErrorsDS_EMPTY_UUID_ERROR = 6,
  DRSResponseErrorsDS_ERROR_APK_ENTERPRISE = 7,
  DRSResponseErrorsDS_ERROR_NETWORKING_FAILURE = 8,
  DRSResponseErrorsDS_NOT_SECURITY = 9,
  DRSResponseErrorsDS_ERROR_VALIDATE_APK_ENTERPRISE = 10,
  DRSResponseErrorsDS_EMPTY_CARPLATE_ERROR = 11,
  DRSResponseErrorsDS_SERVICE_NOT_PAUSED = 12,
  DRSResponseErrorsDS_SERVICE_NOT_RUNNING = 13,
  DRSResponseErrorsDS_SERVICE_ALREDY_PAUSED = 14,
  DRSResponseErrorsDS_MOTION_PERMISSION_ERROR = 15,
};

@class NSDate;
enum DSTripStatus : NSInteger;

SWIFT_CLASS("_TtC11DSFramework13DSCheckStatus")
@interface DSCheckStatus : NSObject
@property (nonatomic, copy) NSDate * _Nonnull serviceTime;
@property (nonatomic) double timer;
@property (nonatomic) double totalDistance;
@property (nonatomic) BOOL conectivity;
@property (nonatomic) BOOL serviceCreated;
@property (nonatomic) enum DSTripStatus tripStatus;
@property (nonatomic) enum DRSGPSTypes levelGPS;
@property (nonatomic) NSInteger tripID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, DSTripStatus, open) {
  DSTripStatusNone = 0,
  DSTripStatusTest = 1,
  DSTripStatusGood = 2,
  DSTripStatusBad = 3,
};



/// Base output class
SWIFT_CLASS("_TtC11DSFramework9LogOutput")
@interface LogOutput : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11DSFramework4File")
@interface File : LogOutput
@end


SWIFT_CLASS("_TtC11DSFramework6Filter")
@interface Filter : LogOutput
@end

@class LogScope;
enum LogType : NSInteger;

SWIFT_CLASS("_TtC11DSFramework7LogItem")
@interface LogItem : NSObject
@property (nonatomic, copy) NSDate * _Nullable time;
@property (nonatomic, readonly, copy) NSString * _Nonnull category;
@property (nonatomic, readonly, strong) LogScope * _Nullable scope;
@property (nonatomic, readonly) enum LogType type;
@property (nonatomic, readonly, copy) NSString * _Nonnull fileName;
@property (nonatomic, readonly, copy) NSString * _Nonnull funcName;
@property (nonatomic, readonly) NSUInteger line;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11DSFramework11LogInterval")
@interface LogInterval : LogItem
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSTimeInterval minDuration;
@property (nonatomic, readonly) NSTimeInterval maxDuration;
@property (nonatomic, readonly) NSTimeInterval avgDuration;
- (void)begin;
- (void)end;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text SWIFT_UNAVAILABLE;
@end





SWIFT_CLASS("_TtC11DSFramework8LogScope")
@interface LogScope : LogItem
@property (nonatomic, readonly) NSTimeInterval duration;
- (void)enter;
- (void)leave;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text SWIFT_UNAVAILABLE;
@end


@interface LogScope (SWIFT_EXTENSION(DSFramework))
- (NSString * _Nullable)log:(NSString * _Nonnull)text type:(enum LogType)type category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSUInteger)line SWIFT_WARN_UNUSED_RESULT;
- (LogScope * _Nonnull)scope:(NSString * _Nonnull)text category:(NSString * _Nonnull)category file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSUInteger)line closure:(void (^ _Nullable)(LogScope * _Nonnull))closure SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, LogType, open) {
  LogTypeTrace = 0,
  LogTypeInfo = 1,
  LogTypeInterval = 2,
  LogTypeScope = 3,
  LogTypeDebug = 4,
  LogTypeError = 5,
  LogTypeAssert = 6,
  LogTypeFault = 7,
};


SWIFT_CLASS("_TtC11DSFramework3Net")
@interface Net : LogOutput
@end

@class NSStream;

@interface Net (SWIFT_EXTENSION(DSFramework)) <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

@class NSNetServiceBrowser;
@class NSNetService;

@interface Net (SWIFT_EXTENSION(DSFramework)) <NSNetServiceBrowserDelegate>
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser * _Nonnull)browser;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser * _Nonnull)browser;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didNotSearch:(NSDictionary<NSString *, NSNumber *> * _Nonnull)errorDict;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didFindService:(NSNetService * _Nonnull)service moreComing:(BOOL)moreComing;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didRemoveService:(NSNetService * _Nonnull)service moreComing:(BOOL)moreComing;
@end


SWIFT_CLASS("_TtC11DSFramework5OSLog")
@interface OSLog : LogOutput
@end



SWIFT_CLASS("_TtC11DSFramework8Standard")
@interface Standard : LogOutput
@end


SWIFT_CLASS("_TtC11DSFramework4Text")
@interface Text : LogOutput
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef DSFRAMEWORK_SWIFT_H
#define DSFRAMEWORK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DSFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



typedef SWIFT_ENUM(NSInteger, DRSActivity, open) {
  DRSActivityVehicle = 0,
  DRSActivityCycling = 1,
};

@protocol DRSAppProtocol;
@class NSString;
@class NSError;
@class NSNumber;
@class DSCheckStatus;
@class DRSInfoTrip;
@class DRSBluetoothDevice;

SWIFT_CLASS("_TtC11DSFramework6DRSApp")
@interface DRSApp : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <DRSAppProtocol> _Nullable delegate;)
+ (id <DRSAppProtocol> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <DRSAppProtocol> _Nullable)value;
+ (void)configureWithApkKey:(NSString * _Nonnull)apkKey completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setUserId:(NSString * _Nonnull)userId completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setCarplate:(NSString * _Nonnull)carPlate completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)getAnonymousUserWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setModeOnline:(BOOL)mode completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (BOOL)getModeOnline SWIFT_WARN_UNUSED_RESULT;
+ (void)startService;
+ (void)stopService;
+ (void)getBackupAmountWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (DSCheckStatus * _Nonnull)checkService SWIFT_WARN_UNUSED_RESULT;
+ (void)forceSendData;
+ (DRSInfoTrip * _Nullable)tripInfo SWIFT_WARN_UNUSED_RESULT;
+ (void)pauseServiceWithCompletion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)reStartService;
+ (BOOL)isPaused SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isRunning SWIFT_WARN_UNUSED_RESULT;
+ (void)setMotionStartWithEnabled:(BOOL)enabled completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
+ (void)setBluetoothStartWithEnabled:(BOOL)enabled;
+ (NSArray<DRSBluetoothDevice *> * _Nonnull)getAvailableBluetoothDevices SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<DRSBluetoothDevice *> * _Nonnull)getStoredBluetoothDevices SWIFT_WARN_UNUSED_RESULT;
+ (void)storeBluetoothDevices:(NSArray<DRSBluetoothDevice *> * _Nonnull)devices;
+ (BOOL)checkAvailableLocation SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)checkAvailableGPS SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP11DSFramework14DRSAppProtocol_")
@protocol DRSAppProtocol
- (void)startServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)stopServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)restartServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
- (void)statusEventServiceWithResult:(id _Nullable)result error:(NSError * _Nullable)error;
@end


SWIFT_CLASS("_TtC11DSFramework18DRSBluetoothDevice")
@interface DRSBluetoothDevice : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nonnull mac;
- (nonnull instancetype)initWithName:(NSString * _Nullable)name mac:(NSString * _Nonnull)mac OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, DRSGPSTypes, open) {
  DRSGPSTypesBad = 3,
  DRSGPSTypesGood = 1,
  DRSGPSTypesRegular = 2,
};

@class DRSLocation;

SWIFT_CLASS("_TtC11DSFramework11DRSInfoTrip")
@interface DRSInfoTrip : NSObject
@property (nonatomic, strong) DRSLocation * _Nullable startLocation;
@property (nonatomic, strong) DRSLocation * _Nullable endLocation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11DSFramework11DRSLocation")
@interface DRSLocation : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, DRSResponse, open) {
  DRSResponseRESPONSE_OK = 0,
  DRSResponseDS_UPLOADING_TRIP = 1,
  DRSResponseDS_FINISH_UPLOADING_TRIP = 2,
};

typedef SWIFT_ENUM(NSInteger, DRSResponseErrors, open) {
  DRSResponseErrorsDS_UNHANDLED_ERROR = 0,
  DRSResponseErrorsDS_EMPTY_PARAM_ERROR = 1,
  DRSResponseErrorsDS_GPS_PROVIDER_ERROR = 2,
  DRSResponseErrorsDS_LOCATION_PERMISSIONS_ERROR = 3,
  DRSResponseErrorsDS_LOCATION_ERROR = 4,
  DRSResponseErrorsDS_SERVICE_ALREADY_RUNNING_ERROR = 5,
  DRSResponseErrorsDS_EMPTY_UUID_ERROR = 6,
  DRSResponseErrorsDS_ERROR_APK_ENTERPRISE = 7,
  DRSResponseErrorsDS_ERROR_NETWORKING_FAILURE = 8,
  DRSResponseErrorsDS_NOT_SECURITY = 9,
  DRSResponseErrorsDS_ERROR_VALIDATE_APK_ENTERPRISE = 10,
  DRSResponseErrorsDS_EMPTY_CARPLATE_ERROR = 11,
  DRSResponseErrorsDS_SERVICE_NOT_PAUSED = 12,
  DRSResponseErrorsDS_SERVICE_NOT_RUNNING = 13,
  DRSResponseErrorsDS_SERVICE_ALREDY_PAUSED = 14,
  DRSResponseErrorsDS_MOTION_PERMISSION_ERROR = 15,
};

@class NSDate;
enum DSTripStatus : NSInteger;

SWIFT_CLASS("_TtC11DSFramework13DSCheckStatus")
@interface DSCheckStatus : NSObject
@property (nonatomic, copy) NSDate * _Nonnull serviceTime;
@property (nonatomic) double timer;
@property (nonatomic) double totalDistance;
@property (nonatomic) BOOL conectivity;
@property (nonatomic) BOOL serviceCreated;
@property (nonatomic) enum DSTripStatus tripStatus;
@property (nonatomic) enum DRSGPSTypes levelGPS;
@property (nonatomic) NSInteger tripID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, DSTripStatus, open) {
  DSTripStatusNone = 0,
  DSTripStatusTest = 1,
  DSTripStatusGood = 2,
  DSTripStatusBad = 3,
};



/// Base output class
SWIFT_CLASS("_TtC11DSFramework9LogOutput")
@interface LogOutput : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11DSFramework4File")
@interface File : LogOutput
@end


SWIFT_CLASS("_TtC11DSFramework6Filter")
@interface Filter : LogOutput
@end

@class LogScope;
enum LogType : NSInteger;

SWIFT_CLASS("_TtC11DSFramework7LogItem")
@interface LogItem : NSObject
@property (nonatomic, copy) NSDate * _Nullable time;
@property (nonatomic, readonly, copy) NSString * _Nonnull category;
@property (nonatomic, readonly, strong) LogScope * _Nullable scope;
@property (nonatomic, readonly) enum LogType type;
@property (nonatomic, readonly, copy) NSString * _Nonnull fileName;
@property (nonatomic, readonly, copy) NSString * _Nonnull funcName;
@property (nonatomic, readonly) NSUInteger line;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11DSFramework11LogInterval")
@interface LogInterval : LogItem
@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSTimeInterval minDuration;
@property (nonatomic, readonly) NSTimeInterval maxDuration;
@property (nonatomic, readonly) NSTimeInterval avgDuration;
- (void)begin;
- (void)end;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text SWIFT_UNAVAILABLE;
@end





SWIFT_CLASS("_TtC11DSFramework8LogScope")
@interface LogScope : LogItem
@property (nonatomic, readonly) NSTimeInterval duration;
- (void)enter;
- (void)leave;
- (nonnull instancetype)initWithTime:(NSDate * _Nullable)time category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope type:(enum LogType)type fileName:(NSString * _Nonnull)fileName funcName:(NSString * _Nonnull)funcName line:(NSUInteger)line text:(NSString * _Nonnull)text SWIFT_UNAVAILABLE;
@end


@interface LogScope (SWIFT_EXTENSION(DSFramework))
- (NSString * _Nullable)log:(NSString * _Nonnull)text type:(enum LogType)type category:(NSString * _Nonnull)category scope:(LogScope * _Nullable)scope file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSUInteger)line SWIFT_WARN_UNUSED_RESULT;
- (LogScope * _Nonnull)scope:(NSString * _Nonnull)text category:(NSString * _Nonnull)category file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSUInteger)line closure:(void (^ _Nullable)(LogScope * _Nonnull))closure SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, LogType, open) {
  LogTypeTrace = 0,
  LogTypeInfo = 1,
  LogTypeInterval = 2,
  LogTypeScope = 3,
  LogTypeDebug = 4,
  LogTypeError = 5,
  LogTypeAssert = 6,
  LogTypeFault = 7,
};


SWIFT_CLASS("_TtC11DSFramework3Net")
@interface Net : LogOutput
@end

@class NSStream;

@interface Net (SWIFT_EXTENSION(DSFramework)) <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

@class NSNetServiceBrowser;
@class NSNetService;

@interface Net (SWIFT_EXTENSION(DSFramework)) <NSNetServiceBrowserDelegate>
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser * _Nonnull)browser;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser * _Nonnull)browser;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didNotSearch:(NSDictionary<NSString *, NSNumber *> * _Nonnull)errorDict;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didFindService:(NSNetService * _Nonnull)service moreComing:(BOOL)moreComing;
- (void)netServiceBrowser:(NSNetServiceBrowser * _Nonnull)browser didRemoveService:(NSNetService * _Nonnull)service moreComing:(BOOL)moreComing;
@end


SWIFT_CLASS("_TtC11DSFramework5OSLog")
@interface OSLog : LogOutput
@end



SWIFT_CLASS("_TtC11DSFramework8Standard")
@interface Standard : LogOutput
@end


SWIFT_CLASS("_TtC11DSFramework4Text")
@interface Text : LogOutput
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
