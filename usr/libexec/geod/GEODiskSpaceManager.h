//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GEODiskSpaceManager : NSObject
{
    NSString *_cacheDeleteID;	// 8 = 0x8
    NSMutableArray *_diskSpaceProviders;	// 16 = 0x10
    _Bool _freePurgableInProgress;	// 24 = 0x18
    double _lastSignificantUpdate;	// 32 = 0x20
    double _cachedPurgableTime[4];	// 40 = 0x28
    unsigned long long _cachedPurgableSpace[4];	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x0020000000037dfe
- (void).cxx_destruct;	// IMP=0x0020000000038ec2
@property(readonly, copy, nonatomic) NSString *cacheDeleteID; // @synthesize cacheDeleteID=_cacheDeleteID;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x0010000000038cff
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x0010000000038b37
- (void)reportSignificantPurgableDiskSpaceUpdate;	// IMP=0x00100000000388f5
- (id)diskSpaceProviderForIdentifier:(id)arg1;	// IMP=0x00100000000386d8
- (void)addDiskSpaceProvider:(id)arg1;	// IMP=0x001000000003862b
- (void)_registerCacheDeleteCallbacks;	// IMP=0x0010000000038022
- (id)_validVolume:(id)arg1;	// IMP=0x0010000000037f1c
- (id)initWithCacheDeleteID:(id)arg1;	// IMP=0x0010000000037e94
- (id)init;	// IMP=0x0010000000037e6a

@end
