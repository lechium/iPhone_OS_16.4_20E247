//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_MKUserLocationView.h"

@class MKUserLocationView;

__attribute__((visibility("hidden")))
@interface _MKUserLocationInternalView : _MKUserLocationView
{
    MKUserLocationView *_parentView;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000001aa335
@property(nonatomic) __weak MKUserLocationView *parentView; // @synthesize parentView=_parentView;
- (id)_containerView;	// IMP=0x00000000001aa2b8
- (id)_mapView;	// IMP=0x00000000001aa268
- (id)_annotationContainer;	// IMP=0x00000000001aa218
- (double)_pointsForDistance:(double)arg1;	// IMP=0x00000000001aa192

@end

