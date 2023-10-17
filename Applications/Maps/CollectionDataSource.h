//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionEditSession, CollectionHandler, NSArray, NSString;
@protocol CollectionHandlerInfo, DeleteDelegate, ShareDelegate;

@interface CollectionDataSource
{
    CollectionHandler *_collectionHandler;	// 8 = 0x8
    CollectionEditSession *_inputCollectionSession;	// 16 = 0x10
    NSArray *_contentAfterDeletion;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _Bool _showsHeader;	// 33 = 0x21
    NSArray *_keyCommands;	// 40 = 0x28
    id <ShareDelegate> _shareDelegate;	// 48 = 0x30
    id <DeleteDelegate> _deleteDelegate;	// 56 = 0x38
    long long _sortType;	// 64 = 0x40
    CollectionEditSession *_editSession;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000007ab890
@property(retain, nonatomic) CollectionEditSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic) _Bool showsHeader; // @synthesize showsHeader=_showsHeader;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) __weak id <DeleteDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (id)keyCommands;	// IMP=0x00100000007ab7bf
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ab72b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ab697
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ab4ad
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00100000007ab345
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ab28a
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ab1bf
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007aaf06
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007aaeeb
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000007aac77
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x00100000007aac22
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000007aab1a
- (id)_cellForTransitLine:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000007aaa23
- (id)_cellForMapItem:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000007aa8fe
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007aa7d3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000007aa78f
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000007aa784
- (id)editNameContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000007aa531
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000007aa3ff
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x00100000007aa26c
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x00100000007a9f6c
- (id)editNameKeyCommandAtIndexPath:(id)arg1;	// IMP=0x00100000007a9d9d
- (void)editNameRow:(id)arg1;	// IMP=0x00100000007a9d51
- (void)shareRow:(id)arg1;	// IMP=0x00100000007a9d05
- (void);	// IMP=0x00100000007a9cb9
- (int)targetForDragAnalytics;	// IMP=0x00100000007a9bea
- (id)objectsForAnalytics;	// IMP=0x00100000007a9ba2
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00100000007a9ad8
- (id)currentContent;	// IMP=0x00100000007a9a2e
@property(readonly, nonatomic) id <CollectionHandlerInfo> collectionInfo;
- (void)selectAll;	// IMP=0x00100000007a9893
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x00100000007a988d
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x00100000007a973b
- (void)editNameRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a9580
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a934d
- (void)deleteRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a8cb0
- (void)_contentSizeCategoryDidChange;	// IMP=0x00100000007a8c73
- (void)setActive:(_Bool)arg1;	// IMP=0x00100000007a8bc6
- (void)dealloc;	// IMP=0x00100000007a8b51
- (void)_commonInitWithTableView:(id)arg1;	// IMP=0x00100000007a89e7
- (id)initWithTableView:(id)arg1 collection:(id)arg2;	// IMP=0x00100000007a8927
- (id)initWithTableView:(id)arg1 collectionEditSession:(id)arg2;	// IMP=0x00100000007a8883

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
