
#import <Foundation/Foundation.h>

#define SDK_VERSION @"iOS-2.0.0"

@interface CleverSDK : NSObject

+ (void)startWithClientId:(NSString *)clientId
              RedirectURI:(NSString *)redirectUri
             loginHandler:(void (^)(NSURL * _Nonnull url))loginHandler
           successHandler:(void (^)(NSString *code, BOOL validState))successHandler
           failureHandler:(void (^)(NSString *errorMessage))failureHandler;

+ (BOOL)handleURL:(NSURL *)url;

+ (void)login;

+ (void)loginWithDistrictId:(NSString *)districtId;

@end
