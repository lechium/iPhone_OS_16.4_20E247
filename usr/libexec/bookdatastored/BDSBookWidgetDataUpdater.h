//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSBookWidgetDataFile, BDSWidgetCenterManager, NSArray, NSDictionary, NSFetchedResultsController, NSManagedObjectContext, NSString;

@interface BDSBookWidgetDataUpdater : NSObject
{
    struct os_unfair_lock_s _dataLock;	// 8 = 0x8
    _Bool _dataFileDataIsNil;	// 12 = 0xc
    NSArray *_currentWidgetDatas;	// 16 = 0x10
    NSDictionary *_currentWidgetDatasByAssetID;	// 24 = 0x18
    NSManagedObjectContext *_moc;	// 32 = 0x20
    NSFetchedResultsController *_fetchedResultsController;	// 40 = 0x28
    NSFetchedResultsController *_progressFetchedResultsController;	// 48 = 0x30
    BDSBookWidgetDataFile *_dataFile;	// 56 = 0x38
    BDSWidgetCenterManager *_widgetCenterManager;	// 64 = 0x40
}

+ (id)predicateToExcludeLibraryAssetsWithExplicitContent;	// IMP=0x0020000000013635
- (void).cxx_destruct;	// IMP=0x0020000000014b93
@property(readonly, nonatomic) BDSWidgetCenterManager *widgetCenterManager; // @synthesize widgetCenterManager=_widgetCenterManager;
@property(nonatomic) _Bool dataFileDataIsNil; // @synthesize dataFileDataIsNil=_dataFileDataIsNil;
@property(retain, nonatomic) BDSBookWidgetDataFile *dataFile; // @synthesize dataFile=_dataFile;
@property(retain, nonatomic) NSFetchedResultsController *progressFetchedResultsController; // @synthesize progressFetchedResultsController=_progressFetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(readonly, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (void)restrictionsForExplicitContentAllowedChanged:(_Bool)arg1;	// IMP=0x001000000001499c
- (void)controller:(id)arg1 didChangeContentWithDifference:(id)arg2;	// IMP=0x00100000000145bd
- (_Bool)_moc_updateAndMonitorProgressForWidgetDatas:(id)arg1;	// IMP=0x0010000000014287
- (_Bool)_moc_updateWidgetDatas:(id)arg1 fromAssetDetails:(id)arg2;	// IMP=0x0010000000013d25
- (float)_roundReadingProgessLikeBooksApp:(float)arg1;	// IMP=0x0010000000013cbc
- (void)_saveCurrentWidgetDatas;	// IMP=0x0010000000013c35
- (void)_readCurrentWidgetDatas;	// IMP=0x0010000000013ba9
- (void)reloadWidgetTimelines;	// IMP=0x0010000000013b27
- (void)_saveWidgetDatasWithWidgetDatasHaveChanged:(_Bool)arg1;	// IMP=0x0010000000013a9d
- (_Bool)_moc_updateWidgetDataFromWidgetInfo:(id)arg1;	// IMP=0x0010000000013661
- (_Bool)isExplicitMaterialAllowed;	// IMP=0x00100000000135ea
- (id)_newWidgetInfoFetchRequest;	// IMP=0x00100000000132b3
- (void)_moc_updateAndMonitorBookWidgetInfo;	// IMP=0x0010000000013038
- (void)dealloc;	// IMP=0x0010000000012ffa
- (void)resume;	// IMP=0x0010000000012ee3
- (void)setCurrentWidgetDatas:(id)arg1 currentWidgetDatasByAssetID:(id)arg2;	// IMP=0x0010000000012d25
- (void)setCurrentWidgetDatas:(id)arg1;	// IMP=0x0010000000012b2e
@property(readonly, copy, nonatomic) NSDictionary *currentWidgetDatasByAssetID; // @synthesize currentWidgetDatasByAssetID=_currentWidgetDatasByAssetID;
@property(readonly, copy, nonatomic) NSArray *currentWidgetDatas; // @synthesize currentWidgetDatas=_currentWidgetDatas;
- (void)_stopObserving;	// IMP=0x001000000001282c
- (void)_startObserving;	// IMP=0x001000000001278e
- (id)initWithWidgetCenterManager:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x0010000000012698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

