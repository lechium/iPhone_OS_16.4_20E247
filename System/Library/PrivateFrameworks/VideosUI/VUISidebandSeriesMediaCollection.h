//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeriesMediaCollection : VUIMediaCollection
{
    VUITVSeriesManagedObject *_seriesManagedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002c9204
@property(retain, nonatomic) VUITVSeriesManagedObject *seriesManagedObject; // @synthesize seriesManagedObject=_seriesManagedObject;
- (id)seasonCount;	// IMP=0x00000000002c9012
- (id)title;	// IMP=0x00000000002c8e94
- (id)showIdentifier;	// IMP=0x00000000002c8ca9
- (id)isLocal;	// IMP=0x00000000002c8a05
- (id)HLSColorCapability;	// IMP=0x00000000002c89f8
- (id)colorCapability;	// IMP=0x00000000002c89eb
- (id)canonicalID;	// IMP=0x00000000002c8848
- (id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x00000000002c865f

@end

