//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CollectionFooterActionTypeDelegate;

@interface CollectionFooterToolBarView
{
}

- (void)selectAction:(id)arg1;	// IMP=0x00200000000eda4a
- (void)shareAction:(id)arg1;	// IMP=0x00100000000ed9f9
- (void)addAction:(id)arg1;	// IMP=0x00100000000ed9a8
- (void)deleteAction:(id)arg1;	// IMP=0x00100000000ed957
- (void)selectAllAction:(id)arg1;	// IMP=0x00100000000ed906
- (void)addToAction:(id)arg1;	// IMP=0x00100000000ed8b5
- (void)newCollectionAction:(id)arg1;	// IMP=0x00100000000ed864
- (void)cancelAction:(id)arg1;	// IMP=0x00100000000ed813
- (void)editAction:(id)arg1;	// IMP=0x00100000000ed7c5
- (void)deleteListAction:(id)arg1;	// IMP=0x00100000000ed774
- (void)cancelListAction:(id)arg1;	// IMP=0x00100000000ed723
- (void)editListAction:(id)arg1;	// IMP=0x00100000000ed6d2
- (void)loadEditActions;	// IMP=0x00100000000ed1fc
- (void)loadEditAllActions;	// IMP=0x00100000000ecd8e
- (_Bool)_shouldUseGlyphForStrings:(id)arg1;	// IMP=0x00100000000ecb4f
- (void)loadContentActions;	// IMP=0x00100000000ec900
- (void)loadListEditAllActions;	// IMP=0x00100000000ec711
- (void)loadListEditActions;	// IMP=0x00100000000ec52f
- (void)loadListActions;	// IMP=0x00100000000ec3e4
- (void)_udpateContent;	// IMP=0x00100000000ec312

// Remaining properties
@property(nonatomic) __weak id <CollectionFooterActionTypeDelegate> delegate; // @dynamic delegate;

@end
