//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasInfoGeometry, CRLShadow, MISSING_TYPE, NSArray, NSString, NSUUID, _TtC8Freeform17CRLBoardDataStore;

@interface _TtC8Freeform16CRLBoardItemBase
{
    MISSING_TYPE *store;	// 18001576 = 0x112aea8
    MISSING_TYPE *itemData;	// 512 = 0x200
}

- (void).cxx_destruct;	// IMP=0x00400000007d3b90
- (id)init;	// IMP=0x00100000007d3ae0
@property(nonatomic, readonly) NSArray *stringContentForSearch;
@property(nonatomic, readonly) _Bool needsDownload;
@property(nonatomic, readonly) _Bool isSupported;
- (id)getReferencedAssetIDsWithIncludeChildren:(_Bool)arg1;	// IMP=0x00100000007d3900
@property(nonatomic, readonly) long long hash;
- (_Bool)crl_isEqualValue:(id)arg1;	// IMP=0x00100000007d3700
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007d36e0
@property(nonatomic, readonly) _Bool enableDefaultFloatingEffect;
@property(nonatomic, retain) CRLShadow *shadow;
@property(nonatomic, copy) NSString *accessibilityDescription;
@property(nonatomic) _Bool aspectRatioLocked;
@property(nonatomic) _Bool locked;
@property(nonatomic, retain) CRLCanvasInfoGeometry *geometry;
@property(nonatomic, readonly) NSUUID *parentUUID;
@property(nonatomic, readonly) NSUUID *id;
@property(nonatomic, readonly) _TtC8Freeform17CRLBoardDataStore *store; // @synthesize store;

@end
