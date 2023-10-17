//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNUIMapTileGenerator : NSObject
{
    CDUnknownBlockType _geocoderProvider;	// 8 = 0x8
    CDUnknownBlockType _snapshotterProvider;	// 16 = 0x10
    id <CNScheduler> _workQueue;	// 24 = 0x18
    id <CNSchedulerProvider> _schedulerProvider;	// 32 = 0x20
}

+ (id)mapTileImagesForPlacemark:(id)arg1 snapshotterProvider:(CDUnknownBlockType)arg2 scheduler:(id)arg3;	// IMP=0x0040000000057310
+ (id)placemarkForAddress:(id)arg1 geocoderProvider:(CDUnknownBlockType)arg2 scheduler:(id)arg3;	// IMP=0x0040000000057213
+ (id)defaultImage;	// IMP=0x00400000000571f3
+ (double)defaultTileSize;	// IMP=0x00400000000571e5
- (void).cxx_destruct;	// IMP=0x0000000000056ee8
@property(readonly, copy, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, copy, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType snapshotterProvider; // @synthesize snapshotterProvider=_snapshotterProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType geocoderProvider; // @synthesize geocoderProvider=_geocoderProvider;
- (id)tilesForAddress:(id)arg1;	// IMP=0x0000000000056b9d
- (id)initWithGeocoderProvider:(CDUnknownBlockType)arg1 snapshotterProvider:(CDUnknownBlockType)arg2 schedulerProvider:(id)arg3;	// IMP=0x0000000000056a8d
- (id)init;	// IMP=0x0000000000056a04

@end
