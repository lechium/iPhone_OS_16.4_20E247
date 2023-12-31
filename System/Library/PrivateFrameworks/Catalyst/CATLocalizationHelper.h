//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CATLocalizationHelper : NSObject
{
    NSMutableDictionary *mStringByKeyByTableName;	// 8 = 0x8
    NSLock *mLock;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
}

+ (id)helperForBundle:(id)arg1;	// IMP=0x006000000000c2be
- (void).cxx_destruct;	// IMP=0x000000000000cb1e
@property(readonly, nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x000000000000c8d3
- (id)stringByKeyForTableName:(id)arg1;	// IMP=0x000000000000c5b2
- (id)initWithBundle:(id)arg1;	// IMP=0x000000000000c4b5

@end

