//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppStoreAppClip, NSString;

@interface CuratedCollectionItemAppStoreAppClipViewModel : NSObject
{
    NSString *;	// 8 = 0x8
    GEOAppStoreAppClip *_appClip;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006ee498
@property(readonly, nonatomic) GEOAppStoreAppClip *appClip; // @synthesize appClip=_appClip;
- (void)fetchAppClipIconWithSize:(struct CGSize)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000006ee1b5
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006edfdc
@property(readonly) unsigned long long hash;
- (id)initWithAppStoreAppClip:(id)arg1;	// IMP=0x00100000006edf5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

