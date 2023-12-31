//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MFDOpenComposeDelegateConfigurationStore : NSObject
{
    NSMutableDictionary *_configurations;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x0020000000079c59
- (void).cxx_destruct;	// IMP=0x0020000000079e6b
- (id)consumeConfigurationWithIdentifier:(id)arg1;	// IMP=0x0010000000079dba
- (void)registerConfiguration:(id)arg1;	// IMP=0x0010000000079ced
- (id)_init;	// IMP=0x0010000000079cbe

@end

