//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface RDDefaults : NSObject
{
    long long _resendArchivesDelay;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0040000000005c27
- (void)updateAuthorizationVersions:(id)arg1 forBundleId:(id)arg2;	// IMP=0x0020000000006ce8
- (void)dealloc;	// IMP=0x0010000000006a1a
- (id)init;	// IMP=0x0010000000005c62

@end

