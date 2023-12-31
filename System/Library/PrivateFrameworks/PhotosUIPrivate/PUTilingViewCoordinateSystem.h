//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUTilingView;
@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUTilingViewCoordinateSystem : NSObject
{
    PUTilingView *_tilingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004c7e93
@property(readonly, nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(readonly, nonatomic) struct CGPoint coordinateSystemOrigin;
@property(readonly, nonatomic) __weak id <PUTilingCoordinateSystem> parentCoordinateSystem;
- (id)initWithTilingView:(id)arg1;	// IMP=0x00000000004c7d11
- (id)init;	// IMP=0x00000000004c7cfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

