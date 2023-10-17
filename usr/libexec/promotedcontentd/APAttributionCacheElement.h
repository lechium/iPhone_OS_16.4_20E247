//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface APAttributionCacheElement : NSObject
{
    _Bool _appAdTrackingStatus;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_token;	// 24 = 0x18
    NSUUID *_toroID;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
}

+ (void)clearCache;	// IMP=0x004000000002236e
+ (void)cleanCache;	// IMP=0x00100000000220e8
+ (void)cacheStore;	// IMP=0x0010000000021d25
+ (id)cachedElementForBundleIdentifier:(id)arg1;	// IMP=0x0010000000021c8c
+ (id)elementWithToken:(id)arg1 andBundle:(id)arg2 andAppTrackingStatus:(_Bool)arg3 andToroID:(id)arg4;	// IMP=0x0010000000021b7b
- (void).cxx_destruct;	// IMP=0x002000000002242d
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool appAdTrackingStatus; // @synthesize appAdTrackingStatus=_appAdTrackingStatus;
@property(retain, nonatomic) NSUUID *toroID; // @synthesize toroID=_toroID;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isValidCheckWithToroID:(id)arg1 andTrackingStatus:(_Bool)arg2;	// IMP=0x0010000000022097
- (_Bool)didToroIDChange:(id)arg1;	// IMP=0x0010000000021fdd
- (_Bool)didAppTrackingStateChange:(_Bool)arg1;	// IMP=0x0010000000021f49
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWith:(id)arg1 andToken:(id)arg2 andAppTrackingStatus:(_Bool)arg3 andToroID:(id)arg4;	// IMP=0x0010000000021a79

@end
