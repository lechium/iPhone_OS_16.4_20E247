//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString, PHCollection, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol PXImportAlbumPickerDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController
{
    PHCollection *_selectedCollection;	// 8 = 0x8
    PHCollection *_createdAlbum;	// 16 = 0x10
    _Bool _needsDatasourceUpdate;	// 24 = 0x18
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;	// 32 = 0x20
    id <PXImportAlbumPickerDelegate> _delegate;	// 40 = 0x28
    PXPhotoKitCollectionsDataSource *_dataSource;	// 48 = 0x30
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 56 = 0x38
}

+ (unsigned long long)cellTypeForPosition:(id)arg1;	// IMP=0x00100000000cc841
+ (id)dataSourceShiftedIndexPath:(id)arg1;	// IMP=0x00100000000cc7e9
+ (long long)dataSourceOffset;	// IMP=0x00100000000cc7de
- (void).cxx_destruct;	// IMP=0x00000000000cc4c3
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXImportAlbumPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // @synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration;
- (_Bool)canPresentPicker;	// IMP=0x00000000000cc444
- (CDUnknownBlockType)completionHandler;	// IMP=0x00000000000cc39d
- (id)hostViewContoller;	// IMP=0x00000000000cc394
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000cc111
- (void)configureDataSourceManagerConfiguration:(id)arg1;	// IMP=0x00000000000cc10b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cbbb3
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000cb760
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cb744
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000cb6b1
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000cb6a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000cb55e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000cb471
- (id)posterImageForCollection:(id)arg1 indexPath:(id)arg2 forCellType:(unsigned long long)arg3;	// IMP=0x00000000000cb368
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000cb243
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cb1d9
- (void)viewDidLoad;	// IMP=0x00000000000cb11a
- (id)init;	// IMP=0x00000000000cb0be
- (void)_dismissPicker;	// IMP=0x00000000000cb05f
- (void)_updateDatasource;	// IMP=0x00000000000caf67
- (id)_userCreatredAlbumsPhotoKitConfiguration;	// IMP=0x00000000000cae15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

