//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager, NSArray, NSUserDefaults;

@interface WatchSyncedPreferences : NSObject
{
    NPSManager *_manager;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000041650
@property(readonly, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)synchronize;	// IMP=0x001000000004142b
- (void)loadValuesFromDefaults;	// IMP=0x0010000000041425
- (id)description;	// IMP=0x00100000000412b4
- (unsigned long long)hash;	// IMP=0x0010000000041227
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000040ebc
- (void)_forEachKeyAndValueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000040d45
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x0010000000040d3d
@property(readonly, nonatomic) NSArray *_values;
@property(readonly, nonatomic) NSArray *_keys;
- (id)initWithDefaults:(id)arg1;	// IMP=0x0010000000040c98

@end
