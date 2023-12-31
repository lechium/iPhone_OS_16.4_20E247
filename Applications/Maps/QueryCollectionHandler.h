//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol MapsSyncQueryLike;

@interface QueryCollectionHandler
{
    id <MapsSyncQueryLike> _newQuery;	// 8 = 0x8
    NSArray *_queryContents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000008a29b4
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x00100000008a281b
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a24d2
- (_Bool)canDeleteContent;	// IMP=0x00100000008a24ca
@property(readonly, nonatomic) id <MapsSyncQueryLike> query;
- (void)loadImage;	// IMP=0x00100000008a2482
- (id)glyphImage;	// IMP=0x00100000008a247a
- (void)updateContent;	// IMP=0x00100000008a244c
- (void)rebuildContent;	// IMP=0x00100000008a242f
- (id)init;	// IMP=0x00100000008a2388

@end

