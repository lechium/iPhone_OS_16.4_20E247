//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol AudioComponentRegistrarProtocol
- (void)canRegisterComponent:(NSDictionary *)arg1 reply:(void (^)(_Bool))arg2;
- (void)getComponentList:(NSString *)arg1 linkedSDKRequiresEntitlement:(_Bool)arg2 includeExtensions:(_Bool)arg3 reply:(void (^)(NSData *, _Bool, NSData *, NSArray *))arg4;
@end

