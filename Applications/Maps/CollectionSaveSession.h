//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSObject;
@protocol GEOTransitLine;

@interface CollectionSaveSession
{
}

- (void)applyToCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00200000008d7a97
- (_Bool)canRenameSelectedObjectInCollection:(id)arg1;	// IMP=0x00100000008d79d0
@property(readonly, nonatomic) NSObject<GEOTransitLine> *transitLine;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000008d784f

@end
