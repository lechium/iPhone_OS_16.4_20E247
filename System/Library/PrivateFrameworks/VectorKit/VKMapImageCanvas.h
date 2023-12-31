//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas
{
    void *_mapEngine;	// 144 = 0x90
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x0000000000290f22
- (void).cxx_destruct;	// IMP=0x0000000000290f00
- (void)tileGroupDidChange;	// IMP=0x0000000000290eeb
- (void)cancelTileRequests;	// IMP=0x0000000000290ece
- (void)clearScene;	// IMP=0x0000000000290ebc
- (void)setMapType:(int)arg1;	// IMP=0x0000000000290ea7
- (void)resetCameraController;	// IMP=0x0000000000290b2c
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000290a2c
- (void)dealloc;	// IMP=0x00000000002909b3
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x00000000002906c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

