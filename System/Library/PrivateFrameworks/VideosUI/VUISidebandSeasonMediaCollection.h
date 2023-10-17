//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class VUITVSeasonManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandSeasonMediaCollection : VUIMediaCollection
{
    VUITVSeasonManagedObject *_seasonManagedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000092a4c
@property(retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject; // @synthesize seasonManagedObject=_seasonManagedObject;
- (id)title;	// IMP=0x00000000000928a9
- (id)seasonNumber;	// IMP=0x000000000009272b
- (id)showIdentifier;	// IMP=0x0000000000092522
- (id)isLocal;	// IMP=0x000000000009227e
- (id)HLSColorCapability;	// IMP=0x0000000000092271
- (id)colorCapability;	// IMP=0x0000000000092264
- (id)canonicalID;	// IMP=0x00000000000920c1
- (id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x0000000000091ed8

@end
