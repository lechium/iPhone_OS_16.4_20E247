//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSMutableDictionary;

@interface APAttributionTokenTracker : NSObject
{
    APUnfairLock *_tokensLock;	// 8 = 0x8
    NSMutableDictionary *_bundles;	// 16 = 0x10
}

+ (id)defaultTracker;	// IMP=0x004000000001e5da
- (void).cxx_destruct;	// IMP=0x002000000001ec9f
@property(retain, nonatomic) NSMutableDictionary *bundles; // @synthesize bundles=_bundles;
@property(retain, nonatomic) APUnfairLock *tokensLock; // @synthesize tokensLock=_tokensLock;
- (_Bool)isTokenUsed:(id)arg1;	// IMP=0x001000000001e9f3
- (_Bool)isTokenUsedByOtherBundle:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001e72d
- (void)addToken:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000001e646
- (id)init;	// IMP=0x001000000001e536

@end
