
#import <Foundation/Foundation.h>

#define SDK_VERSION @"iOS-2.0.0"

@interface CleverSDK : NSObject

+ (void)startWithClientId:(NSString * _Nonnull)clientId
              RedirectURI:(NSString * _Nonnull)redirectUri
             loginHandler:(void (^_Nonnull)(NSURL * _Nonnull url))loginHandler
           successHandler:(void (^_Nonnull)(NSString * _Nonnull code, BOOL validState))successHandler
           failureHandler:(void (^_Nonnull)(NSString * _Nonnull errorMessage))failureHandler;

+ (BOOL)handleURL:(NSURL * _Nonnull)url;

+ (void)login;

+ (void)loginWithDistrictId:(NSString * _Nullable)districtId;

@end
