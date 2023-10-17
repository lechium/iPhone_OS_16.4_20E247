//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MKMultiPolygonGeoRegion : NSObject
{
    NSArray *_polygons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f2bb2
@property(retain, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f276a
- (_Bool)_loadWithRootJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f251e
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000000f23c9
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f2357
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f2232

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
