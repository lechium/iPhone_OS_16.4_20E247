//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableSettings;

__attribute__((visibility("hidden")))
@interface _SWBSActionResponseSettings : NSObject
{
    BSMutableSettings *_mutableSettings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e83b
@property(retain, nonatomic) BSMutableSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
- (void)setFlag:(_Bool)arg1 forSetting:(unsigned long long)arg2;	// IMP=0x000000000000e7c7
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;	// IMP=0x000000000000e74f
- (id)bsSettings;	// IMP=0x000000000000e707
- (id)init;	// IMP=0x000000000000e6b1

@end

