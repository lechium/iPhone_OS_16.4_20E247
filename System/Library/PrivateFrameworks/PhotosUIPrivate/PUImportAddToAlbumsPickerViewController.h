//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSIndexPath, NSString, PHCollection, PUImportAddToAlbumsPickerCell, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol PXImportAlbumPickerDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsPickerViewController : UITableViewController
{
    PHCollection *_selectedCollection;	// 8 = 0x8
    NSIndexPath *_selectedIndex;	// 16 = 0x10
    PUImportAddToAlbumsPickerCell *_selectedCell;	// 24 = 0x18
    PHCollection *_createdAlbum;	// 32 = 0x20
    _Bool _needsDatasourceUpdate;	// 40 = 0x28
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;	// 48 = 0x30
    id <PXImportAlbumPickerDelegate> _delegate;	// 56 = 0x38
    PXPhotoKitCollectionsDataSource *_dataSource;	// 64 = 0x40
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 72 = 0x48
}

+ (unsigned long long)cellTypeForPosition:(id)arg1;	// IMP=0x00100000001e71ac
+ (id)dataSourceShiftedIndexPath:(id)arg1;	// IMP=0x00100000001e7154
+ (long long)dataSourceOffset;	// IMP=0x00100000001e7149
+ (id)userCreatredAlbumsPhotoKitConfiguration;	// IMP=0x00100000001e6ff7
- (void).cxx_destruct;	// IMP=0x00000000001e6c13
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXImportAlbumPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // @synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration;
- (void)_dismissPicker;	// IMP=0x00000000001e6b3d
- (void)_handleCreateAlbum;	// IMP=0x00000000001e6aed
- (id)createAlbumListViewController;	// IMP=0x00000000001e6a90
- (id)albumListViewControllerSpec;	// IMP=0x00000000001e6a77
- (_Bool)canPresentPicker;	// IMP=0x00000000001e6a6f
- (CDUnknownBlockType)completionHandler;	// IMP=0x00000000001e69c8
- (id)hostViewContoller;	// IMP=0x00000000001e69bf
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001e684c
- (void)configureDataSourceManagerConfiguration:(id)arg1;	// IMP=0x00000000001e6846
- (void)selectCollection:(id)arg1;	// IMP=0x00000000001e6308
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001e62d3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e600f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001e5efa
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001e5e0d
- (id)addAlbumPlaceHolder:(struct CGSize)arg1 newAlbum:(_Bool)arg2;	// IMP=0x00000000001e5ce3
- (id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3;	// IMP=0x00000000001e5ba3
- (void)_selectCell:(id)arg1;	// IMP=0x00000000001e5b23
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e5aac
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e58aa
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e57f1
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001e57dc
- (double)_heightForIndex:(id)arg1;	// IMP=0x00000000001e57ce
- (void)updateDatasource;	// IMP=0x00000000001e56ce
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001e5493
- (void)viewDidLoad;	// IMP=0x00000000001e53de
- (struct CGSize)preferredContentSize;	// IMP=0x00000000001e52a8
- (id)init;	// IMP=0x00000000001e524c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
