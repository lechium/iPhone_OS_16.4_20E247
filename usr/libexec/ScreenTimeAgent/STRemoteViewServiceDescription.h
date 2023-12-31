//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface STRemoteViewServiceDescription : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_viewControllerClassName;	// 16 = 0x10
    NSDictionary *_configurationContextUserInfo;	// 24 = 0x18
}

+ (id)sharedDescriptionWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 configurationContextUserInfo:(id)arg3;	// IMP=0x002000000007a983
- (void).cxx_destruct;	// IMP=0x002000000007ae7d
@property(readonly) NSDictionary *configurationContextUserInfo; // @synthesize configurationContextUserInfo=_configurationContextUserInfo;
@property(readonly, copy) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(readonly, copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (unsigned long long)hash;	// IMP=0x001000000007ad82
- (_Bool)isEqualToServiceDescription:(id)arg1;	// IMP=0x001000000007aba5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ab42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007aaf1
- (id)description;	// IMP=0x001000000007a907
- (id)_initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 configurationContextUserInfo:(id)arg3;	// IMP=0x001000000007a837

@end

