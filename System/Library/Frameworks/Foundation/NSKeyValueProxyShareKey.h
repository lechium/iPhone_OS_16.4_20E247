//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProxyShareKey : NSObject
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

+ (id)_proxyShare;	// IMP=0x0010000000472e7c
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000472e8c
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000472e84
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x0000000000472e6e

@end

