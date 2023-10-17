//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, FCKeyValueStore, FCOperationThrottler, FRAppActivityMonitor, MISSING_TYPE, NSMutableArray, NSString;
@protocol FCFlintHelper, FREditorialConfigurationProvider, FREditorialItemDownloader, FREditorialItemEntryManager, FREditorialItemThumbnailCreator, TSEditorialItemChangeDelegate;

@interface FRToCEditorialManager : NSObject
{
    id <TSEditorialItemChangeDelegate> itemChangeDelegate;	// 8 = 0x8
    FCCloudContext *_cloudContext;	// 16 = 0x10
    FRAppActivityMonitor *_activityMonitor;	// 24 = 0x18
    id <FREditorialConfigurationProvider> _editorialConfigurationProvider;	// 32 = 0x20
    FCKeyValueStore *_localStore;	// 40 = 0x28
    NSMutableArray *_interestTokens;	// 48 = 0x30
    MISSING_TYPE *_editorialItemEntryManager;	// 56 = 0x38
    id <FREditorialItemDownloader> _articleEditorialItemDownloader;	// 64 = 0x40
    id <FREditorialItemDownloader> _tagEditorialItemDownloader;	// 72 = 0x48
    id <FREditorialItemThumbnailCreator> _thumbnailCreator;	// 80 = 0x50
    id <FCFlintHelper> _flintHelper;	// 88 = 0x58
    FCOperationThrottler *_refreshThrottler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000085db9
@property(readonly, nonatomic) FCOperationThrottler *refreshThrottler; // @synthesize refreshThrottler=_refreshThrottler;
@property(readonly, nonatomic) id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(readonly, nonatomic) id <FREditorialItemThumbnailCreator> thumbnailCreator; // @synthesize thumbnailCreator=_thumbnailCreator;
@property(readonly, nonatomic) id <FREditorialItemDownloader> tagEditorialItemDownloader; // @synthesize tagEditorialItemDownloader=_tagEditorialItemDownloader;
@property(readonly, nonatomic) id <FREditorialItemDownloader> articleEditorialItemDownloader; // @synthesize articleEditorialItemDownloader=_articleEditorialItemDownloader;
@property(readonly, nonatomic) id <FREditorialItemEntryManager> editorialItemEntryManager; // @synthesize editorialItemEntryManager=_editorialItemEntryManager;
@property(retain, nonatomic) NSMutableArray *interestTokens; // @synthesize interestTokens=_interestTokens;
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) id <FREditorialConfigurationProvider> editorialConfigurationProvider; // @synthesize editorialConfigurationProvider=_editorialConfigurationProvider;
@property(readonly, nonatomic) FRAppActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) id <TSEditorialItemChangeDelegate> itemChangeDelegate; // @synthesize itemChangeDelegate;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085a2f
- (void)_fetchInterestTokenForArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008585c
- (void)prewarmWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000853f1
- (void)tappedEditorialItemWithIdentifier:(id)arg1;	// IMP=0x0010000000084750
- (void)removeBadgeForArticleID:(id)arg1;	// IMP=0x0010000000084561
- (void)_refreshEditorialItemsOrderedWith:(id)arg1;	// IMP=0x00100000000843c0
- (void)_fetchTagsAndRefreshEditorialItems;	// IMP=0x00100000000831ca
- (id)cachedEditorialItems;	// IMP=0x0010000000082963
- (_Bool)_editorialItemHasBadge:(id)arg1;	// IMP=0x0010000000082842
- (void)processOverrideEditorialItems:(id)arg1;	// IMP=0x0010000000081637
- (void)refreshEditorialItems;	// IMP=0x00100000000815fa
- (void)activityObservingApplicationWindowWillBecomeForeground;	// IMP=0x00100000000815e8
- (id)initWithCloudContext:(id)arg1 activityMonitor:(id)arg2 editorialItemEntryManager:(id)arg3 articleEditorialItemDownloader:(id)arg4 tagEditorialItemDownloader:(id)arg5 editorialConfigurationProvider:(id)arg6 thumbnailCreator:(id)arg7 flintHelper:(id)arg8;	// IMP=0x00100000000812f5
- (id)init;	// IMP=0x00100000000811b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
